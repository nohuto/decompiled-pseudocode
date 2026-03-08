/*
 * XREFs of PopEvaluateWeakChargerState @ 0x140992D90
 * Callers:
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopEvaluateWeakChargerState(char a1)
{
  char v2; // r8
  int v3; // r11d
  int updated; // edi
  unsigned __int8 v5; // dl
  char v6; // bl
  char v7; // r9
  unsigned __int8 v8; // [rsp+48h] [rbp-C0h] BYREF
  char v9; // [rsp+49h] [rbp-BFh] BYREF
  char v10; // [rsp+4Ah] [rbp-BEh] BYREF
  char v11; // [rsp+4Bh] [rbp-BDh] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-A0h] BYREF
  char *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  int *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  char *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  char *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopWeakChargerLock);
  v2 = -1;
  if ( PopWeakChargerNotificationUsbStack == -1 )
  {
    if ( PopWeakChargerNotificationBatteryMiniport != -1 )
    {
      v3 = 1;
      goto LABEL_9;
    }
    v3 = 0;
  }
  else if ( PopWeakChargerNotificationBatteryMiniport == -1 )
  {
    v3 = 2;
  }
  else
  {
    v3 = 3;
  }
  v2 = PopWeakChargerNotificationUsbStack;
LABEL_9:
  updated = 0;
  v5 = 0;
  v8 = 0;
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v8 = v2;
      v5 = v2;
      goto LABEL_16;
    }
    if ( v3 != 3 )
      goto LABEL_16;
  }
  if ( PopWeakChargerNotificationBatteryMiniport == 1 )
  {
    v8 = 1;
    v5 = 1;
  }
  if ( v3 == 3 )
  {
    v8 = PopWeakChargerNotificationUsbStack & v5;
    v5 &= PopWeakChargerNotificationUsbStack;
  }
LABEL_16:
  if ( !a1 )
  {
    v8 = 0;
    v5 = 0;
  }
  if ( PopWeakChargerCompositeState == v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_RECONCILED_WEAK_CHARGER, (__int64)&v8);
    PopWeakChargerCompositeState = v8;
  }
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v18 = &v9;
    v13 = PopWeakChargerNotificationBatteryMiniport;
    v21 = &v13;
    v14 = PopWeakChargerNotificationUsbStack;
    v24 = &v14;
    v10 = PopWeakChargerMeasured;
    v27 = &v10;
    v30 = &v11;
    v33 = &v12;
    v36 = &v15;
    v39 = &v16;
    v9 = v7;
    v22 = 4;
    v25 = 4;
    v37 = 4;
    v19 = 1;
    v28 = 1;
    v11 = a1;
    v31 = 1;
    LOBYTE(v12) = v6;
    v34 = 1;
    LODWORD(v15) = updated;
    v16 = 0x1000000LL;
    v40 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03928,
      (unsigned __int8 *)byte_1400309A8,
      0LL,
      0LL,
      0xAu,
      &v17);
  }
  PopReleaseRwLock((ULONG_PTR)&PopWeakChargerLock);
}
