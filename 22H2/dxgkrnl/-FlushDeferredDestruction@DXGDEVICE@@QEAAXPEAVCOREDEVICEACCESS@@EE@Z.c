/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C018B3A4
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B4BC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C018B774 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C12FC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02ED494 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  int v8; // ebp
  char *v9; // rdx
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 239) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        WdLogSingleEntry1(1LL, 1177LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCoreDeviceAccess->IsExclusiveOwner()",
          1177LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v13 = -5000000LL;
    do
    {
      v8 = *((_DWORD *)this + 476);
      KeWaitForSingleObject(
        *((PVOID *)this + 239),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
    }
    while ( a4 && v8 != *((_DWORD *)this + 476) );
    if ( a3 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 22, 0);
      DXGPUSHLOCK::AcquireExclusive(v11);
      v12 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v9);
  }
}
