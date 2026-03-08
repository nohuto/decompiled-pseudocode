/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1C0380414
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C0349D0C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C034B480 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        void **a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  LONGLONG QuadPart; // r14
  struct DXGKVMB_COMMAND_BASE *v12; // rdi
  int v13; // ebx
  int v14; // ebx
  int HostProcess; // eax
  int v16; // eax
  size_t v17; // r14
  unsigned int v18; // esi
  _QWORD *v19; // rdi
  struct _MDL *v21; // [rsp+30h] [rbp-D0h]
  unsigned int HostHandle; // [rsp+50h] [rbp-B0h] BYREF
  DXGPROCESS *v23; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v24; // [rsp+60h] [rbp-A0h]
  struct DXGKVMB_COMMAND_BASE *v25[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+80h] [rbp-80h]

  v23 = a2;
  v24 = a8;
  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v26 = 0;
  *(_OWORD *)v25 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v25, this, 0x40u, 0LL, 0LL, 0LL);
  v12 = v25[0];
  if ( !v25[0] )
    goto LABEL_5;
  v14 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(v23);
  *(_QWORD *)v12 = 0LL;
  *((_DWORD *)v12 + 5) = 0;
  *((_DWORD *)v12 + 2) = HostProcess;
  *((_DWORD *)v12 + 7) = HostHandle;
  *((_QWORD *)v12 + 4) = a5;
  *((_DWORD *)v12 + 10) = a6;
  v16 = *((_DWORD *)v12 + 14);
  *((_BYTE *)v12 + 12) = 1;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *((_DWORD *)v12 + 4) = 1014;
  *((_DWORD *)v12 + 6) = v14;
  *((_QWORD *)v12 + 6) = QuadPart;
  *((_DWORD *)v12 + 14) = v16 & 0xFFFFFFFE | (a7 == 0LL);
  v17 = *((unsigned int *)a3 + 42);
  v18 = (v17 + 31) & 0xFFFFFFF8;
  if ( v18 > 0x20000 || v18 < (unsigned int)v17 )
  {
    WdLogSingleEntry1(3LL, v18);
    v13 = -2147483643;
    goto LABEL_19;
  }
  v19 = (_QWORD *)operator new[](v18, 0x4B677844u, 64LL);
  if ( !v19 )
  {
    WdLogSingleEntry1(6LL, 13704LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate output buffer for VmBusSendAcquireKeyedMutexSync",
      13704LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_5:
    v13 = -1073741801;
    goto LABEL_19;
  }
  HostHandle = (v17 + 31) & 0xFFFFFFF8;
  v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
          this,
          (unsigned __int8 *)v25[1],
          v25[0],
          v26,
          v19,
          &HostHandle,
          v21);
  if ( v13 >= 0 )
  {
    if ( HostHandle < v18 )
    {
      v13 = -1073741823;
    }
    else
    {
      v13 = *(_DWORD *)v19;
      if ( (_DWORD)v17 )
        memmove(a3[20], v19 + 3, v17);
      *v24 = v19[2];
      if ( a9 )
        *a9 = v19[1];
    }
  }
  operator delete(v19);
LABEL_19:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v25);
  return (unsigned int)v13;
}
