/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01E395C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A0138 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A03E8 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00A04E4 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C00A0690 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A0990 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C00A09B0 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0CC4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00A0D94 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  CInputConfig *v8; // rcx
  CInputConfig *i; // rdx
  _DWORD *v10; // r8
  struct _LIST_ENTRY *v11; // rax
  CInputConfig *v12; // rcx
  PVOID v13; // rbx
  __int64 Pool2; // rdi
  CInputConfig *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  CInputConfig **v20; // rax
  CInputConfig *v21; // rcx
  __int64 v23; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-C8h] BYREF
  CInputConfig *v26; // [rsp+30h] [rbp-B8h]
  CInputConfig *v27; // [rsp+38h] [rbp-B0h]
  PVOID BackTrace[20]; // [rsp+40h] [rbp-A8h] BYREF

  v7 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v25[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v8 = *(CInputConfig **)this;
  v25[1] = this;
  v26 = v8;
  for ( i = *(CInputConfig **)v8; ; i = *(CInputConfig **)i )
  {
    v27 = i;
    v10 = 0LL;
    if ( v8 != this )
      v10 = (_DWORD *)((char *)v8 + 16);
    if ( !v10 )
      break;
    if ( *v10 == *(_DWORD *)a2 && v10[1] == *((_DWORD *)a2 + 1) )
    {
      v11 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v25);
      CInputConfig::_FreeInputSpace(v12, v11);
      break;
    }
    v8 = i;
    v26 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !*((_DWORD *)a2 + 363) && !*((_BYTE *)a2 + 1448) )
    goto LABEL_17;
  v13 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F436E49) == 0x6F436E49
    && (v23 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1866690121 )
    {
      if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_12;
    }
    Pool2 = ExAllocatePool2(260LL, 1504LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v13,
                               Pool2,
                               BackTrace) )
      {
LABEL_29:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)-1073741801;
      }
      goto LABEL_14;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v13,
                             Pool2,
                             BackTrace) )
      goto LABEL_29;
    Pool2 += 16LL;
  }
  else
  {
LABEL_12:
    Pool2 = ExAllocatePool2(260LL, 1488LL);
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
LABEL_14:
  CInputSpace::Reset((CInputSpace *)(Pool2 + 16), a2);
  CInputConfig::_ProcessInputSpace(v15, (struct CInputSpace *)(Pool2 + 16));
  v20 = (CInputConfig **)*((_QWORD *)this + 1);
  if ( *v20 != this )
    __fastfail(3u);
  *(_QWORD *)Pool2 = this;
  *(_QWORD *)(Pool2 + 8) = v20;
  *v20 = (CInputConfig *)Pool2;
  *((_QWORD *)this + 1) = Pool2;
  if ( !*(_BYTE *)(Pool2 + 1464) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
    *(_QWORD *)(Pool2 + 32) = CurrentProcessWin32Process;
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x2000000u;
  }
LABEL_17:
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v21);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v7;
}
