/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A03E8
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax

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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)v7 + 2);
    if ( *((_BYTE *)v7 + 1448) )
      v2 = v7;
    if ( (v14 & 1) != 0 )
    {
      v3 = v7;
      *((_DWORD *)v7 + 2) = v14 & 0xFFFFFFFE;
    }
    v5 = v6;
    v6 = *(CInputConfig **)v6;
    if ( !v4 )
      v4 = v7;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
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
