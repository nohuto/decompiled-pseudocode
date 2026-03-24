/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0121480
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C01A774C (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 */

void __fastcall W32kBaseInputEnableCallback(const struct _GUID *a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 1 )
    CPTPProcessor::TraceEnvironment();
}
