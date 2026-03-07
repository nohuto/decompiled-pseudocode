__int64 __fastcall KeInitThread(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 AffinityPrimaryGroup; // rcx
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  _QWORD *v15; // r13
  ULONG_PTR *v16; // r12
  int v17; // ebx
  ULONG_PTR v18; // r15
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 KernelStack; // rcx
  size_t v26; // r8
  void *v27; // rcx
  unsigned __int16 v28; // [rsp+40h] [rbp-78h]
  ULONG_PTR v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  char v35; // [rsp+C8h] [rbp+10h]
  char v36; // [rsp+D0h] [rbp+18h]
  char v37; // [rsp+D8h] [rbp+20h]

  v30 = 0LL;
  v31 = 0LL;
  v36 = 0;
  v4 = 5;
  v29 = 0LL;
  v35 = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v5 = (__int64 *)(a1 + 344);
  v6 = 4LL;
  do
  {
    *v5 = a1;
    v5 += 6;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) & 0xFFFFFFFB | (4
                                                              * (*(_DWORD *)(*(_QWORD *)(a2 + 48) + 632LL) & 1 | 0x8010));
  *(_DWORD *)(a1 + 84) = 16 * KiShortExecutionCycles;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 544) = *(_QWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a1 + 116) & 0xFFFFBFFF;
  if ( (*(_DWORD *)(a2 + 60) & 2) == 0 )
    v7 = *(_DWORD *)(a1 + 116) | 0x4000;
  *(_DWORD *)(a1 + 116) = v7;
  *(_BYTE *)(a1 + 390) = ((*(_DWORD *)(a2 + 60) & 2) != 0) + 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    if ( (*(_DWORD *)(a2 + 60) & 0x10) != 0 )
      v20 = v7 | 0x100;
    else
      v20 = v7 | 0x400;
    *(_DWORD *)(a1 + 116) = v20;
  }
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)xHalTimerWatchdogStop,
    (__int64)xHalTimerWatchdogStop,
    (__int64)KiSchedulerApc,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimerEx((PKTIMER)(a1 + 256), NotificationTimer);
  *(_QWORD *)(a1 + 304) = KiWaitNever ^ __ROR8__((a1 + 256) ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v8 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v9 = a1 + 264;
  v10 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
    __fastfail(3u);
  *v8 = v10;
  *(_QWORD *)(a1 + 472) = v9;
  *(_QWORD *)(v10 + 8) = v8;
  *(_QWORD *)v9 = v8;
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)a1 = 6;
  AffinityPrimaryGroup = KeGetCurrentThread()->AffinityPrimaryGroup;
  if ( *(_DWORD *)(a2 + 56) )
    v12 = *(_WORD *)(a2 + 56) - 1;
  else
    v12 = *(_WORD *)(*(_QWORD *)(a2 + 48) + 2 * AffinityPrimaryGroup + 772);
  v28 = v12;
  v13 = 0LL;
  if ( (*(_DWORD *)(a2 + 60) & 2) == 0 )
    v13 = a1;
  v32 = v13;
  v37 = 0;
  v14 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
LABEL_14:
    v15 = (_QWORD *)(a1 + 40);
    v33 = a1 + 40;
    *(_QWORD *)(a1 + 40) = v14;
    v16 = (ULONG_PTR *)(a1 + 56);
    v34 = a1 + 56;
    *(_QWORD *)(a1 + 56) = v14;
    *(_QWORD *)(a1 + 48) = v14 - (unsigned int)KeKernelStackSize;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v21 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 116) = v21 | 0x400000;
      v22 = *(_DWORD *)(a2 + 60);
      if ( (v22 & 1) == 0 )
      {
        if ( (v22 & 8) != 0 )
        {
          v4 = 2;
        }
        else if ( (v21 & 0x400) != 0 )
        {
          v4 = 1;
        }
        else
        {
          v4 = (v21 >> 8) & 1;
        }
        v17 = KiCreateKernelShadowStack(v13, v4, 0, v12, &v31, &v30);
        if ( v17 < 0 )
        {
          v18 = 0LL;
          goto LABEL_21;
        }
        v36 = 1;
        v23 = v30;
        *(_QWORD *)(a1 + 1032) = v30;
        *(_QWORD *)(a1 + 1040) = v23 + 8;
        v24 = v31;
        *(_QWORD *)(a1 + 1048) = v31;
        *(_QWORD *)(a1 + 1056) = v4 | *(_DWORD *)(a1 + 1056) & 0xFF8 | (v24 - 12288) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
    *(_BYTE *)(a1 + 126) = *(_BYTE *)(a1 + 126) & 0x80 | 8;
    if ( KeHeteroSystem )
      *(_BYTE *)(a1 + 125) = KiDefaultHeteroCpuPolicy;
    KeAbInitializeThreadState(a1);
    *(_QWORD *)(a1 + 880) = 1LL;
    *(_QWORD *)(a1 + 1008) = 1LL;
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      *(_QWORD *)(a1 + 1064) = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a2 + 64) & 0x40000;
      if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
        KeCopyXfdMaskToTeb((_QWORD *)a1);
      if ( *(_QWORD *)(a2 + 64) )
      {
        KernelStack = MmCreateKernelStack(0x20u, v28, v32);
        v29 = KernelStack;
        if ( !KernelStack )
        {
          v17 = -1073741670;
          v18 = 0LL;
          goto LABEL_30;
        }
        v26 = (unsigned int)KeDecoupledStateSaveAreaLength;
        v27 = (void *)(KernelStack - (unsigned int)KeDecoupledStateSaveAreaLength);
        *(_QWORD *)(a1 + 96) = v27;
        *(_DWORD *)(a1 + 116) |= 0x800000u;
        memset(v27, 0, v26);
        v35 = 1;
      }
    }
    if ( (*(_DWORD *)(a2 + 60) & 4) == 0 )
      KiInitializeContextThread(a1, a2);
    v17 = 0;
    v18 = v29;
LABEL_21:
    if ( v17 >= 0 )
      return (unsigned int)v17;
    goto LABEL_30;
  }
  v14 = MmCreateKernelStack(8u, v12, v13);
  if ( v14 )
  {
    v37 = 1;
    v13 = v32;
    goto LABEL_14;
  }
  v17 = -1073741670;
  v16 = (ULONG_PTR *)(a1 + 56);
  v15 = (_QWORD *)(a1 + 40);
  v18 = 0LL;
LABEL_30:
  if ( v37 )
  {
    MmDeleteKernelStackEx(*v16, 2u, a1);
    *v15 = 0LL;
  }
  if ( v35 )
  {
    MmDeleteKernelStackEx(v18, 8u, a1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( v36 )
  {
    KiDeleteKernelShadowStack(*(_QWORD *)(a1 + 1048), v4, 0);
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return (unsigned int)v17;
}
