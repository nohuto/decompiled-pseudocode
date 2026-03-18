/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68
 * Callers:
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0087050 (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C0087148 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00CB7C0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00CB9C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C023DAC8 (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  DC *v4; // rax
  DC *v5; // rcx
  _QWORD *v6; // rdi
  char *v7; // rdx
  _QWORD *v9; // rsi
  unsigned int v10; // ebp
  struct PFT *v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v12, *((struct RFONT **)*this + 220));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1200));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1336));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1472));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1608));
  DC::hpath(*this, 0LL);
  if ( qword_1C029B5C0 && (int)qword_1C029B5C0() >= 0 && qword_1C029B5C8 )
    qword_1C029B5C8(this, a2);
  v4 = *this;
  v5 = *this;
  v6 = (_QWORD *)*((_QWORD *)*this + 259);
  if ( v6 )
  {
    do
    {
      v9 = v6;
      v6 = (_QWORD *)v6[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      v10 = 32;
      v11 = *(struct PFT **)(*v9 + 128LL);
      if ( v11 == gpPFTPrivate )
        v10 = 64;
      --*(_DWORD *)(*v9 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C029B578 )
        qword_1C029B578(&v11, *v9, 0LL, v10);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
    }
    while ( v6 );
    v4 = *this;
    v5 = *this;
  }
  v7 = (char *)*((_QWORD *)v4 + 37);
  if ( v7 && v7 != (char *)v4 + 264 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
    *((_QWORD *)*this + 37) = 0LL;
    v5 = *this;
  }
  HmgFree(*(_QWORD *)v5);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return 1LL;
}
