__int64 __fastcall NtOpenJobObject(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(a3, (__int64)PsJobType, PreviousMode, 0LL, a2, 0LL, (__int64)&v10);
  if ( v8 >= 0 )
    *a1 = v10;
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v8, 1826LL);
  return (unsigned int)v8;
}
