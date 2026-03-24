/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007C740
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00CC1F0 (GreRestoreDCInternal.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C014D314 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007C830 (--1RFONTOBJ@@QEAA@XZ.c)
 *     HmgFree @ 0x1C007C860 (HmgFree.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007C928 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00BCD10 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00BCD60 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01FBC3C (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(DC **this, unsigned int a2)
{
  int v4; // eax
  DC *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  DC *v8; // rdx
  _QWORD *v10; // rsi
  unsigned int v11; // ebp
  struct PFT *v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v13, *((struct RFONT **)*this + 221));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1208));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1344));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1480));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1616));
  DC::hpath(*this, 0LL);
  if ( qword_1C0255850 )
    v4 = qword_1C0255850();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0255858 )
    qword_1C0255858(this, a2);
  v5 = *this;
  v6 = (_QWORD *)*((_QWORD *)*this + 260);
  if ( v6 )
  {
    do
    {
      v10 = v6;
      v6 = (_QWORD *)v6[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      v11 = 32;
      v12 = *(struct PFT **)(*v10 + 128LL);
      if ( v12 == gpPFTPrivate )
        v11 = 64;
      --*(_DWORD *)(*v10 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C0255808 )
        qword_1C0255808(&v12, *v10, 0LL, v11);
      Win32FreePool((__int64)v10);
    }
    while ( v6 );
    v5 = *this;
  }
  v7 = *((_QWORD *)v5 + 37);
  v8 = v5;
  if ( v7 && (DC *)v7 != (DC *)((char *)v5 + 264) )
  {
    Win32FreePool(v7);
    *((_QWORD *)*this + 37) = 0LL;
    v8 = *this;
  }
  HmgFree(*(_QWORD *)v8);
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  return 1LL;
}
