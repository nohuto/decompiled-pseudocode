/*
 * XREFs of ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C038262C
 * Callers:
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01851D4 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01DE444 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        struct DXGSYNCOBJECT *a4,
        struct DXGDEVICESYNCOBJECT *a5,
        struct DXGRESOURCE *a6)
{
  unsigned int v6; // edi
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  int HostProcess; // eax
  int HostHandle; // eax
  int v13; // eax
  __int64 v14; // rbx
  struct _MDL *v16; // [rsp+30h] [rbp-D0h]
  DXGPROCESS *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+70h] [rbp-90h]
  unsigned int v20; // [rsp+180h] [rbp+80h] BYREF

  v6 = 0;
  v17 = a2;
  if ( !a4 && !a5 && !a6 )
  {
    WdLogSingleEntry1(1LL, 13476LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSyncObject || pDeviceSyncObject || pResource",
      13476LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = 0;
  *(_OWORD *)v18 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = v18[0];
  if ( v18[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(v17);
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = HostProcess;
    *((_QWORD *)v10 + 2) = 1004LL;
    if ( a6 )
    {
      HostHandle = *((_DWORD *)a6 + 5);
    }
    else if ( a5 )
    {
      HostHandle = *((_DWORD *)a5 + 11);
    }
    else
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a4, a3);
    }
    *((_DWORD *)v10 + 6) = HostHandle;
    LODWORD(v17) = 8;
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            this,
            (unsigned __int8 *)v18[1],
            v18[0],
            v19,
            &v20,
            (unsigned int *)&v17,
            v16);
    if ( v13 < 0 || (v13 = -1073741823, (unsigned int)v17 < 4) )
    {
      v14 = v13;
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v6 = v20;
    }
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return v6;
}
