/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x140A24640
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x140A0F190 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     RtlpFcWriteHighLowHigh @ 0x140388CA0 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x14081811C (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1408182C4 (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x140818398 (CmFcpManagerCreateSection.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409C0408 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C07F0 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A24FA4 (CmFcpManagerPublishChangeNotifications.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(__int64 a1, __int64 a2, int a3, _DWORD *a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r15
  int Section; // edi
  _DWORD *v17; // r8
  __int64 v18; // rsi
  _DWORD *v19; // rcx
  NTSTATUS updated; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  void *v25; // rcx
  ULONG_PTR *v26; // rbx
  unsigned int v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  _DWORD v32[2]; // [rsp+58h] [rbp-A8h]
  _DWORD v33[2]; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v35; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v39[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]

  v5 = a3;
  v36 = a4;
  v34 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v39, 0, 0x48uLL);
  v33[0] = 0;
  v33[1] = 1;
  v7 = (unsigned int)v33[v5];
  v32[0] = 0;
  v32[1] = 1;
  v28 = v32[v5];
  v37 = 3 * v7;
  v8 = &v39[3 * v7];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((__int64)&stru_140C13F10, 0LL);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C13F10, 0LL);
  v12 = v10;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&stru_140C13F10, v10, (__int64)&stru_140C13F10);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C13F70, (__int64)&v34, &v29);
  v14 = v29;
  v15 = 3LL;
  if ( a2 && v34 != a2 )
  {
    Section = -1073741823;
LABEL_20:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F10);
    KeAbPostRelease((ULONG_PTR)&stru_140C13F10);
    if ( v29 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v29);
    goto LABEL_33;
  }
  v17 = v36;
  v18 = v34 + 1;
  if ( v34 == -1 )
    v18 = 1LL;
  v35.QuadPart = 0LL;
  Object[0] = (PVOID)v18;
  v19 = *(_DWORD **)(v29 + 8 * v37 + 8);
  *v8 = v18;
  updated = RtlpFcUpdateFeatureConfiguration(v19, v13, v17, a5, 0LL, (size_t *)&v35.QuadPart);
  Section = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_20;
    Section = CmFcpManagerCreateSection(v35, v18, (void *)CmFcSystemManager[0], Object);
    if ( Section < 0 )
      goto LABEL_20;
    Section = CmFcpMapSection(Object, v8);
    if ( Section < 0 )
      goto LABEL_20;
    Section = RtlpFcUpdateFeatureConfiguration(
                *(_DWORD **)(v14 + 8 * v37 + 8),
                v21,
                v36,
                a5,
                (void *)v8[1],
                (size_t *)v8 + 2);
    if ( Section < 0 )
      goto LABEL_20;
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer((unsigned int *)v8[1], v8[2]) < 0 )
    {
      if ( (unsigned int)dword_140C067D0 > 5 && tlgKeywordOn((__int64)&dword_140C067D0, 0x400000000001LL) )
      {
        v43 = 0;
        v41 = &v38;
        v38 = 0x1000000LL;
        v42 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C067D0,
          (unsigned __int8 *)&word_140037B0E,
          0LL,
          0LL,
          3u,
          &v40);
      }
      Section = -1073741595;
      goto LABEL_20;
    }
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v14);
  v22 = KeAbPreAcquire((__int64)&stru_140C13F08, 0LL);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C13F08, 0LL);
  v23 = v22;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&stru_140C13F08, v22, (__int64)&stru_140C13F08);
  if ( v23 )
    *(_BYTE *)(v23 + 18) = 1;
  v24 = 3LL * v28;
  CmFcSystemManager[v24 + 5] = (__int64)Object[0];
  v25 = (void *)CmFcSystemManager[3 * v28 + 6];
  CmFcSystemManager[v24 + 6] = (__int64)Object[1];
  CmFcSystemManager[v24 + 7] = v31;
  Object[1] = v25;
  RtlpFcBufferManagerUpdateBuffers(qword_140C13F70, v18, (__int64)v39);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C13F18, v18);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v18);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F08);
  KeAbPostRelease((ULONG_PTR)&stru_140C13F08);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F10);
  KeAbPostRelease((ULONG_PTR)&stru_140C13F10);
  CmFcpManagerPublishChangeNotifications(CmFcSystemManager, v18);
  Section = 0;
LABEL_33:
  v26 = &v39[1];
  do
  {
    if ( *v26 )
      MiRemoveFromSystemSpace(*v26, 1);
    v26 += 3;
    --v15;
  }
  while ( v15 );
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Section;
}
