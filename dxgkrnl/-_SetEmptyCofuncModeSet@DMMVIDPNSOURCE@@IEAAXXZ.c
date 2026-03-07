void __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this)
{
  DMMVIDPNSOURCEMODESET *Pool2; // rax
  DMMVIDPNSOURCEMODESET *v3; // rax
  DMMVIDPNSOURCEMODESET *v4; // rdi
  __int64 v5; // rcx

  while ( 1 )
  {
    Pool2 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 )
    {
      v3 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(Pool2, this);
      v4 = v3;
      if ( v3 )
        break;
    }
    WdLogSingleEntry0(6LL);
    ZwYieldExecution();
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 && v3 != (DMMVIDPNSOURCEMODESET *)v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  *((_QWORD *)this + 13) = v4;
}
