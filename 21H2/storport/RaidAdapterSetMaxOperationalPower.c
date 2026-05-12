/*
 * XREFs of RaidAdapterSetMaxOperationalPower @ 0x1C003EDD4
 * Callers:
 *     RaidAdapterPowerCapIoctl @ 0x1C002D67C (RaidAdapterPowerCapIoctl.c)
 *     RaidPowerSettingCallback @ 0x1C00328A0 (RaidPowerSettingCallback.c)
 *     RaidAdapterPassiveCoolingCallback @ 0x1C003EAB0 (RaidAdapterPassiveCoolingCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidAdapterEffectiveMaxOperationalPower @ 0x1C003EA84 (RaidAdapterEffectiveMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterSetMaxOperationalPower(__int64 a1, unsigned __int64 *a2, char a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // r13d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  int v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v34; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  unsigned int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]

  v4 = *(_QWORD **)(a1 + 5088);
  v6 = *a2;
  v8 = (int)a4;
  v22 = a4;
  if ( a4 > 2 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 14) )
    return 3221225659LL;
  if ( !v4 )
    return 3221225659LL;
  v10 = v4[4];
  if ( !v10 )
    return 3221225659LL;
  v11 = 100LL;
  if ( a3 )
  {
    if ( *a2 <= 0x64 )
    {
      v12 = v4[5];
      if ( v10 > v12 )
      {
        v6 = v12 + (v10 - v12) * v6 / 0x64;
        goto LABEL_11;
      }
      if ( *a2 >= 0x64 )
      {
        v6 = v4[4];
        goto LABEL_11;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
LABEL_11:
  v24 = v4[v8 + 6];
  v13 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v4[v8 + 6] = v6;
  v25 = v13;
  v32 = 1;
  v33 = 16;
  v26 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v34 = v26;
  v15 = RaCallMiniportAdapterControl(a1 + 320);
  if ( v15 >= 0 )
  {
    if ( a3 )
    {
      v14 = v4[4];
      v16 = v4[5];
      if ( v14 > v16 && v34 >= v16 && v34 <= v14 )
      {
        v14 -= v16;
        v11 = 100 * (v34 - v16) / v14;
      }
      *a2 = v11;
    }
    else
    {
      *a2 = v34;
    }
  }
  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    if ( tlgKeywordOn(v14, 0x400000000000LL) )
    {
      v37 = 16LL;
      v36 = a1 + 5192;
      v23 = *(_DWORD *)(a1 + 56);
      v38 = &v23;
      v21 = v22;
      v40 = &v21;
      v42 = &v24;
      v44 = &v27;
      v28 = v4[6];
      v46 = &v28;
      v29 = v4[7];
      v48 = &v29;
      v30 = v4[8];
      v50 = &v30;
      v52 = &v22;
      v54 = &v25;
      v56 = &v26;
      v58 = &v31;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 8LL;
      v27 = v6;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 8LL;
      v22 = v15;
      v53 = 4LL;
      v55 = 8LL;
      v57 = 8LL;
      v31 = v19;
      v59 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(v17, (unsigned __int8 *)dword_1C005D767, v18, v19, 0xEu, &v35);
    }
  }
  return (unsigned int)v15;
}
