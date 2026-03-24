/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C006DCF4
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006DA90 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01B31E0 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C006D528 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C006E458 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C006E6D0 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006E7F4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C006E978 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0071584 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C00715A4 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0071654 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  unsigned int v4; // edi
  CInputConfig *v5; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *v7; // rax
  CInputConfig *v8; // rcx
  char *v9; // rax
  char *v10; // rsi
  CInputConfig *v11; // rcx
  __int64 v12; // rcx
  CInputConfig **v13; // rax
  CInputConfig *v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  CInputConfig *v18; // [rsp+30h] [rbp-28h]
  _QWORD *v19; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 380LL);
  v17[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)this;
  v17[1] = this;
  v18 = v5;
  for ( i = *(_QWORD **)v5; ; i = (_QWORD *)*i )
  {
    v19 = i;
    if ( v5 == this || v5 == (CInputConfig *)-16LL )
      break;
    if ( *((_DWORD *)v5 + 4) == *(_DWORD *)a2 && *((_DWORD *)v5 + 5) == *((_DWORD *)a2 + 1) )
    {
      v7 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v17);
      CInputConfig::_FreeInputSpace(v8, v7);
      break;
    }
    v5 = (CInputConfig *)i;
    v18 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)a2 + 355) || *((_BYTE *)a2 + 1416) )
  {
    v9 = (char *)Win32AllocPoolZInit(0x5B0uLL, 1866690121LL);
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-1073741801;
    CInputSpace::Reset((CInputSpace *)(v9 + 16), a2);
    CInputConfig::_ProcessInputSpace(v11, (struct CInputSpace *)(v10 + 16));
    v13 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v13 != this )
      __fastfail(3u);
    *(_QWORD *)v10 = this;
    *((_QWORD *)v10 + 1) = v13;
    *v13 = (CInputConfig *)v10;
    *((_QWORD *)this + 1) = v10;
    if ( !v10[1432] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      *((_QWORD *)v10 + 4) = CurrentProcessWin32Process;
      *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x2000000u;
    }
  }
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v14);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v4;
}
