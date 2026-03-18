/*
 * XREFs of PopFxRegisterDevice @ 0x1408236BC
 * Callers:
 *     PoFxRegisterDevice @ 0x140823470 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x14098CC20 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x14098CDC0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopFxInsertDevice @ 0x1403B9C64 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BA794 (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 *     PopFxRegisterDeviceWorker @ 0x140823988 (PopFxRegisterDeviceWorker.c)
 *     PopFxTraceDeviceRegistration @ 0x14082473C (PopFxTraceDeviceRegistration.c)
 *     PopGenerateDeviceFriendlyName @ 0x14085475C (PopGenerateDeviceFriendlyName.c)
 */

__int64 __fastcall PopFxRegisterDevice(
        PDEVICE_OBJECT DeviceObject,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *DeviceAttachmentBaseRefWithTag; // rsi
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rbp
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+50h] [rbp-28h] BYREF

  v20 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)DeviceObject, 0x78466F50u);
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v16 = -1073741811;
    goto LABEL_10;
  }
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x78466F50u);
  if ( !AttachedDeviceReferenceWithTag )
  {
    v16 = -1073741811;
LABEL_15:
    ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
    goto LABEL_10;
  }
  v13 = *(ULONG_PTR **)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
  if ( !v13 )
  {
    v16 = -1073741811;
LABEL_11:
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    goto LABEL_15;
  }
  _m_prefetchw(v13 + 37);
  v14 = *((_DWORD *)v13 + 74);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 74, v14, v14);
  }
  while ( v15 != v14 );
  if ( (v14 & 1) == 0 )
  {
    v16 = -1073741661;
    goto LABEL_11;
  }
  v16 = PopFxRegisterDeviceWorker(
          v13[18],
          (int)v13 + 128,
          a2,
          a3,
          a4,
          a5,
          AttachedDeviceReferenceWithTag->StackSize + 1,
          a6,
          (__int64)&v20);
  if ( v16 < 0 )
  {
    v20 = 0LL;
    goto LABEL_11;
  }
  v20[6] = v13;
  if ( v13[10] )
    PopFxBugCheck(0x600uLL, v13[4], 0LL, 0LL);
  PopGenerateDeviceFriendlyName(v13, v20 + 149);
  PopFxAssignDeviceToDevNode((__int64)v13, (__int64)v20);
  ObfReferenceObjectWithTag(DeviceObject, 0x78466F50u);
  v20[12] = DeviceObject;
  v20[13] = AttachedDeviceReferenceWithTag;
  PopFxTraceDeviceRegistration(v20, 0LL);
  PopFxInsertDevice(v18, v17, v20);
  v16 = 0;
LABEL_10:
  *a7 = v20;
  return (unsigned int)v16;
}
