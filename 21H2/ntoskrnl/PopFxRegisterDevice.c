/*
 * XREFs of PopFxRegisterDevice @ 0x1407B578C
 * Callers:
 *     PoFxRegisterDevice @ 0x1407B5540 (PoFxRegisterDevice.c)
 *     PoFxEnableDStateReporting @ 0x1408E4270 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterPrimaryDevice @ 0x1408E4410 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14028350C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140362020 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PopFxInsertDevice @ 0x1403BEA64 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BECA4 (PopFxAssignDeviceToDevNode.c)
 *     PopFxBugCheck @ 0x1405693EC (PopFxBugCheck.c)
 *     PopFxTraceDeviceRegistration @ 0x14067E618 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B592C (PopFxRegisterDeviceWorker.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BDE58 (PopGenerateDeviceFriendlyName.c)
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
  if ( DeviceAttachmentBaseRefWithTag )
  {
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(DeviceObject, 0x78466F50u);
    if ( AttachedDeviceReferenceWithTag )
    {
      v13 = *(ULONG_PTR **)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
      if ( v13 )
      {
        _m_prefetchw(v13 + 37);
        v14 = *((_DWORD *)v13 + 74);
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 74, v14, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 1) != 0 )
        {
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
          }
          else
          {
            v20[6] = v13;
            if ( v13[10] )
              PopFxBugCheck(0x600uLL, v13[4], 0LL, 0LL);
            PopGenerateDeviceFriendlyName(v13, v20 + 149);
            PopFxAssignDeviceToDevNode((__int64)v13, (__int64)v20);
            ObfReferenceObjectWithTag(DeviceObject, 0x78466F50u);
            v20[12] = DeviceObject;
            v20[13] = AttachedDeviceReferenceWithTag;
            PopFxTraceDeviceRegistration((__int64)v20, 0);
            PopFxInsertDevice(v18, v17, v20);
            AttachedDeviceReferenceWithTag = 0LL;
            DeviceAttachmentBaseRefWithTag = 0LL;
            v16 = 0;
          }
        }
        else
        {
          v16 = -1073741661;
        }
      }
      else
      {
        v16 = -1073741811;
      }
      if ( AttachedDeviceReferenceWithTag )
        ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    }
    else
    {
      v16 = -1073741811;
    }
    if ( DeviceAttachmentBaseRefWithTag )
      ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
  }
  else
  {
    v16 = -1073741811;
  }
  *a7 = v20;
  return (unsigned int)v16;
}
