/*
 * XREFs of ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C01B9444
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C017B2AC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01B94C4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *v3; // rbx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2557LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2557LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 240) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 240) = 0LL;
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 544);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGDEVICESYNCOBJECT *)v2 )
      break;
    if ( v3 )
    {
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*v2);
      ExFreePoolWithTag(v3, 0);
    }
  }
}
