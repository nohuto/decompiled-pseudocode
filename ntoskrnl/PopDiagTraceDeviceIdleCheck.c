/*
 * XREFs of PopDiagTraceDeviceIdleCheck @ 0x1405904E0
 * Callers:
 *     PopScanIdleList @ 0x1402BC8E0 (PopScanIdleList.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  __int64 v5; // rdx
  char v6; // al
  char v7; // al
  int v8; // ecx
  _WORD v10[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v11; // [rsp+4Ch] [rbp-BCh] BYREF
  _UNKNOWN **v12; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int16 *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  __int64 v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  int *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  int *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  _WORD *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  char *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v36; // [rsp+140h] [rbp+38h] BYREF
  int v37; // [rsp+148h] [rbp+40h] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v37 = a3;
  v36 = a2;
  v10[0] = 0;
  v11 = 0;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(
                                                      *(_QWORD *)(a1 + 24),
                                                      0x67446F50u);
      v12 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v5 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
        if ( v5 )
        {
          v11 = *(_WORD *)(v5 + 40) >> 1;
          v6 = *(_BYTE *)(a1 + 52) - 1;
          UserData.Ptr = a1 + 24;
          LOBYTE(v10[0]) = v6;
          v7 = *(_BYTE *)(a1 + 56) - 1;
          *(_QWORD *)&UserData.Size = 8LL;
          HIBYTE(v10[0]) = v7;
          v14 = &v12;
          v16 = &v11;
          v15 = 8LL;
          v17 = 2LL;
          v8 = *(unsigned __int16 *)(v5 + 40);
          v18 = *(_QWORD *)(v5 + 48);
          v21 = a1 + 16;
          v23 = a1 + 20;
          v25 = &v36;
          v27 = &v37;
          v29 = a1 + 12;
          v31 = v10;
          v33 = (char *)v10 + 1;
          v19 = v8;
          v32 = 1LL;
          v34 = 1LL;
          v20 = 0;
          v22 = 4LL;
          v24 = 4LL;
          v26 = 4LL;
          v28 = 4LL;
          v30 = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
          DeviceAttachmentBaseRefWithTag = v12;
        }
        if ( DeviceAttachmentBaseRefWithTag )
          LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(
                                                     DeviceAttachmentBaseRefWithTag,
                                                     0x67446F50u);
      }
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
