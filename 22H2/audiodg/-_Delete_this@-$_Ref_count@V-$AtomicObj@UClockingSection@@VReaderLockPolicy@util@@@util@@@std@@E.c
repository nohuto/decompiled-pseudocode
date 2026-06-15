/*
 * XREFs of ?_Delete_this@?$_Ref_count@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@EEAAXXZ @ 0x14006B630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::_Delete_this(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
