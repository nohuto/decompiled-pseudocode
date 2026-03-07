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
  __int64 v13; // rdx
  char v14; // cl
  _QWORD *v15; // r14
  NTSTATUS v16; // eax
  int v17; // ebx
  __int64 result; // rax
  char v19[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-38h] BYREF

  v9 = (__int64 *)a2;
  v20 = 0LL;
  v19[0] = 0;
  P[0] = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v12 = a2;
    v20 = *(_QWORD *)v12;
    v9 = &v20;
    P[1] = &v20;
    v13 = 1LL;
    v14 = a5;
  }
  else
  {
    v14 = a5;
    v13 = 1LL;
    if ( a5 )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( a6 < 0 )
    return 3221225716LL;
  if ( !v14
    || v10
    || (LOBYTE(v13) = PreviousMode, result = PoCaptureReasonContext(0LL, v13, 0LL, 1, (__int64)v19, P), (int)result >= 0) )
  {
    v15 = P[0];
    v16 = ExpSetTimer(a1, PreviousMode, (__int64)v9, a3, a4, (__int64)P[0], v19[0], a6, 0, a7);
    v17 = v16;
    if ( (v16 < 0 || v16 == 1073741861) && v15 )
      PoDestroyReasonContext(v15);
    if ( v17 >= 0 && v10 )
      return 1073741861;
    return (unsigned int)v17;
  }
  return result;
}
