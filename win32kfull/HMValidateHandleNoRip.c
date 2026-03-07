__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int16 v7; // ax
  __int64 v8; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rdx
  __int16 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rax

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v6 = (__int64 *)HMPkheFromPhe(v5);
    v7 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v5 + 26) || v7 == 0x7FFF || !v7 && PsGetCurrentProcessWow64Process(0x7FFFLL) )
    {
      if ( (*(_BYTE *)(v5 + 25) & 1) == 0 && *(_BYTE *)(v5 + 24) == a2 )
        v3 = *v6;
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
          v3 = 0LL;
      }
      else
      {
        v8 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v8;
      }
      if ( *(char *)(v5 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
        v11 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v12 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
            if ( (v12 & 2) != 0 )
            {
              v13 = (_QWORD *)v6[1];
            }
            else
            {
              if ( (v12 & 1) == 0 )
                return v3;
              v14 = v6[1];
              if ( !v14 )
                return v3;
              v13 = *(_QWORD **)(v14 + 424);
            }
            if ( v13 && v13 != v11 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
