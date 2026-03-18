/*
 * XREFs of PostThreadEvent @ 0x1C01E825C
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1C0155780 (NtMITPostThreadEventMessage.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall PostThreadEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  int v9; // eax
  bool v10; // bl
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12, a2, a3);
  v9 = (int)qword_1C029CD60;
  if ( qword_1C029CD60 )
    v9 = qword_1C029CD60(30LL, a1, a2, v7, a4, a5);
  v10 = v9 != 0;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  return v10;
}
