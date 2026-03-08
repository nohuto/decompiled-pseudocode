/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C01B3EC0
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02BC3DC (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E8704 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
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
        WdLogSingleEntry1(1LL, 1176LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCoreDeviceAccess->IsExclusiveOwner()",
          1176LL,
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
