/*
 * XREFs of InitializeFontSignatures @ 0x1C0392BFC
 * Callers:
 *     vInitMapper @ 0x1C0392BE0 (vInitMapper.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 */

void InitializeFontSignatures()
{
  unsigned int *v0; // rax
  __int64 v1; // r8
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v3; // [rsp+38h] [rbp-41h]
  __int128 v4; // [rsp+40h] [rbp-39h]
  __int64 v5; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v7; // [rsp+98h] [rbp+1Fh]
  int v8; // [rsp+A0h] [rbp+27h]
  __int64 v9; // [rsp+A8h] [rbp+2Fh]
  USHORT AnsiCodePage; // [rsp+E0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+E8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 4;
  v5 = 0LL;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v4 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  Context = 0LL;
  v3 = 0LL;
  MAPPER::SignatureTable = 0LL;
  MAPPER::FaceNameTable = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) >= 0 )
  {
    v0 = (unsigned int *)PALLOCMEM2((unsigned int)(HIDWORD(Context) + 4 * Context), 1885433159LL, 1);
    MAPPER::SignatureTable = v0;
    if ( v0 )
    {
      v1 = (unsigned int)Context;
      v3 = v0;
      LODWORD(Context) = 0;
      *(_QWORD *)&v4 = &v0[v1];
      *((_QWORD *)&v4 + 1) = v4;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
      {
        Win32FreePool(MAPPER::SignatureTable);
        MAPPER::SignatureTable = 0LL;
      }
      else
      {
        MAPPER::FaceNameTable = (unsigned __int16 *)v4;
        MAPPER::DefaultCharset = v5;
        AnsiCodePage = 0;
        OemCodePage = 0;
        RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
        if ( AnsiCodePage == 0xFDE9 )
          MAPPER::DefaultCharset = -2;
      }
    }
  }
}
