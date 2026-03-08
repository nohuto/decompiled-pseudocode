/*
 * XREFs of ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1C033E90C
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C037EC00 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(
        DXGVIRTUALMACHINE *this,
        struct _LUID *a2)
{
  volatile signed __int32 *v2; // rdi
  _QWORD *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *i; // rcx
  _QWORD *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v2 = (volatile signed __int32 *)((char *)this + 64);
  v5 = 0LL;
  DXGPUSHLOCK::AcquireShared((DXGVIRTUALMACHINE *)((char *)this + 64));
  v6 = (_QWORD **)((char *)this + 40);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = i - 17;
    if ( *((_BYTE *)i + 16) && *((_DWORD *)v8 + 7) == a2->LowPart && *((_DWORD *)v8 + 8) == a2->HighPart )
    {
      if ( !*((_BYTE *)v8 + 156) )
      {
        v5 = i - 17;
        _m_prefetchw(v8 + 46);
        v9 = *((_DWORD *)v8 + 92);
        while ( v9 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)v8 + 92, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_13;
        }
        v5 = 0LL;
      }
      break;
    }
  }
LABEL_13:
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGK_VIRTUAL_GPU_PARAV *)v5;
}
