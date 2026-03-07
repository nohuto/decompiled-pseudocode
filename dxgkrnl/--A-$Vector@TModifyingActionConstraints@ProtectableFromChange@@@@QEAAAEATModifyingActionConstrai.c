unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 16) )
    WdLogSingleEntry0(1LL);
  return a2 + *(_QWORD *)(a1 + 24);
}
