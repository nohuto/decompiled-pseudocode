void __fastcall ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        ApplyPermissionWithinThisScope *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ProtectableFromChange *v5; // rdi
  unsigned int v6; // esi
  int v7; // eax
  unsigned __int8 v8; // r9
  ProtectableFromChange *v9; // rdi
  unsigned __int64 v10; // rsi
  char v11; // bl

  if ( *((_BYTE *)this + 10) )
  {
    v5 = *(ProtectableFromChange **)this;
    v6 = *((unsigned __int8 *)this + 8);
    if ( *((_BYTE *)this + 9) )
    {
      if ( ProtectableFromChange::IsModifyingActionAllowed(*(ProtectableFromChange **)this, *((_BYTE *)this + 8)) )
        WdLogSingleEntry0(1LL);
      ProtectableFromChange::AllowModifyingAction(
        *(ProtectableFromChange **)this,
        *((_BYTE *)this + 8),
        *((_QWORD *)this + 2),
        v8);
      v9 = *(ProtectableFromChange **)this;
      v10 = *((unsigned __int8 *)this + 8);
      if ( (unsigned __int8)v10 >= *(_BYTE *)(*(_QWORD *)this + 20LL) )
        WdLogSingleEntry0(1LL);
      v11 = *((_BYTE *)this + 11);
      *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)v9 + 24, v10) = v11;
    }
    else
    {
      if ( (unsigned __int8)v6 >= *((_BYTE *)v5 + 20) )
        WdLogSingleEntry0(1LL);
      v7 = *((unsigned __int16 *)v5 + 11);
      if ( _bittest(&v7, v6) )
      {
        LOBYTE(a2) = *((_BYTE *)this + 8);
        ProtectableFromChange::DisallowModifyingAction(*(ProtectableFromChange **)this, a2, a3, a4);
      }
    }
  }
}
