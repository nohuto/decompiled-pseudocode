/*
 * XREFs of PopDiagTraceBatteryTriggerFlags @ 0x14086E710
 * Callers:
 *     PopResetCBTriggers @ 0x14082AA6C (PopResetCBTriggers.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x14099300C (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int __fastcall PopDiagTraceBatteryTriggerFlags(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  const CHAR *v4; // rbx
  int v5; // r8d
  char v6; // r9
  char v7; // r8
  char v8; // r10
  char v9; // r11
  char v11; // [rsp+38h] [rbp-49h] BYREF
  char v12; // [rsp+39h] [rbp-48h] BYREF
  char v13; // [rsp+3Ah] [rbp-47h] BYREF
  char v14; // [rsp+3Bh] [rbp-46h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-39h] BYREF
  char v17[16]; // [rsp+68h] [rbp-19h] BYREF
  char *v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  char *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  char *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  char *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  int *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

  v2 = *a1;
  v3 = dword_140C3CCEC;
  if ( (unsigned int)v2 < 4 )
  {
    v4 = IndexToActionName[v2];
    if ( (unsigned int)v2 <= 1 )
    {
      v5 = *(_DWORD *)(a2 + 4);
      if ( v5 != PopBatteryTriggerCachedFlags[v2] )
      {
        PopBatteryTriggerCachedFlags[v2] = v5;
        if ( (unsigned int)dword_140C03928 > 5 )
        {
          tlgCreate1Sz_char((__int64)v17, v4);
          v11 = v6;
          v18 = &v11;
          v13 = v7;
          v20 = &v12;
          v19 = 1LL;
          v22 = &v13;
          v12 = v8;
          v24 = &v14;
          v21 = 1LL;
          v26 = &v15;
          v23 = 1LL;
          v14 = v9;
          v25 = 1LL;
          v15 = v3;
          v27 = 4LL;
          LODWORD(v2) = tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_140C03928,
                          (unsigned __int8 *)byte_14002E1FB,
                          0LL,
                          0LL,
                          8u,
                          &v16);
        }
      }
    }
  }
  return v2;
}
