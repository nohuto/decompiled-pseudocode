/*
 * XREFs of InitializeFontSignatures @ 0x1C0391E1C
 * Callers:
 *     vInitMapper @ 0x1C0391E00 (vInitMapper.c)
 * Callees:
 *     <none>
 */

int InitializeFontSignatures()
{
  unsigned int *v0; // rax
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v5; // [rsp+38h] [rbp-41h]
  __int128 v6; // [rsp+40h] [rbp-39h]
  __int64 v7; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v9; // [rsp+98h] [rbp+1Fh]
  int v10; // [rsp+A0h] [rbp+27h]
  __int64 v11; // [rsp+A8h] [rbp+2Fh]
  USHORT AnsiCodePage; // [rsp+E0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+E8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 4;
  v7 = 0LL;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v6 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  Context = 0LL;
  v5 = 0LL;
  MAPPER::SignatureTable = 0LL;
  MAPPER::FaceNameTable = 0LL;
  LODWORD(v0) = RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL);
  if ( (int)v0 < 0 )
    return (int)v0;
  LODWORD(v0) = Context;
  v1 = HIDWORD(Context) + 4 * Context;
  if ( !v1 )
  {
LABEL_9:
    MAPPER::SignatureTable = 0LL;
    return (int)v0;
  }
  v0 = (unsigned int *)Win32AllocPoolZInit(v1, 1885433159LL);
  MAPPER::SignatureTable = v0;
  if ( !v0 )
    return (int)v0;
  v2 = (unsigned int)Context;
  v5 = v0;
  LODWORD(Context) = 0;
  *(_QWORD *)&v6 = &v0[v2];
  *((_QWORD *)&v6 + 1) = v6;
  if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
  {
    LODWORD(v0) = Win32FreePool(MAPPER::SignatureTable);
    goto LABEL_9;
  }
  MAPPER::FaceNameTable = (unsigned __int16 *)v6;
  MAPPER::DefaultCharset = v7;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  LODWORD(v0) = 65001;
  if ( AnsiCodePage == 0xFDE9 )
    MAPPER::DefaultCharset = -2;
  return (int)v0;
}
