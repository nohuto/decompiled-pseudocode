/*
 * XREFs of SeAuditProcessExit @ 0x14091E294
 * Callers:
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SepAdtLogAuditRecord @ 0x1403C20B4 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14062F1D8 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessExit(PEPROCESS Process, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  struct _DMA_ADAPTER *v5; // rbx
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v7; // rdx
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P[0] = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
    LODWORD(Src[2]) = 524423;
    Src[0] = 0x125100000005LL;
    DmaOperations = v5[9].DmaOperations;
    Src[10] = &SeSubsystemName;
    Src[12] = v5[1].DmaOperations;
    v7 = *(_QWORD *)&DmaOperations->Size;
    Src[20] = Process[1].Header.WaitListHead.Flink;
    LODWORD(Src[3]) = 4;
    LODWORD(DmaOperations) = *(unsigned __int8 *)(v7 + 1);
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)DmaOperations + 8;
    Src[26] = P[0];
    Src[15] = 0x40000000ALL;
    HIDWORD(Src[23]) = *(unsigned __int16 *)P[0] + 16;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    HalPutDmaAdapter(v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
