/*
 * XREFs of HMValidateCatHandleNoRip @ 0x1C0210298
 * Callers:
 *     UserGetWindowThreadProcessId @ 0x1C0166F24 (UserGetWindowThreadProcessId.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C002DD80 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateCatHandleNoRip(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r14
  char *v6; // rdi
  __int64 v7; // rbp
  __int16 v8; // ax
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = gpKernelHandleTable;
    v6 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5);
    v8 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *((_WORD *)v6 + 13)
      || v8 == 0x7FFF
      || !v8 && PsGetCurrentProcessWow64Process(0x7FFFLL, v3, v4) )
    {
      if ( v6[24] == 23 )
        v2 = v5[v7];
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3) )
          v2 = 0LL;
      }
      else
      {
        v9 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2) != 0);
        v2 &= v9;
      }
      if ( v6[25] < 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
        if ( CurrentProcessWin32Process )
        {
          v11 = *((_WORD *)&unk_1C024AF4C + 12 * (unsigned __int8)v6[24]);
          if ( (v11 & 2) != 0 )
          {
            v12 = v5[v7 + 1];
          }
          else
          {
            if ( (v11 & 1) == 0 )
              return v2;
            v13 = v5[v7 + 1];
            if ( !v13 )
              return v2;
            v12 = *(_QWORD *)(v13 + 424);
          }
          if ( v12 && v12 != CurrentProcessWin32Process )
            return 0LL;
        }
      }
    }
  }
  return v2;
}
