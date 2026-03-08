/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x14000DF68
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000C764 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000CB84 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x14000D090 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000D6A8 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x14000DD54 (-CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000DE04 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  struct HINSTANCE__ *v8; // [rsp+28h] [rbp-38h]
  void *v9; // [rsp+30h] [rbp-30h]
  char v10; // [rsp+38h] [rbp-28h]
  const char *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]
  char v14; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v7 = 11;
        v8 = &_ImageBase;
        v9 = retaddr;
        v11 = "dwm.exe";
        v14 = 1;
        v10 = 1;
        v12 = a2;
        v13 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v7);
      }
    }
  }
  return (int)ProcAddress;
}
