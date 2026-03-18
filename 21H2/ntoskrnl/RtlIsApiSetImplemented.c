/*
 * XREFs of RtlIsApiSetImplemented @ 0x1406D9680
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo @ 0x140251458 (ApiSetQuerySchemaInfo.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406D972C (PsQueryCurrentApiSetSchema.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
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
