/*
 * XREFs of ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0026374
 * Callers:
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C00262D4 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C00262F8 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSTABLEVISRGNANDSPRITE::vUnlock(DXGSTABLEVISRGNANDSPRITE *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 5) )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)this + 280LL))(v2, *((_DWORD *)this + 4) == 0);
    (*(void (**)(void))(*(_QWORD *)this + 264LL))();
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
  }
}
