/*
 * XREFs of PnpTraceDeviceRemovalForResetComplete @ 0x140968B34
 * Callers:
 *     IopLogDeviceResetComplete @ 0x140954464 (IopLogDeviceResetComplete.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PnpTraceDeviceRemovalForResetComplete()
{
  __int64 v0; // rdx
  unsigned int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  _DWORD *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-70h]
  _DWORD v16[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  _DWORD v20[2]; // [rsp+B8h] [rbp-48h] BYREF
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  _DWORD *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int16 *v33; // [rsp+120h] [rbp+20h]
  _DWORD v34[2]; // [rsp+128h] [rbp+28h] BYREF

  if ( dword_140C038F0 && tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) && v1 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, v0) )
    {
      v8 = 0x1000000LL;
      v11 = &v8;
      v12 = 8LL;
      v13 = v16;
      v15 = *(_QWORD *)(v2 + 48);
      v16[0] = *(unsigned __int16 *)(v2 + 40);
      v17 = v20;
      v19 = *(_QWORD *)(v2 + 64);
      v20[0] = *(unsigned __int16 *)(v2 + 56);
      v4 = *(_DWORD *)(v2 + 300);
      v21 = &v4;
      v23 = &v5;
      v25 = &v6;
      v27 = &v9;
      v29 = &v7;
      v31 = v34;
      v33 = off_140C090C0;
      v34[0] = (unsigned __int16)PnpEmptyUnicodeString;
      v14 = 2LL;
      v16[1] = 0;
      v18 = 2LL;
      v20[1] = 0;
      v22 = 4LL;
      v5 = v3;
      v24 = 4LL;
      v6 = 0;
      v26 = 4LL;
      v9 = 0LL;
      v28 = 8LL;
      v7 = 0;
      v30 = 4LL;
      v32 = 2LL;
      v34[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038F0,
        (unsigned __int8 *)byte_14002C949,
        0LL,
        0LL,
        0xEu,
        &v10);
    }
  }
}
