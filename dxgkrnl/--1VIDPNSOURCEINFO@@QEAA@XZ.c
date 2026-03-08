/*
 * XREFs of ??1VIDPNSOURCEINFO@@QEAA@XZ @ 0x1C02F1700
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall VIDPNSOURCEINFO::~VIDPNSOURCEINFO(VIDPNSOURCEINFO *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v1 + 16), (struct DXGDEVICE *)v1);
  }
}
