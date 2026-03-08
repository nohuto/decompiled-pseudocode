/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0382990
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C038B3E8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned int v3; // edi
  struct DXGKVMB_COMMAND_BASE *v7; // rbx
  HANDLE CurrentProcessId; // rax
  size_t Length; // rsi
  __int64 v10; // rcx
  char v11; // dl
  __int64 CurrentProcess; // rax
  struct _MDL *v14; // [rsp+30h] [rbp-D0h]
  unsigned int v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v16[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-A0h]
  unsigned int v18; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0;
  v17 = 0;
  *(_OWORD *)v16 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v16, this, 0x238u, 0LL, 0LL, 0LL);
  v7 = v16[0];
  if ( v16[0] )
  {
    CurrentProcessId = PsGetCurrentProcessId();
    *((_BYTE *)v7 + 12) = 1;
    Length = 520LL;
    *((_DWORD *)v7 + 3) &= 0x1FFu;
    *((_QWORD *)v7 + 4) = CurrentProcessId;
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 2) = 1000LL;
    *((_QWORD *)v7 + 3) = a2;
    *((_BYTE *)v7 + 562) = 0;
    *(_DWORD *)((char *)v7 + 563) = 0;
    *((_BYTE *)v7 + 567) = 0;
    if ( a3->Length <= 0x208u )
      Length = a3->Length;
    memmove((char *)v7 + 40, a3->Buffer, Length);
    *((_WORD *)v7 + (Length >> 1) + 20) = 0;
    *((_BYTE *)v7 + 562) ^= (*((_BYTE *)a2 + 424) ^ *((_BYTE *)v7 + 562)) & 1;
    v10 = *((_DWORD *)a2 + 106) >> 2;
    LOBYTE(v10) = *((_BYTE *)v7 + 562) ^ (*((_BYTE *)v7 + 562) ^ (2 * v10)) & 2;
    *((_BYTE *)v7 + 562) = v10;
    v11 = v10 ^ (v10 ^ (8 * (*((_DWORD *)a2 + 106) >> 5))) & 8;
    *((_BYTE *)v7 + 562) = v11;
    *((_BYTE *)v7 + 562) = v11 ^ (v11 ^ *((_DWORD *)a2 + 106) & 0xF0) & 0x10;
    CurrentProcess = PsGetCurrentProcess(v10);
    v15[0] = 8;
    *((_BYTE *)v7 + 562) = (PsGetProcessWow64Process(CurrentProcess) != 0 ? 4 : 0) | *((_BYTE *)v7 + 562) & 0xFB;
    if ( (int)DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v16[1], v16[0], v17, &v18, v15, v14) >= 0
      && v15[0] >= 4 )
    {
      v3 = v18;
    }
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v16);
  return v3;
}
