/*
 * XREFs of HaliInitPowerManagement @ 0x140801CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x1402FBE90 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalpAcpiGetFacsMapping @ 0x1403705F8 (HalpAcpiGetFacsMapping.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     HalpPutAcpiHacksInRegistry @ 0x14080237C (HalpPutAcpiHacksInRegistry.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 */

NTSTATUS __fastcall HaliInitPowerManagement(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 FacsMapping; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  HalpPiix4Detect(v4);
  HalpPutAcpiHacksInRegistry();
  ObjectAttributes.RootDirectory = 0LL;
  CallbackObject = 0LL;
  *a2 = &HalAcpiDispatchTable;
  PmAcpiDispatchTable = a1;
  off_140C019D0 = HaliSetWakeAlarm;
  ObjectAttributes.Attributes = 80;
  qword_140C01E00 = (__int64)HaliInitializePlatformDebugTriggers;
  qword_140C01E08 = (__int64)HaliRunPlatformDebugTriggers;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)HalpPowerStateCallback, 0LL);
    FacsMapping = HalpAcpiGetFacsMapping(v6);
    if ( FacsMapping )
      HalpWakeVector = FacsMapping + 12;
    return 0;
  }
  return result;
}
