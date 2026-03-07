__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  v5 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0hbr0pqx_EtwWriteTransfer(a4, &EventEnterDdiQueryChildRelations, a3, a4, a3, a2, 0, a4 / 0x1C);
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD))(a1 + 200))(a2, a3, (unsigned int)v5);
  if ( bTracingEnabled )
  {
    v11 = v5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0hbr0pqx_EtwWriteTransfer(v9, &EventExitDdiQueryChildRelations, v5, v5, a3, a2, v10, v5 / 0x1C);
  }
  v13 = WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
  *(_QWORD *)(v13 + 40) = v10;
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = a3;
  *(_OWORD *)(v13 + 48) = 0LL;
  return (unsigned int)v10;
}
