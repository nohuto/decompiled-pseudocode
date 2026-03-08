/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C034C27C
 * Callers:
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C032A098 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C034E9D0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C034EC90 (DxgkReleaseKeyedMutex2.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380220 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00264BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C005799C (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x1C0388EC4 (-VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        void **this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char *Src,
        size_t Size,
        bool a7)
{
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  void *v15; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v16; // rbx
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rax
  char v19; // si
  DXGKEYEDMUTEX *i; // rax
  struct _KEVENT *v21; // rcx
  _BYTE v22[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v22, (struct DXGKEYEDMUTEX *)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v11 = 0;
  if ( !*((_BYTE *)this + 176) )
  {
    if ( *((_DWORD *)this + 14) == 3 )
    {
      v12 = 128;
      WdLogSingleEntry2(3LL, this, 128LL);
LABEL_13:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
      return v12;
    }
    if ( !DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)this, a2) )
    {
      v12 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Keyed mutex 0x%I64x is not owned by this device, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_13;
    }
  }
  if ( Src )
  {
    if ( !(_DWORD)Size )
    {
      v12 = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      goto LABEL_13;
    }
    v13 = *((_DWORD *)this + 42);
    if ( (_DWORD)Size != v13 )
    {
      v12 = -1073741811;
      WdLogSingleEntry4(3LL, this, (unsigned int)Size, v13, -1073741811LL);
      goto LABEL_13;
    }
    if ( a7 )
    {
      v15 = this[20];
      if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, Src, (unsigned int)Size);
    }
    else
    {
      memmove(this[20], Src, (unsigned int)Size);
    }
  }
  else if ( (_DWORD)Size )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    goto LABEL_13;
  }
  *((_DWORD *)this + 15) = 0;
  this[8] = 0LL;
  if ( *((_BYTE *)this + 176) )
  {
    v16 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
    Current = DXGPROCESS::GetCurrent(v17);
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(v16, Current, (struct DXGKEYEDMUTEX *)this, a2, a3, a4);
  }
  else
  {
    v19 = 0;
    for ( i = (DXGKEYEDMUTEX *)this[12]; i != (DXGKEYEDMUTEX *)(this + 12); i = *(DXGKEYEDMUTEX **)i )
    {
      v21 = (struct _KEVENT *)((char *)i - 64);
      if ( *((_QWORD *)i - 8) == a3 )
      {
        v19 = 1;
        *((_DWORD *)this + 14) = 2;
        this[11] = v21;
        v21[2].Header.LockNV = 0;
        v21[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a4;
        KeSetEvent(v21 + 1, 0, 0);
        break;
      }
    }
    if ( !v19 )
    {
      *((_DWORD *)this + 14) = 1;
      this[9] = (void *)a3;
      this[10] = (void *)a4;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  return v11;
}
