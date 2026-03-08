/*
 * XREFs of BiCleanupLoadedStores @ 0x1408311C8
 * Callers:
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D6370 (wcstoul.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     BiIsSystemStore @ 0x14082C6CC (BiIsSystemStore.c)
 *     BiIsWinPEBoot @ 0x14082C790 (BiIsWinPEBoot.c)
 *     BiEnumerateSubKeys @ 0x14082D288 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x1408310F8 (BiOpenKeyNonBcd.c)
 *     BcdForciblyUnloadStore @ 0x140A5964C (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x140A5A09C (BiUnloadHiveByHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  bool IsWinPEBoot; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  bool IsSystemStore; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG v7; // [rsp+68h] [rbp+38h] BYREF
  void *v8; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  v8 = 0LL;
  v7 = 0;
  P[0] = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, P, &v7) >= 0 && v7 )
    {
      v3 = (const wchar_t **)P[0];
      v4 = v7;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey((__int64)Handle, *v3, 0x20019u, &v8) >= 0 )
        {
          IsSystemStore = BiIsSystemStore((__int64)v8);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v8);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v8, 0LL);
          }
          else
          {
            BiCloseKey(v8);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
