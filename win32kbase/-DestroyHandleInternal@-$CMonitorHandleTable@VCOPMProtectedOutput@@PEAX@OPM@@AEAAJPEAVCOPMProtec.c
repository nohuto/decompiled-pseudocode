/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C0188350
 * Callers:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C00AFF24 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00AFF94 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C01883F0 (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4)
{
  __int64 v5; // rbx
  int v8; // esi
  struct _KMUTANT *v9; // rcx
  unsigned int v10; // ebx

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  OPM::CMutex::Lock(a4);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  v9 = (struct _KMUTANT *)*a4;
  v10 = 0;
  if ( v8 < 0 )
    v10 = v8;
  if ( v9 )
    KeReleaseMutex(v9, 0);
  return v10;
}
