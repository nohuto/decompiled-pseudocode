/*
 * XREFs of HalpIommuGetDeviceId @ 0x14038CC4C
 * Callers:
 *     IommupCreateDeviceId @ 0x14038C584 (IommupCreateDeviceId.c)
 *     IommuDomainAttachDevice @ 0x140523210 (IommuDomainAttachDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1408220EC (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoQueryInterface @ 0x140822260 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  void *DeviceAttachmentBaseRefWithTag; // rbx
  int Interface; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[10]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+6Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v4 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  Interface = IoQueryInterface(
                a1,
                0,
                (int)&GUID_IOMMU_BUS_INTERFACE,
                80,
                2,
                (__int64)DeviceAttachmentBaseRefWithTag,
                v11);
  ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))v11[8])(v11[1], 0LL, 0LL, &v12);
    Interface = v7;
    if ( v7 == -1073741789 )
    {
      if ( v12 )
      {
        v9 = HalpMmAllocCtxAlloc(v8, v12);
        v4 = v9;
        if ( v9 )
          Interface = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))v11[8])(v11[1], v12, v9, 0LL);
        else
          Interface = -1073741670;
        goto LABEL_6;
      }
    }
    else if ( v7 < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(_QWORD))v11[3])(v11[1]);
      goto LABEL_7;
    }
    Interface = -1073741823;
    goto LABEL_6;
  }
  if ( Interface != -1073741670 )
    Interface = -1073741275;
LABEL_7:
  *a2 = v4;
  return (unsigned int)Interface;
}
