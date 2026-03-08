/*
 * XREFs of RtlCaptureContext @ 0x140420580
 * Callers:
 *     KiFreezeTargetExecution @ 0x140369240 (KiFreezeTargetExecution.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeSaveStateForHibernate @ 0x1404170A0 (KeSaveStateForHibernate.c)
 *     ExpSystemErrorHandler @ 0x140422390 (ExpSystemErrorHandler.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1409381FC (DbgkpLkmdSnapThreadInContext.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1409388FC (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x140A73E94 (LkmdTelCreateReport.c)
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralDpc @ 0x140A97DC0 (IopLiveDumpCorralDpc.c)
 *     VfUtilCaptureViolationKernelStack @ 0x140ABF490 (VfUtilCaptureViolationKernelStack.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlCaptureContext(PCONTEXT ContextRecord)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  _M128A v15; // xmm0
  _M128A v16; // xmm1
  _M128A v17; // xmm2
  _M128A v18; // xmm3
  _M128A v19; // xmm4
  _M128A v20; // xmm5
  _M128A v21; // xmm6
  _M128A v22; // xmm7
  _M128A v23; // xmm8
  _M128A v24; // xmm9
  _M128A v25; // xmm10
  _M128A v26; // xmm11
  _M128A v27; // xmm12
  _M128A v28; // xmm13
  _M128A v29; // xmm14
  _M128A v30; // xmm15
  unsigned int v31; // [rsp+0h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+8h] [rbp+0h]
  char v33; // [rsp+10h] [rbp+8h] BYREF

  ContextRecord->Rax = v1;
  ContextRecord->Rcx = (unsigned __int64)ContextRecord;
  ContextRecord->Rdx = v2;
  ContextRecord->R8 = v7;
  ContextRecord->R9 = v8;
  ContextRecord->R10 = v9;
  ContextRecord->R11 = v10;
  ContextRecord->FltSave.XmmRegisters[0] = v15;
  ContextRecord->FltSave.XmmRegisters[1] = v16;
  ContextRecord->FltSave.XmmRegisters[2] = v17;
  ContextRecord->FltSave.XmmRegisters[3] = v18;
  ContextRecord->FltSave.XmmRegisters[4] = v19;
  ContextRecord->FltSave.XmmRegisters[5] = v20;
  ContextRecord->SegCs = __CS__;
  ContextRecord->SegDs = __DS__;
  ContextRecord->SegEs = __ES__;
  ContextRecord->SegSs = __SS__;
  ContextRecord->SegFs = __FS__;
  ContextRecord->SegGs = __GS__;
  ContextRecord->Rbx = v3;
  ContextRecord->Rbp = v4;
  ContextRecord->Rsi = v6;
  ContextRecord->Rdi = v5;
  ContextRecord->R12 = v11;
  ContextRecord->R13 = v12;
  ContextRecord->R14 = v13;
  ContextRecord->R15 = v14;
  *(_DWORD *)((char *)&ContextRecord->Header[0].Low + 2) = 0;
  ContextRecord->FltSave.XmmRegisters[6] = v21;
  ContextRecord->FltSave.XmmRegisters[7] = v22;
  ContextRecord->FltSave.XmmRegisters[8] = v23;
  ContextRecord->FltSave.XmmRegisters[9] = v24;
  ContextRecord->FltSave.XmmRegisters[10] = v25;
  ContextRecord->FltSave.XmmRegisters[11] = v26;
  ContextRecord->FltSave.XmmRegisters[12] = v27;
  ContextRecord->FltSave.XmmRegisters[13] = v28;
  ContextRecord->FltSave.XmmRegisters[14] = v29;
  ContextRecord->FltSave.XmmRegisters[15] = v30;
  ContextRecord->FltSave.MxCsr = _mm_getcsr();
  ContextRecord->MxCsr = _mm_getcsr();
  ContextRecord->Rsp = (unsigned __int64)&v33;
  ContextRecord->Rip = retaddr;
  ContextRecord->EFlags = v31;
  ContextRecord->ContextFlags = 1048591;
}
