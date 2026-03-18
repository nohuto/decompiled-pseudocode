/*
 * XREFs of NtSetTimer @ 0x1403B2290
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x14032E588 (ExpSetTimer.c)
 */

__int64 __fastcall NtSetTimer(
        void *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        signed int a6,
        __int64 a7)
{
  __int64 *v9; // rbx
  bool v10; // si
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rax
  char v13; // cl
  _QWORD *v14; // r14
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 result; // rax
  char v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-38h] BYREF

  v9 = (__int64 *)a2;
  v22 = 0LL;
  v21 = 0;
  P[0] = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v12 = a2;
    v22 = *(_QWORD *)v12;
    v9 = &v22;
    P[1] = &v22;
    v13 = a5;
  }
  else
  {
    v13 = a5;
    if ( a5 )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( a6 < 0 )
    return 3221225716LL;
  if ( !v13
    || v10
    || (result = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, (bool *)&v21, (__int64 *)P), (int)result >= 0) )
  {
    v14 = P[0];
    v15 = ExpSetTimer(a1, PreviousMode, (__int64)v9, a3, a4, (__int64)P[0], v21, a6, 0, a7);
    v19 = v15;
    if ( (v15 < 0 || v15 == 1073741861) && v14 )
      PoDestroyReasonContext(v14, v16, v17, v18);
    if ( v19 >= 0 && v10 )
      return 1073741861;
    return (unsigned int)v19;
  }
  return result;
}
