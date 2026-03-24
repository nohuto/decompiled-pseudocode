/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C016189C
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01615F4 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000D300 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C006F66C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _CcdWriteRegistryValues @ 0x1C01619F8 (_CcdWriteRegistryValues.c)
 *     ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z @ 0x1C02EC580 (-BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a4)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // rax
  wchar_t Dest; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  if ( !BmlIsSupportedGraphicsFormat(a4 + 3, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v7 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", (unsigned int)v5);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v12 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4);
    v10 = v12;
    if ( v12 < 0
      || (a4->PrimSurfSize.cx & 0x100LL) != 0
      && (v16 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4), v10 = v16, v16 < 0)
      || (a4->PrimSurfSize.cx & 0x800000) != 0
      && (v17 = CcdWriteRegistryValues((int)a2, &Dest, (__int64)a4), v10 = v17, v17 < 0) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
      v18[3] = v10;
      v18[4] = a2;
      v18[5] = v5;
      v18[6] = a4;
      WdLogEvent5_WdWarning(v18);
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
    v11[3] = v10;
    v11[4] = a2;
    v11[5] = v5;
    v11[6] = a4;
    WdLogEvent5_WdAssertion(v11);
  }
  return (unsigned int)v10;
}
