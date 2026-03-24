/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x14095E9D4
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906D64 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ApiSetReleaseSchema @ 0x1405BE4C8 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x1405BEBB4 (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x14095E904 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095ECE4 (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x14095EF94 (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  int SchemaExtensions; // ebx
  int v6; // eax
  ULONG_PTR v7; // rax
  SIZE_T v9; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR v11; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  Handle = (HANDLE)-1LL;
  v11 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v11, &v9);
  if ( SchemaExtensions >= 0 )
  {
    if ( !ApiSetIsSchemaSealed(v11) )
    {
      v6 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
      SchemaExtensions = v6;
      if ( v6 >= 0 )
      {
        SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
      }
      else if ( v6 == -1073741772 )
      {
        SchemaExtensions = 0;
      }
    }
    if ( SchemaExtensions >= 0 )
    {
      v7 = v11;
      v11 = 0LL;
      *a2 = v7;
      *a3 = v9;
    }
  }
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v11 )
    ApiSetReleaseSchema(v11);
  return (unsigned int)SchemaExtensions;
}
