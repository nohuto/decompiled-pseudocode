/*
 * XREFs of ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C036341C
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B9100 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(DXGVIRTUALGPUMANAGER *this, struct DXGDEVICE *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdi
  struct DXGDEVICE **v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 13);
  while ( v4 != (DXGVIRTUALGPUMANAGER *)((char *)this + 104) )
  {
    v5 = (struct DXGDEVICE **)((char *)v4 - 120);
    v4 = *(DXGVIRTUALGPUMANAGER **)v4;
    if ( a2 )
    {
      if ( v5[22] == a2 )
        (*((void (__fastcall **)(struct DXGDEVICE **))*v5 + 18))(v5);
    }
    else
    {
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER *, struct DXGDEVICE **))(*(_QWORD *)this + 24LL))(this, v5);
    }
  }
  if ( !a2 )
  {
    operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
