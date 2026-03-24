/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x140340314
 * Callers:
 *     RtlGuardRestoreContext @ 0x1403402B8 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14031AE00 (RtlPcToFileHeader.c)
 *     RtlpControlFlowGuardEnforced @ 0x1403403F0 (RtlpControlFlowGuardEnforced.c)
 *     bsearch_s @ 0x1403D1E90 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1404081B0 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 Config; // rax
  __int64 v7; // rdx
  rsize_t v8; // r8
  unsigned int v9; // eax
  int Key; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(Key) = a2;
  v12 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(a1, &v12, v3, v4);
    v5 = v12;
    if ( v12 )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(v12);
      v7 = Config;
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0x118u
          && (*(_DWORD *)(Config + 144) & 0x400000) != 0
          && *(_QWORD *)(Config + 264) > v5 )
        {
          Key = a1 - v5;
          v8 = *(_QWORD *)(Config + 272);
          v9 = (*(_DWORD *)(Config + 144) >> 28) + 4;
          if ( !v8 || !bsearch_s(&Key, *(const void **)(v7 + 264), v8, v9, RtlpTargetCompare, 0LL) )
            RtlFailFast2(38LL, a1);
        }
      }
    }
  }
  return 0LL;
}
