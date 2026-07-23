/*
 * XREFs of PopTracePowerReconfig @ 0x1405738F4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PopTracePowerReconfig()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]

  v10[0] = MEMORY[0xFFFFF78000000014];
  v10[1] = MEMORY[0xFFFFF78000000018];
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v5 = v0;
      v12 = v10;
      v2 = dword_140C23C54;
      v13 = 8LL;
      v14 = &v2;
      v3 = xmmword_140C23CA4;
      v16 = &v3;
      v18 = &v4;
      v20 = &v5;
      v6 = (unsigned __int8)byte_140C23DDC;
      v22 = &v6;
      v7 = (unsigned __int8)byte_140C23DC8;
      v24 = &v7;
      v8 = (unsigned __int8)byte_140C23DE4;
      v26 = &v8;
      v9 = dword_140C23DE0;
      v28 = &v9;
      v15 = 4LL;
      v17 = 4LL;
      v4 = v1;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)&word_1400281DE,
        0LL,
        0LL,
        0xBu,
        &v11);
    }
  }
}
