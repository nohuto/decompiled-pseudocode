/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C0349D0C
 * Callers:
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C032577C (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     DxgkAcquireKeyedMutex @ 0x1C034D3D0 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C034D6E0 (DxgkAcquireKeyedMutex2.c)
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373350 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00264BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0057808 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C005799C (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C00579DC (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0380414 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8,
        bool a9)
{
  __int64 v9; // r14
  unsigned __int64 *v10; // r12
  unsigned int v11; // ebx
  struct DXGPROCESS *Current; // r13
  struct DXGKEYEDMUTEX *v13; // rdi
  void *v14; // r15
  unsigned int v15; // esi
  unsigned int v16; // eax
  struct DXGGLOBAL *Global; // rax
  int v19; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v21; // rcx
  struct _LIST_ENTRY ***v22; // rcx
  volatile unsigned int Lock; // r13d
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v25; // rax
  int v26; // eax
  unsigned __int64 *v27; // rcx
  const void *v28; // rdx
  ULONG64 v29; // rax
  struct DXGKEYEDMUTEX *v30; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v31[24]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT v32[5]; // [rsp+70h] [rbp-88h] BYREF

  v9 = (unsigned int)a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 4071LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFenceValue", 4071LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v10 = 0LL;
  v11 = 0;
  Current = DXGPROCESS::GetCurrent(a1);
  v30 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v30);
  v13 = v30;
  if ( !v30 )
  {
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
LABEL_20:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 3221225485LL;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v31, v30);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  v14 = a6;
  if ( a6 )
  {
    v15 = Size;
    if ( !(_DWORD)Size )
    {
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      goto LABEL_19;
    }
    v16 = *((_DWORD *)v13 + 42);
    if ( (_DWORD)Size != v16 )
    {
      WdLogSingleEntry4(3LL, v13, (unsigned int)Size, v16, -1073741811LL);
      goto LABEL_19;
    }
  }
  else
  {
    v15 = Size;
    if ( (_DWORD)Size )
    {
      WdLogSingleEntry1((unsigned int)((_DWORD)a6 + 3), -1073741811LL);
LABEL_19:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
      goto LABEL_20;
    }
  }
  if ( *((_BYTE *)v13 + 176) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
            Current,
            v13,
            v9,
            a2,
            a3,
            a4,
            v10,
            a8);
LABEL_52:
    if ( v14 )
    {
      if ( a9 )
      {
        v28 = (const void *)*((_QWORD *)v13 + 20);
        v29 = (ULONG64)v14 + v15;
        if ( v29 > MmUserProbeAddress || v29 <= (unsigned __int64)v14 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, v28, v15);
      }
      else
      {
        memmove(v14, *((const void **)v13 + 20), v15);
      }
    }
LABEL_39:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return v11;
  }
  if ( *((_DWORD *)v13 + 14) != 3 )
  {
    if ( DXGKEYEDMUTEX::IsOwner(v13, v9)
      || *((_DWORD *)v13 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v13 + 11)) )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Keyed mutex does not support recursive Acquire's, returning 0x%I64x, pKeyedMutex  = 0x%I64x, hKeyedMutex = 0x%I64x",
        -1073741811LL,
        (__int64)v13,
        v9,
        0LL,
        0LL);
      goto LABEL_19;
    }
    v19 = *((_DWORD *)v13 + 14);
    if ( (v19 & 0xFFFFFFFD) != 0 && (v19 != 1 || a2 == *((_QWORD *)v13 + 9) || a3) )
    {
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v13 + 10);
LABEL_47:
      *v10 = (unsigned __int64)Flink;
      v27 = a8;
      if ( a8 )
        *a8 = *((_QWORD *)v13 + 9);
      if ( (unsigned int)(*((_DWORD *)v13 + 14) - 1) > 1 )
      {
        WdLogSingleEntry1(1LL, 4248LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pKeyedMutex->m_OwnershipState == STATE_EVENT_SIGNALLED) || (pKeyedMutex->m_OwnershipState == STATE_PENDING_RELEASE)",
          4248LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)v13 + 14) = 0;
      *((_DWORD *)v13 + 15) = v9;
      *((_QWORD *)v13 + 8) = DXGPROCESS::GetCurrent((__int64)v27);
      *((_QWORD *)v13 + 11) = 0LL;
      goto LABEL_52;
    }
    memset(v32, 0, 0x50uLL);
    LODWORD(v32[0].Header.WaitListHead.Flink) = v9;
    v32[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent(v21);
    *(_QWORD *)&v32[0].Header.Lock = a2;
    v32[2].Header.LockNV = 0;
    KeInitializeEvent(&v32[1], NotificationEvent, 0);
    v22 = (struct _LIST_ENTRY ***)*((_QWORD *)v13 + 13);
    if ( *v22 != (struct _LIST_ENTRY **)((char *)v13 + 96) )
      goto LABEL_59;
    v32[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v13 + 96);
    *(_QWORD *)&v32[3].Header.Lock = v22;
    *v22 = &v32[2].Header.WaitListHead.Blink;
    *((_QWORD *)v13 + 13) = &v32[2].Header.WaitListHead.Blink;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    v11 = KeWaitForSingleObject(&v32[1], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    Lock = v32[2].Header.Lock;
    if ( v32[2].Header.LockNV )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return Lock;
    }
    Blink = v32[2].Header.WaitListHead.Blink;
    v25 = *(struct _LIST_ENTRY **)&v32[3].Header.Lock;
    if ( (struct _LIST_ENTRY **)v32[2].Header.WaitListHead.Blink->Blink != &v32[2].Header.WaitListHead.Blink
      || **(struct _KEVENT ***)&v32[3].Header.Lock != (struct _KEVENT *)&v32[2].Header.WaitListHead.Blink )
    {
LABEL_59:
      __fastfail(3u);
    }
    **(_QWORD **)&v32[3].Header.Lock = v32[2].Header.WaitListHead.Blink;
    Blink->Blink = v25;
    v26 = *((_DWORD *)v13 + 14);
    if ( v26 == 2 && *((struct _KEVENT **)v13 + 11) == v32 )
      v11 = 0;
    if ( v11 )
      goto LABEL_39;
    if ( v26 != 3 )
    {
      Flink = v32[2].Header.WaitListHead.Flink;
      goto LABEL_47;
    }
  }
  WdLogSingleEntry2(3LL, v13, 128LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return 128LL;
}
