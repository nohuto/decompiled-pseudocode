/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0044CE0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0048450 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 *     _lambda_5c36fc9d148e2df7cc7307bbce248cb9_::operator() @ 0x1C00DBEA8 (_lambda_5c36fc9d148e2df7cc7307bbce248cb9_--operator().c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  char v6; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( ((unsigned int)DeviceTypeToRimInputType(a2) & *(_DWORD *)(a1 + 84)) != 0
    && *(_QWORD *)(a1 + 8 * v3 + 224)
    && !*(_DWORD *)(a1 + 4 * v3 + 296) )
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 312);
    *(_QWORD *)(v5 + 88) = a1;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 312) + 96LL) = v3;
    KeInitializeApc(
      v5,
      KeGetCurrentThread(),
      0LL,
      CIgnoreInputQueue::MarkInvalid,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v6,
      v5 + 88);
    KeInsertQueueApc(v5, v5, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v3 + 296) = 1;
  }
  return 0LL;
}
