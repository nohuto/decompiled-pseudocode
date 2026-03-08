/*
 * XREFs of DispatchDwmDiagnosticsControlMessage @ 0x180270044
 * Callers:
 *     McGenControlCallbackV2 @ 0x18001A340 (McGenControlCallbackV2.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z @ 0x180270104 (-HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z.c)
 */

void __fastcall DispatchDwmDiagnosticsControlMessage(struct DwmDiagnosticsControlMessage_0 *a1)
{
  DWORD CurrentProcessId; // eax
  signed int LastError; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  DWORD pSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 6) == -1 )
    goto LABEL_18;
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  if ( pSessionId == *((_DWORD *)a1 + 6) )
  {
LABEL_18:
    if ( !*((_BYTE *)a1 + 2) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( *(_WORD *)a1 == 1 && *((_DWORD *)a1 + 4) == 40 )
        {
          g_HeatMaps_TargetProcessId = *((_DWORD *)a1 + 7);
          g_HeatMaps_Type = *((_DWORD *)a1 + 8);
          g_HeatMaps_OverdrawContentKinds = *((_DWORD *)a1 + 9);
        }
      }
      else if ( *((_DWORD *)a1 + 4) >= 0x24u )
      {
        DwmDiagnosticsControlMessage_0::HandleMessage(a1);
      }
    }
  }
}
