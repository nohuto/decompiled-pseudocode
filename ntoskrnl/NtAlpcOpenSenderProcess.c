/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x140714820
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140715E54 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, __int128 *a3, unsigned int a4, int a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int128 *v12; // r9
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  PVOID v22; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v24; // [rsp+38h] [rbp-90h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+48h] [rbp-80h] BYREF
  __int128 v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF
  __int128 v30; // [rsp+80h] [rbp-48h]
  __int128 v31; // [rsp+90h] [rbp-38h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  DWORD2(v31) = 0;
  v25 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_17;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(a3, &v26, a4);
    if ( a6 < v12 )
      v12 = a6;
    v29 = *v12;
    v30 = v12[1];
    v31 = v12[2];
  }
  else
  {
    v26 = *a3;
    v27 = a3[1];
    v28 = *((_QWORD *)a3 + 4);
    v29 = *a6;
    v30 = a6[1];
    v31 = a6[2];
  }
  v14 = Object;
  v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v27), v28, (_DWORD)v12, (__int64)&v24);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v14);
    goto LABEL_17;
  }
  v15 = v24;
  if ( (*(_DWORD *)(v24 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v24);
    ObfDereferenceObject(v14);
    v11 = -1073740029;
    goto LABEL_17;
  }
  v16 = *(_QWORD **)(v24 + 32);
  if ( v16 )
  {
    v17 = v16[153] - *((_QWORD *)&v26 + 1);
    if ( !v17 )
      v17 = v16[154] - v27;
    if ( v17 )
    {
      AlpcpUnlockMessage(v24);
      ObfDereferenceObject(v14);
      v11 = -1073741813;
      goto LABEL_17;
    }
    v18 = (_QWORD *)v16[68];
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v24 + 24);
  if ( !v20 )
  {
    AlpcpUnlockMessage(v24);
    v22 = v14;
    goto LABEL_30;
  }
  v21 = (signed __int64 *)(v20 + 352);
  ExAcquirePushLockSharedEx(v20 + 352, 0LL);
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[136] == *((_QWORD *)&v26 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v15 = v24;
      v14 = Object;
LABEL_15:
      AlpcpUnlockMessage(v15);
      *(_QWORD *)&v27 = 0LL;
      v11 = PsOpenProcess((unsigned __int64)&v25, a5, (__int64)&v29, (__int128 *)((char *)&v26 + 8), 0, PreviousMode);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v14);
      if ( v11 >= 0 )
        *a1 = v25;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    AlpcpUnlockMessage(v24);
    v22 = Object;
LABEL_30:
    ObfDereferenceObject(v22);
    v11 = -1073741790;
    goto LABEL_17;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(v24);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
