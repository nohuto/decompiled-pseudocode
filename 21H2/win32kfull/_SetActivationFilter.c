/*
 * XREFs of _SetActivationFilter @ 0x1C00042D4
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0004220 (NtUserSetActivationFilter.c)
 * Callees:
 *     _FindActivationFilterWindow @ 0x1C005FD68 (_FindActivationFilterWindow.c)
 */

__int64 __fastcall SetActivationFilter(__int64 a1, int a2)
{
  __int64 ActivationFilterWindow; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  ActivationFilterWindow = FindActivationFilterWindow();
  v5 = 0;
  v6 = ActivationFilterWindow;
  if ( a2 )
  {
    if ( !ActivationFilterWindow )
    {
      v8 = Win32AllocPoolZInit(32LL, 1869443925LL);
      v6 = v8;
      if ( !v8 )
        goto LABEL_4;
      v11[1] = a1;
      v11[0] = v8 + 16;
      HMAssignmentLock(v11, 0LL);
      v9 = *(_QWORD *)(a1 + 24) + 304LL;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *(_QWORD *)v6 = v10;
      *(_QWORD *)(v6 + 8) = v9;
      *(_QWORD *)(v10 + 8) = v6;
      *(_QWORD *)v9 = v6;
    }
    goto LABEL_3;
  }
  if ( ActivationFilterWindow )
LABEL_3:
    *(_DWORD *)(v6 + 24) = a2;
LABEL_4:
  LOBYTE(v5) = v6 != 0;
  return v5;
}
