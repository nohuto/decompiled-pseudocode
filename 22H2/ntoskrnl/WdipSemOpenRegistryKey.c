/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140795204
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140794080 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407940D8 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140794284 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140794588 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140794808 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140794C14 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140930300 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
