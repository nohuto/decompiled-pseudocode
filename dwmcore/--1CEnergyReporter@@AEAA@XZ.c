/*
 * XREFs of ??1CEnergyReporter@@AEAA@XZ @ 0x1801CF100
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D5BCC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CEnergyReporter::~CEnergyReporter(PTP_WORK *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  WaitForThreadpoolWorkCallbacks(this[9], 1);
  CloseThreadpoolWork(this[9]);
  v2 = (void (__fastcall ***)(_QWORD, _QWORD))this[6];
  if ( v2 )
    (**v2)(v2, 1LL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 11));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 2));
}
