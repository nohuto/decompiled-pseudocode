void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 SharedVm; // rax
  __int64 v9; // rax

  v4 = a4;
  if ( !(_DWORD)a4 )
  {
    SharedVm = MiGetSharedVm(a1, a2, a3, a4);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), a3);
  if ( !v4 )
  {
    v9 = MiGetSharedVm(a1, a2, a3, a4);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  }
}
