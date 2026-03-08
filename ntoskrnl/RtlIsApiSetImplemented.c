/*
 * XREFs of RtlIsApiSetImplemented @ 0x1407848B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     ApiSetQuerySchemaInfo @ 0x1402F3630 (ApiSetQuerySchemaInfo.c)
 *     PsQueryCurrentApiSetSchema @ 0x14078495C (PsQueryCurrentApiSetSchema.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RtlIsApiSetImplemented(PCSZ SourceString)
{
  char v1; // si
  bool v2; // di
  NTSTATUS v3; // ebx
  __int64 CurrentApiSetSchema; // rax
  NTSTATUS v5; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+68h] [rbp+28h] BYREF
  bool v10; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, SourceString);
  UnicodeString = 0LL;
  v3 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v3 >= 0 )
  {
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
    v5 = ApiSetQuerySchemaInfo(CurrentApiSetSchema, &UnicodeString.Length, &v9, &v10);
    v1 = v9;
    v3 = v5;
    v2 = v10;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v3 >= 0 && (!v1 || !v2) )
    return (unsigned int)-1073741275;
  return (unsigned int)v3;
}
