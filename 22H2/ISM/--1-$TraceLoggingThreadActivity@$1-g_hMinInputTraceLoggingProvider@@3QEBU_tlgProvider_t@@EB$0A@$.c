/*
 * XREFs of ??1?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x1800A1048
 * Callers:
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$0 @ 0x1800A24A2 (_LampArrayDevice--ProcessLampState_--_1_--dtor$0.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A0F40 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

ULONG __fastcall TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>::~TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>(
        __int64 a1)
{
  ULONG result; // eax

  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
      EventActivityIdControl(4u, (LPGUID)(a1 + 24));
    *(_DWORD *)a1 = 2;
    result = _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return result;
}
