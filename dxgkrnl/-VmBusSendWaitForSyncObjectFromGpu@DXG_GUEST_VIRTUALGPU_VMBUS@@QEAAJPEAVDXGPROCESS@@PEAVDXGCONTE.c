/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C038C81C
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0317F44 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C038B7B4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const unsigned int *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        void *Src,
        unsigned __int64 a8,
        unsigned int a9,
        struct DXGHWQUEUE *a10)
{
  DXGSYNCOBJECT **v10; // r14
  struct DXGCONTEXT *v12; // rbp
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rdi
  void *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  signed __int64 v23; // r8
  char *v24; // r13
  int v25; // r15d
  int HostHandle; // eax
  int v27; // eax
  _BYTE v32[24]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v33; // [rsp+90h] [rbp-168h] BYREF
  int v34; // [rsp+A0h] [rbp-158h]
  struct DXGDEVICESYNCOBJECT **v35; // [rsp+228h] [rbp+30h]

  v10 = a5;
  v12 = a3;
  if ( !a10 )
  {
    if ( a3 )
      goto LABEL_8;
LABEL_7:
    v13 = 9330LL;
    WdLogSingleEntry1(2LL, 9330LL);
    v14 = L"Only and atleast one of HwQueue or Context must be specified";
    goto LABEL_28;
  }
  if ( a3 )
    goto LABEL_7;
  if ( !a4 || !Src )
  {
    v13 = 9338LL;
    WdLogSingleEntry1(2LL, 9338LL);
    v14 = L"Submit wait to HwQueue requires SyncObjectHandles and MonitoredFenceValueArray";
LABEL_28:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
LABEL_8:
  v15 = a9;
  if ( a9 - 1 > 0x1FFFF )
  {
    v13 = 9345LL;
    WdLogSingleEntry1(2LL, 9345LL);
    v14 = L"ObjectCount is invalid";
    goto LABEL_28;
  }
  v16 = 8 * a9 + 40;
  v17 = 4 * a9 + v16;
  if ( v17 > 0x20000 )
  {
    WdLogSingleEntry1(2LL, 9353LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Command size is too big", 9353LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v33 = 0LL;
  v34 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v33, this, v17, 0LL, 0LL, 0LL);
  v18 = v33;
  if ( (_QWORD)v33 )
  {
    *(_BYTE *)(v33 + 12) = 0;
    v20 = (void *)(v18 + v16);
    *(_DWORD *)(v18 + 12) &= 0x1FFu;
    *(_QWORD *)v18 = 0LL;
    *(_DWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 16) = 25LL;
    if ( a10 )
    {
      memmove(v20, a4, 4 * a9);
      memmove((void *)(v18 + 40), Src, 8 * a9);
      v21 = *((_DWORD *)a10 + 7);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, a2);
      if ( a9 )
      {
        v22 = v18 - (_QWORD)a5;
        v23 = (char *)a6 - (char *)a5;
        v35 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v24 = (char *)((char *)a4 - (_BYTE *)v20);
        do
        {
          v25 = *((_DWORD *)*v10 + 50);
          if ( (unsigned int)(v25 - 5) <= 1 )
          {
            *(_DWORD *)v20 = (*(_DWORD **)((char *)v10 + v23))[11];
            *(DXGSYNCOBJECT **)((char *)v10 + v22 + 40) = *(DXGSYNCOBJECT **)((char *)v10 + (_BYTE *)Src - (_BYTE *)a5);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v10, *(_DWORD *)&v24[(_QWORD)v20]);
            v22 = v18 - (_QWORD)a5;
            v23 = (signed __int64)v35;
            *(_DWORD *)v20 = HostHandle;
            if ( v25 == 3 )
            {
              *(_QWORD *)(v18 + 40) = a8;
              *(_BYTE *)(v18 + 32) = 1;
            }
          }
          v20 = (char *)v20 + 4;
          ++v10;
          --v15;
        }
        while ( v15 );
        LODWORD(v15) = a9;
        v12 = a3;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      v21 = *((_DWORD *)v12 + 7);
    }
    *(_DWORD *)(v18 + 24) = v21;
    *(_DWORD *)(v18 + 8) = DXGPROCESS::GetHostProcess(a2);
    *(_DWORD *)(v18 + 28) = v15;
    v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(
            (struct _KTHREAD **)this,
            (struct DXGVMBUSMESSAGE *)&v33);
    v19 = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 9361LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for command",
      9361LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v19) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
  return (unsigned int)v19;
}
