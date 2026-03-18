/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C014F2C0
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C0141880 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     _HMPheFromObject @ 0x1C00481A0 (_HMPheFromObject.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     HMDestroyUnlockedObject @ 0x1C012C9D0 (HMDestroyUnlockedObject.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(int a1)
{
  struct tagTHREADINFO *v1; // rsi
  __int64 v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbx
  char *v8; // rbp
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ecx

  v1 = gptiCurrent;
  v2 = 0LL;
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) == 0 )
    goto LABEL_11;
  v3 = (_DWORD *)HMValidateHandleNoSecure(a1, 23);
  v7 = v3;
  if ( !v3 )
  {
    v15 = 6;
    goto LABEL_12;
  }
  v8 = HMPheFromObject(v3, v4, v5, v6);
  v9 = (struct tagTHREADINFO *)*((_QWORD *)gpKernelHandleTable
                               + 3 * (unsigned int)((v8 - (char *)qword_1C028FE68) >> 5)
                               + 1);
  v10 = *((_QWORD *)v9 + 53);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(3LL * (unsigned int)((v8 - (char *)qword_1C028FE68) >> 5));
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v14 != v10 || v1 != v9 )
  {
    v15 = 5;
LABEL_12:
    UserSetLastError(v15);
    return v2;
  }
  if ( (v8[25] & 1) != 0 )
  {
LABEL_11:
    v15 = 4317;
    goto LABEL_12;
  }
  v2 = *((_QWORD *)v7 + 7);
  *((_QWORD *)v7 + 7) = 0LL;
  HMDestroyUnlockedObject((struct _HANDLEENTRY *)v8, v14, v12, v13);
  return v2;
}
