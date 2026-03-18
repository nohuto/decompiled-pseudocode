/*
 * XREFs of ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C02E9A40
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D74A0 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainClientResources(DXGDEVICE *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v2, (struct _KTHREAD **)this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v3);
  v4 = 2;
  while ( *((_QWORD *)this + 7) )
    DXGDEVICE::DestroyClientResource(this, *((struct DXGALLOCATION ***)this + 7));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v2);
}
