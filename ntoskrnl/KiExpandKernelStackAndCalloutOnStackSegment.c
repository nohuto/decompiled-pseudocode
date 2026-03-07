__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // r13
  int v6; // edx
  unsigned __int8 v7; // di
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *Timeout; // rbx
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int v12; // r15d
  int v13; // ecx
  int v14; // r9d
  __int64 KernelStack; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  int MiscFlags; // eax
  char v19; // r15
  unsigned __int64 CurrentStackPointer; // rax
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int8 v26; // al
  unsigned __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  struct _KPRCB *v28; // [rsp+38h] [rbp-50h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+20h]

  v5 = a5;
  v6 = 0;
  v7 = 0;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Timeout = 0LL;
  v32 = 0;
  v10 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    Timeout = (LARGE_INTEGER *)&v31;
    if ( a5 )
      v7 = 16;
  }
  if ( (a4 & 8) != 0 && a5 )
    v7 = 16;
  v12 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v6 = 1;
    v7 |= 1u;
    v32 = 1;
    v12 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v12 = 5;
  }
  else
  {
    a4 |= 4u;
    v10 = 0LL;
  }
  if ( (v7 & 0xF0) == 0 )
  {
    v13 = v12 | 2;
    if ( (a4 & 2) != 0 )
      v13 = v12;
    v14 = a4 & 4;
    if ( v14 )
      v32 = v6 | 4;
    v12 = v13 | 0x10;
    if ( !v14 )
      v12 = v13;
    KernelStack = MmCreateKernelStack(
                    v12,
                    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 138LL),
                    CurrentThread);
    if ( KernelStack )
      goto LABEL_13;
  }
  if ( !v5 || (v7 & 1) != 0 && !*(_BYTE *)(v5 + 4) )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v7 |= 4u;
  if ( KeWaitForSingleObject((PVOID)(v5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v7 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v24 = *(unsigned __int8 *)(v5 + 6);
  if ( (unsigned __int8)v24 >= *(_BYTE *)(v5 + 5) )
  {
    KeReleaseMutant((PRKMUTANT)(v5 + 8), 1, 0, 0);
    return 3221225495LL;
  }
  KernelStack = *(_QWORD *)(v5 + 8 * v24 + 64);
  v7 |= 8u;
  *(_BYTE *)(v5 + 6) = v24 + 1;
  if ( (v7 & 1) == 0 && *(_BYTE *)(v5 + 4) )
  {
    LOBYTE(v12) = 5;
    v10 = 71680LL;
    v7 |= 1u;
  }
LABEL_13:
  *(_QWORD *)(KernelStack - 80) = KernelStack;
  v16 = KernelStack - 80;
  if ( (v7 & 1) != 0 )
    v17 = KernelStack - 73727;
  else
    v17 = KernelStack - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v16 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v16 + 40) = CurrentThread->InitialStack;
  *(_QWORD *)(v16 + 72) = 0LL;
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_QWORD *)(v16 + 64) = 0LL;
  *(_QWORD *)(v16 + 56) = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v16 |= 1uLL;
    if ( (v12 & 4) != 0 )
      v16 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
  {
    v7 |= 2u;
    v19 = 2;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
    v19 = 0;
  }
  v28 = 0LL;
  v27 = 0LL;
  LODWORD(a5) = 0;
  CurrentStackPointer = KeGetCurrentStackPointer();
  KeQueryCurrentStackInformationEx(CurrentStackPointer, (char *)&a5, &v28, &v27);
  if ( (_DWORD)a5 == 10 )
  {
    __writegsbyte(0x83E6u, 1u);
    v21 = KiSwitchKernelStackAndCallout(a2, a1, v16, v10);
    __writegsbyte(0x83E6u, 0);
  }
  else
  {
    v21 = KiSwitchKernelStackAndCallout(a2, a1, v16, v10);
  }
  v22 = v21;
  if ( (v7 & 8) != 0 )
  {
    v25 = (*(_BYTE *)(v5 + 6))-- == 1;
    if ( v25 && (v7 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(v5 + 8), 1, 0, 0);
  }
  else
  {
    MmDeleteKernelStackEx(KernelStack, v32, CurrentThread);
  }
  if ( !v19 )
    CurrentThread->MiscFlags &= ~0x1000u;
  if ( KeGetCurrentIrql() != CurrentIrql )
  {
    v26 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, ((CurrentIrql | ((unsigned __int64)v26 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v22;
}
