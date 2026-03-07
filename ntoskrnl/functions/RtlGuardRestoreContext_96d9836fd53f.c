__int64 __fastcall RtlGuardRestoreContext(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rdi
  __int64 Config; // rax
  __int64 v8; // rdx
  rsize_t v9; // r8
  unsigned int v10; // eax
  int Key; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( *(_DWORD *)a2 == -2147483610 )
    {
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 80LL));
    }
    else if ( *(_DWORD *)a2 == -1073741785 && !(_BYTE)KiKernelCetEnabled )
    {
      v4 = *(_QWORD *)(a1 + 248);
      v12 = 0LL;
      if ( (unsigned int)RtlpControlFlowGuardEnforced() )
      {
        RtlPcToFileHeader(v4, &v12);
        v6 = v12;
        if ( v12 )
        {
          Config = LdrImageDirectoryEntryToLoadConfig(v12);
          v8 = Config;
          if ( Config )
          {
            if ( *(_DWORD *)Config >= 0x118u
              && (*(_DWORD *)(Config + 144) & 0x400000) != 0
              && *(_QWORD *)(Config + 264) > v6 )
            {
              Key = v4 - v6;
              v9 = *(_QWORD *)(Config + 272);
              v10 = (*(_DWORD *)(Config + 144) >> 28) + 4;
              if ( !v9 || !bsearch_s(&Key, *(const void **)(v8 + 264), v9, v10, RtlpTargetCompare, 0LL) )
                RtlFailFast2(38LL, v4);
            }
          }
        }
      }
    }
  }
  return RtlRestoreContext(a1, a2);
}
