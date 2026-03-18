/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140840870
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14083F704 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14083F75C (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x14083F908 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14083FC00 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14083FE80 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14084028C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DAD00 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
