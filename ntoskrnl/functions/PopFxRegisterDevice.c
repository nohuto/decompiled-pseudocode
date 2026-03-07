__int64 __fastcall PopFxRegisterDevice(_QWORD *Object, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  _QWORD *DeviceAttachmentBaseRefWithTag; // rbp
  _BYTE *AttachedDeviceReferenceWithTag; // rsi
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+50h] [rbp-28h] BYREF

  v20 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)Object, 0x78466F50u);
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v16 = -1073741811;
    goto LABEL_10;
  }
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(Object, 0x78466F50u);
  if ( !AttachedDeviceReferenceWithTag )
  {
    v16 = -1073741811;
LABEL_17:
    ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
    goto LABEL_10;
  }
  v13 = *(ULONG_PTR **)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
  if ( !v13 )
  {
    v16 = -1073741811;
LABEL_16:
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    goto LABEL_17;
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
    goto LABEL_16;
  }
  v16 = PopFxRegisterDeviceWorker(
          v13[18],
          (int)v13 + 128,
          a2,
          a3,
          a4,
          a5,
          AttachedDeviceReferenceWithTag[76] + 1,
          a6,
          (__int64)&v20);
  if ( v16 < 0 )
  {
    v20 = 0LL;
    goto LABEL_16;
  }
  v20[6] = v13;
  if ( v13[10] )
    PopFxBugCheck(0x600uLL, v13[4], 0LL, 0LL);
  PopGenerateDeviceFriendlyName(v13, 1LL, v20 + 149);
  PopFxAssignDeviceToDevNode((__int64)v13, (__int64)v20);
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  v20[12] = Object;
  v20[13] = AttachedDeviceReferenceWithTag;
  PopFxTraceDeviceRegistration(v20, 0LL);
  PopFxInsertDevice(v18, v17, v20);
  v16 = 0;
LABEL_10:
  *a7 = v20;
  return (unsigned int)v16;
}
