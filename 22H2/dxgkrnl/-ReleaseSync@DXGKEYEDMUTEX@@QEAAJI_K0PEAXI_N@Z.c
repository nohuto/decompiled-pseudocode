/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0291E6C
 * Callers:
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246740 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C0294150 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C02943B0 (DxgkReleaseKeyedMutex2.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029CA38 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0027E30 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0049238 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x1C024BED4 (-VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGPROCESS *Current; // rax
  char v26; // si
  DXGKEYEDMUTEX *i; // rax
  struct _KEVENT *v28; // rcx
  _BYTE v30[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v30, (struct DXGKEYEDMUTEX *)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  LODWORD(v14) = 0;
  if ( *((_BYTE *)this + 168) )
    goto LABEL_8;
  if ( *((_DWORD *)this + 14) == 3 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v14 = 128LL;
LABEL_4:
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = v14;
LABEL_5:
    v16 = (_QWORD *)v15;
LABEL_15:
    WdLogEvent5_WdWarning(v16);
    goto LABEL_32;
  }
  if ( DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)this, a2) )
  {
LABEL_8:
    v19 = (__int64)Src;
    if ( Src )
    {
      if ( !(_DWORD)Size )
      {
        v15 = WdLogNewEntry5_WdWarning(v12, Src, v13);
        v14 = -1073741811LL;
        goto LABEL_4;
      }
      if ( (_DWORD)Size != *((_DWORD *)this + 40) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, Src, v13);
        v16[3] = this;
        v16[4] = (unsigned int)Size;
        v16[5] = *((unsigned int *)this + 40);
        LODWORD(v14) = -1073741811;
        v16[6] = -1073741811LL;
        goto LABEL_15;
      }
      if ( a7 )
      {
        v20 = this[19];
        if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v20, Src, (unsigned int)Size);
      }
      else
      {
        memmove(this[19], Src, (unsigned int)Size);
      }
    }
    else if ( (_DWORD)Size )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
      LODWORD(v14) = -1073741811;
      *(_QWORD *)(v15 + 24) = -1073741811LL;
      goto LABEL_5;
    }
    *((_DWORD *)this + 15) = 0;
    this[8] = 0LL;
    if ( *((_BYTE *)this + 168) )
    {
      v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v12, v19) + 197);
      Current = DXGPROCESS::GetCurrent(v22, v21, v23, v24);
      LODWORD(v14) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(
                       (DXG_GUEST_GLOBAL_VMBUS *)v14,
                       Current,
                       (const void **)this,
                       a2,
                       a3,
                       a4);
    }
    else
    {
      v26 = 0;
      for ( i = (DXGKEYEDMUTEX *)this[12]; i != (DXGKEYEDMUTEX *)(this + 12); i = *(DXGKEYEDMUTEX **)i )
      {
        v28 = (struct _KEVENT *)((char *)i - 64);
        if ( *((_QWORD *)i - 8) == a3 )
        {
          v26 = 1;
          *((_DWORD *)this + 14) = 2;
          this[11] = v28;
          v28[2].Header.LockNV = 0;
          v28[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a4;
          KeSetEvent(v28 + 1, 0, 0);
          break;
        }
      }
      if ( !v26 )
      {
        *((_DWORD *)this + 14) = 1;
        this[9] = (void *)a3;
        this[10] = (void *)a4;
      }
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v12, v17);
    *(_QWORD *)(v18 + 24) = this;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
LABEL_32:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  return (unsigned int)v14;
}
