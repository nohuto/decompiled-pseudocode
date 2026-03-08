/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C0387AD4
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C02BD7E4 (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int Size,
        void *a7,
        unsigned int *a8)
{
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  struct DXGKVMB_COMMAND_BASE *v13; // rcx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // r8d
  void *v17; // rdx
  int v18; // r8d
  int *v19; // rbx
  unsigned int v20; // eax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rdi
  struct _MDL *v25; // [rsp+30h] [rbp-D0h]
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh]
  void *Src; // [rsp+58h] [rbp-A8h]
  struct DXGKVMB_COMMAND_BASE *v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h]

  Src = a5;
  v10 = *a8 + 19;
  v27 = a4;
  v11 = v10 & 0xFFFFFFF8;
  v26 = a3;
  v12 = Size + 56;
  if ( Size + 56 > 0x20000 || v11 > 0x20000 )
  {
    v22 = v11;
    v23 = v11;
    v24 = v12;
    WdLogSingleEntry2(2LL, v12, v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either input buffer size (0x%I64x) or output buffer size (0x%I64x) is too big to go over VmBus",
      v24,
      v22,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v30 = 0;
    *(_OWORD *)v29 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v29, this, v12, 0LL, 0LL, 0LL);
    v13 = v29[0];
    if ( v29[0] )
    {
      v15 = *a8;
      v16 = v26;
      *(_QWORD *)v29[0] = 0LL;
      *((_DWORD *)v13 + 2) = 0;
      *((_DWORD *)v13 + 5) = 0;
      v17 = Src;
      *((_DWORD *)v13 + 8) = v16;
      v18 = v27;
      *((_BYTE *)v13 + 12) = 1;
      *((_DWORD *)v13 + 3) &= 0x1FFu;
      *((_DWORD *)v13 + 9) = v18;
      *((_DWORD *)v13 + 4) = 1017;
      *((struct _LUID *)v13 + 3) = a2;
      *((_DWORD *)v13 + 10) = Size;
      *((_DWORD *)v13 + 11) = v15;
      memmove((char *)v13 + 48, v17, Size);
      v19 = (int *)operator new[](v11, 0x4B677844u, 64LL);
      v26 = v11;
      v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v29[1], v29[0], v30, v19, &v26, v25);
      if ( v14 >= 0 )
      {
        v14 = -1073741823;
        if ( v26 >= 8 )
        {
          v14 = *v19;
          if ( *v19 >= 0 )
          {
            v20 = v19[1];
            if ( v20 <= *a8 )
            {
              memmove(a7, v19 + 2, v20);
              *a8 = v19[1];
            }
          }
        }
      }
      if ( v19 )
        operator delete(v19);
    }
    else
    {
      WdLogSingleEntry1(6LL, 13977LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        13977LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v14 = -1073741801;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
    return (unsigned int)v14;
  }
}
