__int64 __fastcall HMValidateCatHandleNoRip(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r14
  char *v7; // rdi
  __int64 v8; // rbp
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // r8
  __int16 v14; // ax
  _QWORD *v15; // rax
  __int64 v16; // rax

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = gpKernelHandleTable;
    v7 = (char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v8 = 3 * ((__int64)(dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1) >> 5);
    v9 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *((_WORD *)v7 + 13)
      || v9 == 0x7FFF
      || !v9 && PsGetCurrentProcessWow64Process(0x7FFFLL, v3, v4, v5) )
    {
      if ( v7[24] == 23 )
        v2 = v6[v8];
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL, v10) )
          v2 = 0LL;
      }
      else
      {
        v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL, v10) != 0);
        v2 &= v11;
      }
      if ( v7[25] < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
        v13 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v14 = *((_WORD *)&unk_1C028159C + 12 * (unsigned __int8)v7[24]);
            if ( (v14 & 2) != 0 )
            {
              v15 = (_QWORD *)v6[v8 + 1];
            }
            else
            {
              if ( (v14 & 1) == 0 )
                return v2;
              v16 = v6[v8 + 1];
              if ( !v16 )
                return v2;
              v15 = *(_QWORD **)(v16 + 424);
            }
            if ( v15 && v15 != v13 )
              return 0LL;
          }
        }
      }
    }
  }
  return v2;
}
