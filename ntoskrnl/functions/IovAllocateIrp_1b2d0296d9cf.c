PSLIST_ENTRY __fastcall IovAllocateIrp(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  char v12; // bp
  __int64 Irp1; // rbx
  PSLIST_ENTRY IrpPrivate; // rax
  __int64 v15; // rax

  v5 = a3;
  if ( (VfRuleClasses & 0x10) == 0 )
    return IopAllocateIrpPrivate(a1, a2, a3);
  v8 = IovpLogStackTrace(0LL);
  v10 = (_QWORD *)v8;
  if ( v8 )
    v11 = v8 + 24;
  else
    v11 = 0LL;
  v12 = a2 + 2;
  LOBYTE(v9) = v12;
  Irp1 = VfIoAllocateIrp1(v9, v5, a4, v11);
  if ( !Irp1 )
  {
    IrpPrivate = IopAllocateIrpPrivate(a1, v12, v5);
    Irp1 = (__int64)IrpPrivate;
    if ( IrpPrivate )
      VfIoAllocateIrp2(IrpPrivate, v11);
  }
  if ( v10 )
    *v10 = Irp1;
  if ( Irp1 )
  {
    *(_QWORD *)(Irp1 + 184) -= 144LL;
    v15 = *(_QWORD *)(Irp1 + 184);
    *(_BYTE *)(Irp1 + 67) -= 2;
    *(_BYTE *)(Irp1 + 66) -= 2;
    *(_QWORD *)(Irp1 + 200) = v15;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(Irp1);
  }
  return (PSLIST_ENTRY)Irp1;
}
