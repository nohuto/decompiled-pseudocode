char __fastcall PopDiagTraceSleepStudyStop(__int64 a1)
{
  _UNKNOWN **v1; // rax
  REGHANDLE v2; // rbx
  int v4; // [rsp+38h] [rbp-D0h] BYREF
  int v5; // [rsp+3Ch] [rbp-CCh] BYREF
  int v6; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  int v8; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+4Ch] [rbp-BCh] BYREF
  int v10; // [rsp+50h] [rbp-B8h] BYREF
  int v11; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  void *v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  int *v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  void *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  void *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  void *v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  void *v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  void *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  void *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  void *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  void *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  void *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  void *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  int *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  int *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  void *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]
  int *v43; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+58h]
  void *v45; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]
  void *v47; // [rsp+178h] [rbp+70h]
  __int64 v48; // [rsp+180h] [rbp+78h]
  void *v49; // [rsp+188h] [rbp+80h]
  __int64 v50; // [rsp+190h] [rbp+88h]
  void *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  void *v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h]
  void *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  void *v57; // [rsp+1C8h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+C8h]
  void *v59; // [rsp+1D8h] [rbp+D0h]
  __int64 v60; // [rsp+1E0h] [rbp+D8h]
  int *v61; // [rsp+1E8h] [rbp+E0h]
  __int64 v62; // [rsp+1F0h] [rbp+E8h]
  void *v63; // [rsp+1F8h] [rbp+F0h]
  __int64 v64; // [rsp+200h] [rbp+F8h]
  void *v65; // [rsp+208h] [rbp+100h]
  __int64 v66; // [rsp+210h] [rbp+108h]
  int *v67; // [rsp+218h] [rbp+110h]
  __int64 v68; // [rsp+220h] [rbp+118h]
  int *v69; // [rsp+228h] [rbp+120h]
  __int64 v70; // [rsp+230h] [rbp+128h]
  __int64 *v71; // [rsp+238h] [rbp+130h]
  __int64 v72; // [rsp+240h] [rbp+138h]
  void *v73; // [rsp+248h] [rbp+140h]
  __int64 v74; // [rsp+250h] [rbp+148h]
  void *v75; // [rsp+258h] [rbp+150h]
  __int64 v76; // [rsp+260h] [rbp+158h]
  int *v77; // [rsp+268h] [rbp+160h]
  __int64 v78; // [rsp+270h] [rbp+168h]
  _UNKNOWN *retaddr; // [rsp+290h] [rbp+188h] BYREF
  __int64 v80; // [rsp+298h] [rbp+190h] BYREF

  v1 = &retaddr;
  v80 = a1;
  if ( PopDiagSleepStudyHandleRegistered )
  {
    v2 = PopDiagSleepStudyHandle;
    LOBYTE(v1) = EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_STOP_REASON);
    if ( (_BYTE)v1 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v4 = byte_140C3BEBC & 1;
      v14 = 8LL;
      v6 = byte_140C3BEBD & 1;
      v5 = ((unsigned __int8)byte_140C3BEBD >> 1) & 1;
      v10 = (unsigned __int8)byte_140C3BF15;
      v8 = (unsigned __int8)byte_140C3BF14;
      v9 = (unsigned __int8)byte_140C3BEEC;
      v11 = dword_140C3BE78;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v13 = &unk_140C3BE68;
      v15 = &v4;
      v17 = &unk_140C3BEC0;
      v19 = &unk_140C3BEC8;
      v21 = &unk_140C3BED0;
      v23 = &unk_140C3BE60;
      v25 = &unk_140C3BE5C;
      v27 = &unk_140C3BEA0;
      v29 = &unk_140C3BEE0;
      v31 = &unk_140C3BE58;
      v33 = &unk_140C3BE98;
      v35 = &unk_140C3BEB8;
      v37 = &v5;
      v39 = &v6;
      v41 = &unk_140C3BEA8;
      v43 = &v7;
      v45 = &unk_140C3BEE4;
      v47 = &unk_140C3BEE8;
      v7 = ((unsigned __int8)byte_140C3BEBD >> 2) & 1;
      v16 = 4LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 4LL;
      v28 = 8LL;
      v30 = 1LL;
      v32 = 4LL;
      v34 = 8LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v49 = &unk_140C3BEF0;
      v50 = 4LL;
      v51 = &unk_140C3BEFC;
      v52 = 4LL;
      v53 = &unk_140C3BF00;
      v54 = 4LL;
      v55 = &unk_140C3BE48;
      v56 = 4LL;
      v57 = &unk_140C3BE50;
      v59 = &unk_140C3BF10;
      v61 = &v8;
      v63 = &unk_140C3BF18;
      v65 = &unk_140C3BF1C;
      v67 = &v9;
      v69 = &v10;
      v71 = &v80;
      v73 = &unk_140C3BEF4;
      v75 = &unk_140C3BEF8;
      v77 = &v11;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 8LL;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      LOBYTE(v1) = EtwWrite(v2, &SLEEPSTUDY_EVT_SCENARIO_STOP_REASON, &PopDiagActivityId, 0x22u, &UserData);
    }
  }
  return (char)v1;
}
