/*
 * XREFs of HvpLogInvalidLogHeader @ 0x140A2788C
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1407F9528 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

void HvpLogInvalidLogHeader()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int *v2; // r9
  char v3; // r10
  __int64 *v4; // r11
  int v5; // eax
  int v6; // r10d
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-A0h] BYREF
  char *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  int *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  int *v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+ACh] [rbp-54h]
  int *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  int *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  int *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  int *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  int *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]

  if ( (unsigned int)dword_140C04328 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v18 = &v7;
      v8 = *v2;
      v21 = &v8;
      v9 = v2[1];
      v24 = &v9;
      v10 = v2[2];
      v27 = &v10;
      v15 = *(_QWORD *)(v2 + 3);
      v30 = &v15;
      v16 = *v4;
      v33 = &v16;
      v11 = v2[7];
      v36 = &v11;
      v12 = v2[10];
      v39 = &v12;
      v13 = v2[127];
      v7 = v3;
      v42 = &v13;
      v19 = 1;
      v22 = v0 - 4;
      v25 = v0 - 4;
      v28 = v0 - 4;
      v31 = v0;
      v34 = v0;
      v37 = v0 - 4;
      v40 = v0 - 4;
      v43 = v0 - 4;
      v5 = HvpHeaderCheckSum(v2, v0, v1);
      v47 = 0;
      v14 = v5;
      v46 = v6;
      v45 = &v14;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04328,
        (unsigned __int8 *)byte_140037C1D,
        0LL,
        0LL,
        0xCu,
        &v17);
    }
  }
}
