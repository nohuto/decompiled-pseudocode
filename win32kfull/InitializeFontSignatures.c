/*
 * XREFs of InitializeFontSignatures @ 0x1C03B61E8
 * Callers:
 *     vInitMapper @ 0x1C03B6370 (vInitMapper.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeFontSignatures(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h]
  __int128 v8; // [rsp+40h] [rbp-39h]
  __int64 v9; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v11; // [rsp+98h] [rbp+1Fh]
  int v12; // [rsp+A0h] [rbp+27h]
  __int64 v13; // [rsp+A8h] [rbp+2Fh]
  USHORT AnsiCodePage; // [rsp+E0h] [rbp+67h] BYREF
  USHORT OemCodePage; // [rsp+E8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 4;
  v9 = 0LL;
  memset(&QueryTable.Name, 0, 20);
  v8 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  Context = 0LL;
  v7 = 0LL;
  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *(_QWORD *)(v1 + 19512) = 0LL;
  *(_QWORD *)(v1 + 19520) = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) >= 0 )
  {
    v2 = HIDWORD(Context) + 4 * Context;
    if ( v2 )
    {
      v3 = Win32AllocPoolZInit(v2, 1885433159LL);
      *(_QWORD *)(v1 + 19512) = v3;
      if ( !v3 )
        return;
      v4 = (unsigned int)Context;
      v7 = v3;
      v5 = *(_QWORD *)(v1 + 19512);
      LODWORD(Context) = 0;
      *(_QWORD *)&v8 = v5 + 4 * v4;
      *((_QWORD *)&v8 + 1) = v8;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) >= 0 )
      {
        *(_QWORD *)(v1 + 19520) = v8;
        *(_BYTE *)(v1 + 19528) = v9;
        AnsiCodePage = 0;
        OemCodePage = 0;
        RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
        if ( AnsiCodePage == 0xFDE9 )
          *(_BYTE *)(v1 + 19528) = -2;
        return;
      }
      Win32FreePool(*(void **)(v1 + 19512));
    }
    *(_QWORD *)(v1 + 19512) = 0LL;
  }
}
