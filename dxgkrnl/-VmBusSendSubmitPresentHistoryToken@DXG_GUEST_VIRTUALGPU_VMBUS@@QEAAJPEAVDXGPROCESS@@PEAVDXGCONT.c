/*
 * XREFs of ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C038B02C
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        DXGPROCESS *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // esi
  struct DXGKVMB_COMMAND_BASE *v13; // rdi
  unsigned int v14; // ebx
  int HostProcess; // eax
  int v16; // eax
  struct _MDL *v18; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v19[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-148h]

  v8 = 0;
  v20 = 0;
  *(_OWORD *)v19 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v19, a1, 0x48u, 0LL, 0LL, 0LL);
  v13 = v19[0];
  if ( v19[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *((_BYTE *)v13 + 12) = 0;
    *((_DWORD *)v13 + 3) &= 0x1FFu;
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = HostProcess;
    *((_QWORD *)v13 + 2) = 34LL;
    if ( a3 )
      v16 = *(_DWORD *)(a3 + 28);
    else
      v16 = 0;
    *((_DWORD *)v13 + 6) = v16;
    *((_QWORD *)v13 + 6) = a7;
    *((_QWORD *)v13 + 5) = a6;
    *((_QWORD *)v13 + 4) = a5;
    *((_QWORD *)v13 + 7) = a4;
    if ( a8 )
      v8 = *(_DWORD *)(a8 + 44);
    *((_DWORD *)v13 + 16) = v8;
    v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v19[1], v19[0], v20, v18);
  }
  else
  {
    v14 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v19);
  return v14;
}
