/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00141A4
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0013CC0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this)
{
  CInputConfig *v1; // r15
  _QWORD **v2; // rbx
  _QWORD **v3; // rbp
  _QWORD **v4; // rdi
  CInputConfig *v5; // rcx
  CInputConfig *v6; // r14
  _QWORD **v7; // rsi
  int v8; // eax

  v1 = gpInputConfig;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v1;
  v6 = **(CInputConfig ***)v1;
  while ( 1 )
  {
    v7 = 0LL;
    if ( v5 != v1 )
      v7 = (_QWORD **)((char *)v5 + 16);
    if ( !v7 )
      break;
    if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 376LL);
    v8 = *((_DWORD *)v7 + 2);
    if ( *((_BYTE *)v7 + 1448) )
      v2 = v7;
    if ( (v8 & 1) != 0 )
    {
      v3 = v7;
      *((_DWORD *)v7 + 2) = v8 & 0xFFFFFFFE;
    }
    v5 = v6;
    v6 = *(CInputConfig **)v6;
    if ( !v4 )
      v4 = v7;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 813LL);
  if ( v2 )
    goto LABEL_8;
  if ( v3 )
  {
    v2 = v3;
    goto LABEL_8;
  }
  v2 = v4;
  if ( v4 )
LABEL_8:
    *((_DWORD *)v2 + 2) |= 1u;
}
