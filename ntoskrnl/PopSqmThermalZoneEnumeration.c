char __fastcall PopSqmThermalZoneEnumeration(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rax
  __int64 v14; // r9
  int v15; // r11d
  const size_t *v16; // r10
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  int *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  int *v51; // [rsp+100h] [rbp+0h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  int *v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v57[16]; // [rsp+120h] [rbp+20h] BYREF
  int *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+13Ch] [rbp+3Ch]

  v12 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( (_BYTE)v12 )
    {
      tlgCreate1Sz_wchar_t((__int64)v29, *(const size_t **)(v14 + 8));
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v56 = 0;
      v30 = &v18;
      v19 = a8;
      v33 = &v19;
      v20 = a9;
      v36 = &v20;
      v39 = &v21;
      v22 = a11;
      v42 = &v22;
      v23 = a10;
      v45 = &v23;
      v24 = a6;
      v48 = &v24;
      v51 = &v25;
      v26 = a5;
      v18 = a7;
      v54 = &v26;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      v21 = a3;
      v40 = 4;
      v43 = 4;
      v46 = 4;
      v49 = 4;
      v25 = v15;
      v52 = 4;
      v55 = 4;
      tlgCreate1Sz_wchar_t((__int64)v57, v16);
      v60 = 0;
      v58 = &v27;
      v27 = a12;
      v59 = 4;
      LOBYTE(v12) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C03928,
                      (unsigned __int8 *)byte_140032438,
                      0LL,
                      0LL,
                      0xEu,
                      &v28);
    }
  }
  return v12;
}
