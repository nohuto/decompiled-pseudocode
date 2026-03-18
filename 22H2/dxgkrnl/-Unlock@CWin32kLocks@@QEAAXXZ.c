/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0025FCC
 * Callers:
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0025FA8 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0055E38 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01BF8F0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C033E51C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0026048 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWin32kLocks::Unlock(CWin32kLocks *this)
{
  char *v2; // rdi

  v2 = (char *)this + 24;
  if ( *((_QWORD *)this + 2) )
  {
    (*(void (**)(void))(*(_QWORD *)v2 + 24LL))();
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 288LL))(*(_QWORD *)this, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)this, *((_QWORD *)this + 1));
    *(_QWORD *)this = 0LL;
  }
}
