__int64 __fastcall HUBDSM_MarkingDeviceAsNotSupportingContainerIdBasedOnMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rcx
  __int16 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(v1 + 1644), 0x20u);
  v3 = 1;
  HUBREG_AssignUsbflagsValueForDevice(v1, L"(*", &v3, 2LL);
  return 4077LL;
}
