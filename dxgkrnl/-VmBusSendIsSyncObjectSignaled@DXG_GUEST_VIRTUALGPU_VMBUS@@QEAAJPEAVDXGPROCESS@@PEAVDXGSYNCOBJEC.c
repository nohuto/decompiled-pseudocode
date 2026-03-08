/*
 * XREFs of ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0385CE0
 * Callers:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C034B76C (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGSYNCOBJECT *a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // ebx
  struct DXGKVMB_COMMAND_BASE *v10; // rsi
  int HostHandle; // edx
  int v12; // eax
  int v13; // eax
  struct _MDL *v15; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v16[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-148h]

  v5 = 0;
  v17 = 0;
  *(_OWORD *)v16 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v16, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = v16[0];
  if ( v16[0] )
  {
    HostHandle = DXGSYNCOBJECT::GetHostHandle(a3, a4);
    v12 = *((_DWORD *)a2 + 126);
    *((_BYTE *)v10 + 12) = 0;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = v12;
    *((_QWORD *)v10 + 2) = 46LL;
    *((_DWORD *)v10 + 6) = HostHandle;
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v16[1], v16[0], v17, v15);
    if ( v13 < 0 )
    {
      if ( v13 == -1071775484 )
        *a5 = 0;
      else
        v5 = v13;
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v16);
  return v5;
}
