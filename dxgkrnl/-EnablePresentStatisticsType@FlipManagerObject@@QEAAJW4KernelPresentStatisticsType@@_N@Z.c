/*
 * XREFs of ?EnablePresentStatisticsType@FlipManagerObject@@QEAAJW4KernelPresentStatisticsType@@_N@Z @ 0x1C007F3D4
 * Callers:
 *     NtFlipObjectEnablePresentStatisticsType @ 0x1C0080360 (NtFlipObjectEnablePresentStatisticsType.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerObject::EnablePresentStatisticsType(__int64 a1, unsigned int a2, char a3)
{
  int v6; // ebx
  __int64 v7; // r8

  v6 = CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 40));
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = a3;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 256) + 16LL))(
           *(_QWORD *)(a1 + 256),
           a2,
           v7);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 40));
  }
  return (unsigned int)v6;
}
