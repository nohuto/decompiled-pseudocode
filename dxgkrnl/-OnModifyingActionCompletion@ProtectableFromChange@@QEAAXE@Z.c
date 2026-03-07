void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) != 255LL )
  {
    if ( v2 >= *((_QWORD *)this + 10) )
      WdLogSingleEntry0(1LL);
    --*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2);
  }
  if ( v2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) )
    ProtectableFromChange::DisallowModifyingAction(this, v2);
}
