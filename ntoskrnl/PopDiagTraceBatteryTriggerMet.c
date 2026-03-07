char __fastcall PopDiagTraceBatteryTriggerMet(__int64 a1, __int64 a2, int *a3)
{
  _UNKNOWN **v3; // rax
  int v4; // ebx
  int v5; // r9d
  unsigned int v6; // r10d
  int v7; // r11d
  int v8; // r14d
  int v9; // r8d
  int v10; // r13d
  int v11; // edi
  BOOL v12; // r15d
  bool v13; // zf
  BOOL v14; // r12d
  unsigned int v15; // esi
  REGHANDLE v16; // r14
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+44h] [rbp-C4h] BYREF
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  BOOL v31; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v32; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+7Ch] [rbp-8Ch] BYREF
  BOOL v39; // [rsp+80h] [rbp-88h] BYREF
  BOOL v40; // [rsp+84h] [rbp-84h] BYREF
  int v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v43; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  int *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  unsigned int *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  int *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  int *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  BOOL *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  BOOL *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  unsigned int *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  int *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  int *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+148h] [rbp+40h] BYREF
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  int *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  unsigned int *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  int *v72; // [rsp+198h] [rbp+90h]
  __int64 v73; // [rsp+1A0h] [rbp+98h]
  int *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  int *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  BOOL *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  BOOL *v80; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  int *v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  int *v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  int *v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  int *v88; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  _UNKNOWN *retaddr; // [rsp+260h] [rbp+158h] BYREF

  v3 = &retaddr;
  v4 = *a3;
  if ( (unsigned int)*a3 <= 1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4);
    v8 = *(_DWORD *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 20);
    v10 = dword_140C3CB54;
    v11 = unk_140C3CB80 & 1;
    v26 = dword_140C3CCEC;
    v12 = byte_140C3CC80 != 0;
    v27 = dword_140C3CB54;
    v22 = v5;
    v13 = *(_BYTE *)a2 == 0;
    v28 = v5;
    v14 = !v13;
    v29 = v4;
    LOBYTE(v3) = -45 * (dword_140C3CCEC - 12);
    v30 = v11;
    v31 = v12;
    v15 = (dword_140C3CCEC + 500) / 0x3E8u;
    v32 = v14;
    v23 = v6;
    v33 = v6;
    v24 = v7;
    v34 = v7;
    v25 = v8;
    v35 = v8;
    v21 = v9;
    v36 = v9;
    v37 = v15;
    if ( PopDiagHandleRegistered )
    {
      v16 = PopDiagHandle;
      LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_BATTERY_TRIGGER_MET);
      if ( (_BYTE)v3 )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v29;
        v46 = 4LL;
        v45 = &v27;
        v48 = 4LL;
        v47 = &v37;
        v50 = 4LL;
        v49 = &v30;
        v52 = 4LL;
        v51 = &v28;
        v53 = &v31;
        v55 = &v32;
        v57 = &v33;
        v59 = &v34;
        v61 = &v35;
        v63 = &v36;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 4LL;
        EtwWrite(v16, &POP_ETW_EVENT_BATTERY_TRIGGER_MET, 0LL, 0xBu, &UserData);
        LOBYTE(v3) = v36;
        v10 = v27;
        v4 = v29;
        v11 = v30;
        v12 = v31;
        v14 = v32;
        v8 = v35;
        v15 = v37;
        v21 = v36;
      }
      else
      {
        v8 = v25;
      }
    }
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v38 = v17;
        v66 = &v25;
        v25 = v4;
        v68 = &v24;
        v67 = 4LL;
        v70 = &v23;
        v72 = &v26;
        v74 = &v22;
        v76 = &v38;
        v78 = &v39;
        v80 = &v40;
        v82 = &v41;
        v84 = &v42;
        v86 = &v43;
        v88 = &v21;
        v24 = v10;
        v69 = 4LL;
        v23 = v15;
        v71 = 4LL;
        v73 = 4LL;
        v22 = v11;
        v75 = 4LL;
        v77 = 4LL;
        v39 = v12;
        v79 = 4LL;
        v40 = v14;
        v81 = 4LL;
        v41 = v18;
        v83 = 4LL;
        v42 = v19;
        v85 = 4LL;
        v43 = v8;
        v87 = 4LL;
        v89 = 4LL;
        LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C03928,
                       (unsigned __int8 *)byte_14002E470,
                       0LL,
                       0LL,
                       0xEu,
                       &v65);
      }
    }
  }
  return (char)v3;
}
