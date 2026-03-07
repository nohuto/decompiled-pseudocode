__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, __int64 *a2, size_t *a3)
{
  int SchemaExtensions; // ebx
  __int64 v6; // rcx
  int v7; // eax
  size_t v8; // rax
  void *v9; // rcx
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  size_t v12; // [rsp+28h] [rbp-8h] BYREF
  void *v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Handle = (HANDLE)-1LL;
  v13 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v13, &v12);
  if ( SchemaExtensions < 0 )
    goto LABEL_10;
  if ( ApiSetIsSchemaSealed((__int64)v13) )
  {
LABEL_9:
    v8 = v12;
    *a2 = v6;
    v9 = 0LL;
    v13 = 0LL;
    *a3 = v8;
    goto LABEL_11;
  }
  v7 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
  SchemaExtensions = v7;
  if ( v7 >= 0 )
  {
    SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
  }
  else
  {
    if ( v7 != -1073741772 )
      goto LABEL_10;
    SchemaExtensions = 0;
  }
  if ( SchemaExtensions >= 0 )
  {
    v6 = (__int64)v13;
    goto LABEL_9;
  }
LABEL_10:
  v9 = v13;
LABEL_11:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    v9 = v13;
  }
  if ( v9 )
    ApiSetReleaseSchema(v9);
  return (unsigned int)SchemaExtensions;
}
