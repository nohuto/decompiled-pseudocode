/*
 * XREFs of CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C
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
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1408181E8 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpMapSection @ 0x1408182C4 (CmFcpMapSection.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C07F0 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A24FA4 (CmFcpManagerPublishChangeNotifications.c)
 */

__int64 __fastcall CmFcManagerOverwriteFeatureConfigurationSection(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        size_t Size)
{
  __int64 v5; // rbx
  int SectionFromBuffer; // edi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // r13
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  ULONG_PTR *v17; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  void *v23; // rdx
  char v24; // [rsp+30h] [rbp-D0h]
  unsigned int v25; // [rsp+34h] [rbp-CCh]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-C0h]
  _DWORD v28[2]; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[10]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]

  v29 = 0LL;
  v26 = 0LL;
  v5 = a3;
  v31 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v33, 0, 0x48uLL);
  v24 = 0;
  SectionFromBuffer = RtlpFcValidateFeatureConfigurationBuffer(a4, Size);
  v9 = 3LL;
  if ( SectionFromBuffer < 0 )
  {
    if ( (unsigned int)dword_140C067D0 > 5 && tlgKeywordOn((__int64)&dword_140C067D0, 0x400000000001LL) )
    {
      v37 = 0;
      v35 = &v32;
      v32 = 0x1000000LL;
      v36 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C067D0,
        (unsigned __int8 *)byte_140037AC1,
        0LL,
        0LL,
        3u,
        &v34);
    }
    goto LABEL_16;
  }
  v28[0] = 0;
  v27[0] = 0;
  v28[1] = 1;
  v10 = (unsigned int)v28[v5];
  v27[1] = 1;
  v25 = v27[v5];
  v11 = 3 * v10;
  v24 = 1;
  CurrentThread = KeGetCurrentThread();
  v13 = &v33[v11];
  --CurrentThread->KernelApcDisable;
  v14 = KeAbPreAcquire((__int64)&stru_140C13F10, 0LL);
  v15 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C13F10, 0LL);
  v16 = v14;
  if ( v15 )
    ExfAcquirePushLockExclusiveEx(&stru_140C13F10, v14, (__int64)&stru_140C13F10);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C13F70, (__int64)&v29, &v26);
  if ( a2 && v29 != a2 )
  {
    SectionFromBuffer = -1073741823;
LABEL_12:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F10);
    KeAbPostRelease((ULONG_PTR)&stru_140C13F10);
    if ( v26 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v26);
    goto LABEL_16;
  }
  v19 = v29 + 1;
  if ( v29 == -1 )
    v19 = 1LL;
  if ( a4 )
  {
    SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(a4, Size, v19, CmFcSystemManager[0], (__int64)Object);
    if ( SectionFromBuffer < 0 )
      goto LABEL_12;
  }
  SectionFromBuffer = CmFcpMapSection(Object, v13);
  if ( SectionFromBuffer < 0 )
    goto LABEL_12;
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v26);
  v20 = KeAbPreAcquire((__int64)&stru_140C13F08, 0LL);
  v15 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C13F08, 0LL);
  v21 = v20;
  if ( v15 )
    ExfAcquirePushLockExclusiveEx(&stru_140C13F08, v20, (__int64)&stru_140C13F08);
  if ( v21 )
    *(_BYTE *)(v21 + 18) = 1;
  v22 = 3LL * v25;
  CmFcSystemManager[v22 + 5] = (__int64)Object[0];
  v23 = (void *)CmFcSystemManager[3 * v25 + 6];
  CmFcSystemManager[v22 + 6] = (__int64)Object[1];
  CmFcSystemManager[v22 + 7] = v31;
  Object[1] = v23;
  RtlpFcBufferManagerUpdateBuffers(qword_140C13F70, v19, (__int64)v33);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C13F18, v19);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F08);
  KeAbPostRelease((ULONG_PTR)&stru_140C13F08);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C13F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C13F10);
  KeAbPostRelease((ULONG_PTR)&stru_140C13F10);
  CmFcpManagerPublishChangeNotifications(CmFcSystemManager, v19);
  SectionFromBuffer = 0;
LABEL_16:
  v17 = &v33[1];
  do
  {
    if ( *v17 )
      MiRemoveFromSystemSpace(*v17, 1);
    v17 += 3;
    --v9;
  }
  while ( v9 );
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  if ( v24 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)SectionFromBuffer;
}
