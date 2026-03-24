/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0247F30
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  size_t v6; // rbx
  unsigned int Length; // eax
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-D8h]
  unsigned int v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+4Ch] [rbp-B4h]
  int v21; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v22; // [rsp+58h] [rbp-A8h]
  HANDLE CurrentProcessId; // [rsp+60h] [rbp-A0h]
  _WORD v24[261]; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+272h] [rbp+172h]
  unsigned int v26; // [rsp+280h] [rbp+180h] BYREF

  v25 &= 0xF0u;
  CurrentProcessId = PsGetCurrentProcessId();
  v6 = 520LL;
  Length = a3->Length;
  v18 = 0LL;
  v19 = 0;
  v20 = 1;
  v21 = 1000;
  v22 = a2;
  if ( (unsigned __int16)Length <= 0x208u )
    v6 = Length;
  memmove(v24, a3->Buffer, v6);
  v8 = *((_BYTE *)a2 + 344) & 1 | (2 * (*((_BYTE *)a2 + 346) & 1 | *((_BYTE *)a2 + 347) & 4));
  v24[v6 >> 1] = 0;
  LOBYTE(v9) = v25 & 0xF4 | v8;
  v25 = v9;
  CurrentProcess = PsGetCurrentProcess(v9, v10, v11, v12);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  v17[0] = 8;
  v25 = (ProcessWow64Process != 0 ? 4 : 0) | v25 & 0xFB;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v18, 0x238u, &v26, v17, v16) < 0
    || v17[0] < 4 )
  {
    return 0LL;
  }
  else
  {
    return v26;
  }
}
