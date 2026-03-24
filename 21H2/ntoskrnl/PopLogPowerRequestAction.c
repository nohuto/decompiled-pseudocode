/*
 * XREFs of PopLogPowerRequestAction @ 0x14062B588
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14062B904 (PopStatsDeletePowerRequest.c)
 *     PopStatsCreatePowerRequest @ 0x14062B98C (PopStatsCreatePowerRequest.c)
 *     PdcPoPowerRequestBlockingCallback @ 0x14062BD40 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsMarkPowerRequestActive @ 0x14062BDC0 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14062CEE8 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F6690 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140263EF0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140263F30 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

int __fastcall PopLogPowerRequestAction(const CHAR *a1, __int64 a2)
{
  __int64 v2; // rax
  const size_t *v3; // r9
  int v4; // r11d
  int v5; // r10d
  int v7; // [rsp+30h] [rbp-29h] BYREF
  int v8; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v11[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  int *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  if ( a2 )
    v2 = *(_QWORD *)(a2 + 144);
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    tlgCreate1Sz_char((__int64)v10, a1);
    tlgCreate1Sz_wchar_t((__int64)v11, v3);
    v14 = 0;
    v17 = 0;
    v12 = &v7;
    v13 = 4;
    v15 = &v8;
    v16 = 4;
    v7 = v4;
    v8 = v5;
    LODWORD(v2) = tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140C02228,
                    (unsigned __int8 *)&byte_140029D77,
                    0LL,
                    0LL,
                    6u,
                    &v9);
  }
  return v2;
}
