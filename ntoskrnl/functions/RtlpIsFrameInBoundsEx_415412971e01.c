char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v9; // r8
  int v10; // ecx
  _KTHREAD *CurrentThread; // r10
  unsigned int v12; // r9d
  char *v13; // rcx
  char *v14; // rdx
  char v15; // al
  char v16; // r8
  int v17; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  KeQueryCurrentStackInformation(&v22, &v21, &v20);
  if ( v22 <= 9 )
  {
    v10 = 929;
    if ( _bittest(&v10, v22) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = v22;
  if ( v22 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
    {
      v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v14 = &v13[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v14 <= a2 && a2 < (unsigned __int64)v13 )
      {
        *a3 = (unsigned __int64)v13;
        *a1 = (unsigned __int64)v14;
        return 1;
      }
    }
    v12 = v22;
  }
  v15 = 0;
  if ( !*a4 )
  {
    LOBYTE(v9) = 1;
    KeGetNextKernelStackSegment(CurrentThread, a4, v9);
    v15 = v16;
  }
  if ( v12 > 0xA || (v17 = 1090, !_bittest(&v17, v12)) || !v15 )
  {
    if ( !(unsigned __int8)KeGetNextKernelStackSegment(CurrentThread, a4, 0LL) )
      return 0;
  }
  v18 = a4[1];
  v19 = *a4;
  if ( a2 < v18 || a2 >= v19 )
    return 0;
  *a1 = v18;
  *a3 = v19;
  return 1;
}
