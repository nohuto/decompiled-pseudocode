/*
 * XREFs of ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00B96F0
 * Callers:
 *     InitFNTCache @ 0x1C00B9300 (InitFNTCache.c)
 *     QueryFontReg @ 0x1C00B9620 (QueryFontReg.c)
 *     vGetJpn98FixPitch @ 0x1C00B9810 (vGetJpn98FixPitch.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B6ADC (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetGreRegKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, PCWSTR SourceString)
{
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
