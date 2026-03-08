/*
 * XREFs of NtGdiGetStats @ 0x1C01867F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C006F140 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall NtGdiGetStats(__int64 a1, int a2, unsigned int a3, volatile void *a4, SIZE_T Length)
{
  int v8; // esi
  __int64 v9; // r13
  int v10; // ebx
  int v11; // edi
  int v12; // edi
  unsigned int v13; // esi
  unsigned int NextEntryIndex; // edx
  struct _ENTRY *v16; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1;
  v16 = 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v10 = 0;
  if ( (RtlGetNtGlobalFlags() & 0x400) == 0 )
    v10 = -1073741790;
  if ( a2 )
  {
    if ( a2 != 1 && a2 != 2 && (unsigned int)(a2 - 3) >= 2 )
      v10 = -1073741822;
  }
  else if ( (unsigned int)Length < 0x7C )
  {
    v10 = -1073741789;
  }
  if ( v10 >= 0 )
  {
    ProbeForWrite(a4, (unsigned int)Length, 1u);
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( (unsigned int)(v12 - 1) >= 2 )
            return (unsigned int)-1073741822;
        }
      }
    }
    else
    {
      if ( a3 == -2147483646 )
        v13 = v8 & 0xFFFFFFFC;
      else
        v13 = a3;
      NextEntryIndex = 0;
      while ( 1 )
      {
        NextEntryIndex = GdiHandleManager::GetNextEntryIndex(*(GdiHandleManager **)(v9 + 8008), NextEntryIndex, &v16);
        if ( !NextEntryIndex )
          break;
        if ( v13 == 1 || v13 == (*((_DWORD *)v16 + 2) & 0xFFFFFFFE) )
          v10 = -1073741822;
      }
    }
  }
  return (unsigned int)v10;
}
