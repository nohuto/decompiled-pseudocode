char __fastcall PopDiagTraceCsResiliencyStats(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  __int64 v3; // rdi
  int *v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  int *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  __int64 *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  __int64 *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  int *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  int *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  int *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  __int64 *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  __int64 *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]
  __int64 *v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1F0h] [rbp+E8h]
  int *v65; // [rsp+1F8h] [rbp+F0h]
  __int64 v66; // [rsp+200h] [rbp+F8h]
  __int64 *v67; // [rsp+208h] [rbp+100h]
  __int64 v68; // [rsp+210h] [rbp+108h]
  __int64 *v69; // [rsp+218h] [rbp+110h]
  __int64 v70; // [rsp+220h] [rbp+118h]
  __int64 *v71; // [rsp+228h] [rbp+120h]
  __int64 v72; // [rsp+230h] [rbp+128h]
  __int64 *v73; // [rsp+238h] [rbp+130h]
  __int64 v74; // [rsp+240h] [rbp+138h]
  int *v75; // [rsp+248h] [rbp+140h]
  __int64 v76; // [rsp+250h] [rbp+148h]
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+168h] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 144);
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD *)(a1 + 128);
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v17 = PopWdiCurrentScenarioInstanceId;
      v31 = &v17;
      v8 = *v4;
      v33 = &v8;
      v9 = v4[8];
      v35 = &v9;
      v18 = *((_QWORD *)v4 + 6);
      v37 = &v18;
      v19 = (unsigned int)v4[10];
      v39 = &v19;
      v10 = v4[14];
      v41 = &v10;
      v11 = v4[15];
      v43 = &v11;
      v12 = v4[16];
      v45 = &v12;
      v13 = v4[17];
      v47 = &v13;
      v20 = *((_QWORD *)v4 + 1);
      v49 = &v20;
      v21 = *((_QWORD *)v4 + 3);
      v51 = &v21;
      v22 = *((_QWORD *)v4 + 2);
      v53 = &v22;
      v23 = *((_QWORD *)v4 + 9);
      v55 = &v23;
      v14 = v4[20];
      v57 = &v14;
      v59 = &v24;
      v25 = *((_QWORD *)v4 + 11);
      v61 = &v25;
      v26 = *((_QWORD *)v4 + 13);
      v32 = 8LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 4LL;
      v24 = v5;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 8LL;
      v63 = &v26;
      v15 = v6;
      v65 = &v15;
      v66 = 4LL;
      v67 = &v27;
      v28 = *((_QWORD *)v4 + 15);
      v69 = &v28;
      v29 = *((_QWORD *)v4 + 17);
      v71 = &v29;
      v73 = &v16;
      v75 = v4 + 38;
      v27 = v3;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      LODWORD(v16) = v2;
      v74 = 4LL;
      v76 = 88LL;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C03928,
                     (unsigned __int8 *)&byte_14002DB67,
                     0LL,
                     0LL,
                     0x19u,
                     &v30);
    }
  }
  return (char)v1;
}
