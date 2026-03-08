/*
 * XREFs of MiZeroInParallel @ 0x140242EB8
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiProcessPageGroupInfo @ 0x1402B4BE0 (MiProcessPageGroupInfo.c)
 *     MiFindLargePageMemory @ 0x140A46B08 (MiFindLargePageMemory.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiInitializeAffinityWalker @ 0x1402A7028 (MiInitializeAffinityWalker.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1402A9850 (MiAllocateAcceleratorDescriptor.c)
 *     MiSelectEngine @ 0x1402B4AF8 (MiSelectEngine.c)
 *     KiClearSystemPriority @ 0x1402DAA90 (KiClearSystemPriority.c)
 *     MiTimeToWriteMemory @ 0x1402E5238 (MiTimeToWriteMemory.c)
 *     KiSetSystemPriorityThread @ 0x1402E9F30 (KiSetSystemPriorityThread.c)
 *     MiInitializeZeroGroup @ 0x1402F4E60 (MiInitializeZeroGroup.c)
 *     MiGetNextAffinityWalker @ 0x1403B9938 (MiGetNextAffinityWalker.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14065241C (MiDeleteAcceleratorDescriptor.c)
 *     MiRestoreIdealProcessorThread @ 0x140664A64 (MiRestoreIdealProcessorThread.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroInParallel(__int64 *a1)
{
  int v1; // r15d
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // r11d
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rdx
  int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  unsigned int v24; // eax
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  unsigned int v28; // r14d
  _DWORD *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  KPRIORITY PriorityThread; // eax
  unsigned int v34; // r14d
  _QWORD *v35; // rbx
  __int64 v36; // rdi
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  KPRIORITY Priority; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  _QWORD *v43; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  PKTHREAD Thread; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  struct _GROUP_AFFINITY Affinity; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v48[3]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v49[3]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v50[3]; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  v3 = 0LL;
  v4 = *((int *)a1 + 18);
  Thread = KeGetCurrentThread();
  v5 = 25408LL * *((unsigned int *)a1 + 16);
  LOWORD(v37) = 0;
  v6 = *(_QWORD *)(v5 + qword_140C6B0D0 + 23152);
  if ( v6 && *(_DWORD *)(296 * v4 + v6 + 100) )
  {
    v7 = 0;
    v8 = a1 + 4;
    do
    {
      if ( *v8 )
        v3 += MiTimeToWriteMemory(*((_DWORD *)a1 + 16), v4, v7, 1, *v8 << 12);
      ++v7;
      ++v8;
    }
    while ( v7 < 4 );
  }
  v9 = *((_DWORD *)a1 + 6);
  v10 = a1 + 14;
  v11 = a1 + 14;
  v12 = 0;
  if ( v9 )
  {
    do
    {
      v13 = v9;
      if ( v10[1] )
      {
        if ( v11 != v10 )
        {
          *(_OWORD *)v11 = *(_OWORD *)v10;
          *((_OWORD *)v11 + 1) = *((_OWORD *)v10 + 1);
          v11[4] = v10[4];
          v13 = *((_DWORD *)a1 + 6);
        }
        v11 += 5;
      }
      v10 += 5;
      ++v12;
      v9 = v13;
    }
    while ( v12 < v13 );
  }
  v14 = 0xCCCCCCCCCCCCCCCDuLL * (((char *)v11 - (char *)a1 - 112) >> 3);
  if ( v11 != v10 )
  {
    v15 = v11 + 2;
    do
    {
      *(v15 - 1) = 0LL;
      v15[1] = v15;
      *v15 = v15;
      v15 += 5;
    }
    while ( v15 - 2 != v10 );
  }
  v16 = v14;
  if ( v3 <= 0x1388 )
    v16 = 1;
  v18 = MiInitializeZeroGroup((unsigned int)&v37, *a1, (*((_DWORD *)a1 + 4) >> 2) & 1, v16, *((_DWORD *)a1 + 17));
  if ( !*((_DWORD *)a1 + 18) )
  {
    v19 = *((unsigned int *)a1 + 16);
    v43 = 0LL;
    if ( (unsigned int)MiAllocateAcceleratorDescriptor(0LL, v19, v17, &v43) )
    {
      v25 = v43;
      if ( v43 )
      {
        v26 = a1 + 18;
        do
        {
          v27 = v25 + 4;
          v25 = (_QWORD *)*v25;
          *v26 = v27;
          v26 += 5;
        }
        while ( v25 );
        v43 = 0LL;
      }
    }
    else
    {
      v20 = *((unsigned int *)a1 + 17);
      v38 = 0;
      LODWORD(v39) = 0;
      v21 = MiSelectEngine(v20, 1LL, &v39, &v38);
      v22 = *((_DWORD *)a1 + 4);
      v23 = *a1;
      *((_DWORD *)a1 + 18) = v21;
      *((_DWORD *)a1 + 16) = v39;
      v24 = v38;
      if ( v38 > v18 )
        v24 = v18;
      v38 = v24;
      v18 = MiInitializeZeroGroup((unsigned int)&v37, v23, (v22 >> 2) & 1, v18, *((_DWORD *)a1 + 17));
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 20, v18);
  v28 = v18;
  if ( (_BYTE)v37 )
    v28 = v18 - 1;
  *((_DWORD *)a1 + 19) = v14;
  a1[13] = (__int64)(a1 + 12);
  a1[12] = (__int64)(a1 + 12);
  *((_WORD *)a1 + 44) = 263;
  *((_BYTE *)a1 + 90) = 6;
  *((_DWORD *)a1 + 23) = 0;
  if ( v28 || (_BYTE)v37 )
  {
    v30 = MiInitializeAffinityWalker(*((unsigned int *)a1 + 18), *((unsigned int *)a1 + 16), *((unsigned int *)a1 + 17));
    v29 = (_DWORD *)v30;
    if ( v30 && v28 && (_BYTE)v37 && !BYTE1(v37) )
    {
      LODWORD(v30) = KeGetPcr()->Prcb.Number;
      memset(v49, 0, sizeof(v49));
      v29[4] = *(_DWORD *)(KiProcessorBlock[v30] + 34872);
      MiGetNextAffinityWalker(v29, v49);
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( (_UNKNOWN *)*a1 == &MiSystemPartition )
  {
    v31 = 0LL;
    v46 = 0LL;
  }
  else
  {
    v31 = *(_QWORD *)(*a1 + 200);
    v46 = *(_QWORD *)(v31 + 120);
    a1[1] = v31;
  }
  if ( v28 )
  {
    Priority = KeQueryPriorityThread(Thread);
    KiSetSystemPriorityThread((ULONG_PTR)Thread);
    while ( 1 )
    {
      memset(v50, 0, sizeof(v50));
      if ( (int)MiGetNextAffinityWalker(v29, v50) < 0 )
        break;
      v32 = ((unsigned __int64)v50 + 4) & -(__int64)(v29[8] != 0);
      if ( v31 && _InterlockedIncrement64((volatile signed __int64 *)(v31 + 32)) <= 1 )
        __fastfail(0xEu);
      if ( (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, v46, 0LL, MiZeroInParallelWorker, a1, 0LL, v32) < 0 )
      {
        if ( v31 )
          PsDereferencePartition(v31);
        break;
      }
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      PriorityThread = KeQueryPriorityThread((PKTHREAD)Object);
      if ( PriorityThread != Priority )
        KeSetPriorityThread((PKTHREAD)Object, Priority);
      ObfDereferenceObject(Object);
      ObCloseHandle(Handle, 0);
      if ( ++v1 >= v28 )
        goto LABEL_54;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 20, v1 - v28);
LABEL_54:
    LODWORD(v42) = 15;
    KiClearSystemPriority((ULONG_PTR)Thread);
    if ( !v1 )
    {
      LOBYTE(v37) = 1;
      _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 20, 1u);
    }
  }
  if ( (_BYTE)v37 )
  {
    v34 = -1;
    memset(v48, 0, sizeof(v48));
    if ( BYTE1(v37) && (int)MiGetNextAffinityWalker(v29, v48) >= 0 && v29[8] )
    {
      Affinity = *(struct _GROUP_AFFINITY *)((char *)v48 + 8);
      v34 = MiSetIdealProcessorThread(&Affinity);
    }
    if ( v31 && _InterlockedIncrement64((volatile signed __int64 *)(v31 + 32)) <= 1 )
      __fastfail(0xEu);
    MiZeroInParallelWorker(a1);
    if ( v34 != -1 )
      MiRestoreIdealProcessorThread(v34);
  }
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v1 )
    KeWaitForGate(a1 + 11, 0LL);
  if ( v18 )
  {
    v35 = a1 + 18;
    v36 = v18;
    do
    {
      if ( *v35 )
        MiDeleteAcceleratorDescriptor();
      v35 += 5;
      --v36;
    }
    while ( v36 );
  }
}
