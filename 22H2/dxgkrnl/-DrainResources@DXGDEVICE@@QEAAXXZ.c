/*
 * XREFs of ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C018B0AC
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018AB64 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 */

void __fastcall DXGDEVICE::DrainResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rax
  __int64 v3; // rax
  struct _KTHREAD *v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v7 = 2;
  while ( 1 )
  {
    v2 = this[7];
    if ( !v2 )
      break;
    v3 = *((_QWORD *)v2 + 5);
    if ( v3 )
      *(_QWORD *)(v3 + 32) = 0LL;
    v4 = this[7];
    this[7] = (struct _KTHREAD *)*((_QWORD *)v4 + 5);
    DXGDEVICE::DestroyResource((DXGDEVICE *)this, (struct DXGALLOCATION **)v4, 0LL, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
