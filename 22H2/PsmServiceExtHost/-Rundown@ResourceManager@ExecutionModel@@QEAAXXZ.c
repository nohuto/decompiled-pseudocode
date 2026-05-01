/*
 * XREFs of ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800683C4
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800645D4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18000333C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::Rundown(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rsi
  HANDLE *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx

  RmpAcquireGlobalLock();
  *((_DWORD *)this + 40) |= 2u;
  v2 = *((_QWORD *)this + 3) + 40LL;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(HANDLE **)(*(_QWORD *)v2 + 16LL);
    (*((void (__fastcall **)(HANDLE *))*v3 + 1))(v3);
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v3);
    (*((void (__fastcall **)(HANDLE *))*v3 + 2))(v3);
  }
  v4 = *((_QWORD *)this + 4) + 40LL;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  RmpReleaseGlobalLock();
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    TpReleaseCleanupGroupMembers(v6, 1LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
}
