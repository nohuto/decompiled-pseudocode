/*
 * XREFs of ?OnActivated@CSynchronousSuperWetInk@@UEAAXXZ @ 0x180250730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSynchronousSuperWetInk::OnActivated(CSynchronousSuperWetInk *this, __int64 a2)
{
  if ( *((_DWORD *)this + 43) != 2 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 23) + 104LL) + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 23) + 104LL),
      a2);
  }
  *((_BYTE *)this + 96) = 0;
}
