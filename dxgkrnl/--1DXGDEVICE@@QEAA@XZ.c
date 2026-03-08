/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C01887C0
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00419D0 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B9100 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C005C970 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this)
{
  __int64 v2; // r8
  void **v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  int v14; // [rsp+80h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) != 1 )
  {
    WdLogSingleEntry1(1LL, 686LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_InDestructor == TRUE", 686LL, 0LL, 0LL, 0LL, 0LL);
  }
  operator delete(*((void **)this + 239));
  v3 = (void **)((char *)this + 1304);
  v4 = 16LL;
  v5 = (_DWORD *)((char *)this + 1432);
  do
  {
    if ( *(v5 - 112) )
      operator delete(*(v3 - 56));
    if ( *v5 )
      operator delete(*v3);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (*((_BYTE *)this + 1901) & 2) != 0 )
  {
    v8 = *((_QWORD *)this + 60);
    if ( v8 )
    {
      v14 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v8, 1, v2, &v14);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
    {
      v10 = v9 + 288;
      v11 = (_QWORD *)((char *)this + 120);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 288));
      v12 = *((_QWORD *)this + 15);
      if ( v12 )
      {
        if ( *(_QWORD **)(v12 + 8) != v11 || (v13 = (_QWORD *)*((_QWORD *)this + 16), (_QWORD *)*v13 != v11) )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *((_QWORD *)this + 16) = 0LL;
        *v11 = 0LL;
      }
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)this + 11) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
    KeLeaveCriticalRegion();
  }
  v6 = (void *)*((_QWORD *)this + 243);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 60);
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( v7 )
      CRefCountedBuffer::RefCountedBufferRelease(v7);
  }
  else
  {
    operator delete(v7);
  }
  if ( (*((_BYTE *)this + 1901) & 4) != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL), 0xFFFFFFFF) == 1 )
  {
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 2) + 176LL), 0LL);
  }
  if ( *((DXGDEVICE **)this + 70) != (DXGDEVICE *)((char *)this + 560) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGDEVICE **)this + 68) != (DXGDEVICE *)((char *)this + 544) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGDEVICE **)this + 66) != (DXGDEVICE *)((char *)this + 528) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGDEVICE **)this + 64) != (DXGDEVICE *)((char *)this + 512) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGDEVICE **)this + 62) != (DXGDEVICE *)((char *)this + 496) )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
