void __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v3; // rax

  while ( 1 )
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 )
    {
      v3 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this);
      if ( v3 )
        break;
    }
    WdLogSingleEntry0(6LL);
    ZwYieldExecution();
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 13, (__int64)v3);
}
