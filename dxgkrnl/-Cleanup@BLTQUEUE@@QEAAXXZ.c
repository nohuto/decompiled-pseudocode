/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C03CC424
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C03CC1B8 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C03CF198 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  if ( *((_QWORD *)this + 76) )
  {
    *((_QWORD *)this + 78) = KeGetCurrentThread();
    *((_BYTE *)this + 572) = 1;
    KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 76), 0, 0LL);
    ZwClose(*((HANDLE *)this + 76));
    v2 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
    *((_QWORD *)this + 78) = 0LL;
    *((_QWORD *)this + 76) = 0LL;
    *((_QWORD *)this + 77) = 0LL;
    (**v2)(v2, 0LL);
    *((_QWORD *)this + 16) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
  }
}
