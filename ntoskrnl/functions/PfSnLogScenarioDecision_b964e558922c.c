char __fastcall PfSnLogScenarioDecision(
        ULONG_PTR BugCheckParameter1,
        const size_t *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi
  char v12; // r15
  char v13; // r12
  int ProcessTelemetryInfo; // eax
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  char v22; // [rsp+33h] [rbp-CDh] BYREF
  char v23; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD Address[12]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  const size_t *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  char *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int16 *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  char *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  char *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+160h] [rbp+60h] BYREF
  __int128 *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  char v54[16]; // [rsp+190h] [rbp+90h] BYREF
  char *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  char *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  char *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  int *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  __int64 *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  __int64 *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  int v69; // [rsp+280h] [rbp+180h] BYREF

  v69 = a3;
  v8 = a8;
  memset(Address, 0, sizeof(Address));
  v12 = a6;
  v13 = a5;
  v24 = 0;
  v25 = 0;
  v19 = 0;
  v20 = 0;
  v26 = 0;
  if ( qword_140C6A388 && EtwEventEnabled(qword_140C6A388, &PfSnEvt_ScenarioDecision_Info) )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)a2 + v16) );
    v24 = v16;
    UserData.Ptr = (ULONGLONG)&v24;
    v35 = 2 * (unsigned __int16)v16;
    v37 = (char *)a2 + 60;
    v39 = &v69;
    v41 = &v25;
    v43 = &v19;
    v45 = &v20;
    v47 = &a7;
    *(_QWORD *)&UserData.Size = 2LL;
    v34 = a2;
    v36 = 0;
    v38 = 4LL;
    v40 = 4LL;
    v25 = a4;
    v42 = 2LL;
    v19 = v13;
    v44 = 1LL;
    v20 = v12;
    v46 = 1LL;
    v48 = 4LL;
    if ( v8 >= 0 )
      v17 = v8 / 0x989680uLL;
    else
      LODWORD(v17) = -(v8 != -1) - 1;
    v49 = &v26;
    v26 = v17;
    v50 = 4LL;
    EtwWrite(qword_140C6A388, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
  }
  ProcessTelemetryInfo = EtwQueryProcessTelemetryInfo(BugCheckParameter1, Address, 0x60uLL, 0LL);
  v31 = 0LL;
  if ( ProcessTelemetryInfo == -2147483643 )
    ProcessTelemetryInfo = 0;
  if ( ProcessTelemetryInfo >= 0 )
  {
    LODWORD(v31) = HIDWORD(Address[0]);
    WORD2(v31) = Address[7];
    WORD3(v31) = WORD2(Address[7]);
    LOBYTE(ProcessTelemetryInfo) = Address[2];
    *((_QWORD *)&v31 + 1) = Address[2];
  }
  if ( (unsigned int)dword_140C02FD0 > 4 )
  {
    LOBYTE(ProcessTelemetryInfo) = tlgKeywordOn((__int64)&dword_140C02FD0, 0x400000000000LL);
    if ( (_BYTE)ProcessTelemetryInfo )
    {
      v53 = 16LL;
      v52 = &v31;
      tlgCreate1Sz_wchar_t((__int64)v54, a2);
      v55 = &v21;
      v21 = v69;
      v57 = &v27;
      v56 = 1LL;
      v59 = &v22;
      v27 = a4;
      v61 = &v23;
      v28 = a7;
      v63 = &v28;
      v65 = &v29;
      v67 = &v30;
      v58 = v15;
      v22 = v12;
      v60 = 1LL;
      v23 = v13;
      v62 = 1LL;
      v64 = v15;
      v29 = v8;
      v66 = 8LL;
      v30 = 0x1000000LL;
      v68 = 8LL;
      LOBYTE(ProcessTelemetryInfo) = tlgWriteTransfer_EtwWriteTransfer(
                                       (__int64)&dword_140C02FD0,
                                       (unsigned __int8 *)byte_14002D5DF,
                                       0LL,
                                       0LL,
                                       0xBu,
                                       &v51);
    }
  }
  return ProcessTelemetryInfo;
}
