char __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v2; // ebx
  REGHANDLE v4; // r15
  __int64 v5; // rsi
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  int v8; // eax
  char v9; // al
  _DWORD *v10; // rcx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  BOOL v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+74h] [rbp-94h] BYREF
  int v28; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v30; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  unsigned int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  int *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  int *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  __int64 v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  BOOL *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  __int64 v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  v1 = &retaddr;
  v2 = 0;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v5 = *(_QWORD *)(a1 + 33968);
      v6 = *(_DWORD **)(a1 + 33976);
      v27 = *(unsigned __int8 *)(a1 + 34060);
      v28 = *(_DWORD *)(a1 + 34116);
      if ( v5 )
      {
        v7 = *(_DWORD *)(v5 + 440);
        v17 = v7;
        v22 = *(_BYTE *)(v5 + 508) != 0;
        v8 = *(unsigned __int8 *)(v5 + 480);
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 68);
        v8 = 100;
        v17 = v7;
        v22 = 0;
      }
      v29 = v8;
      if ( v6 )
      {
        v14 = v6[6];
        v15 = v6[7];
        v16 = v6[18];
        v18 = v6[20];
        v19 = v6[21];
        v20 = v6[22];
        v23 = v6[23];
        v24 = v6[24];
        v25 = v6[19];
        v21 = v6[30];
        v7 = v6[29] * v7 / 0x64;
      }
      else
      {
        v14 = 100;
        v15 = 100;
        v16 = 100;
        v18 = 100;
        v19 = 100;
        v20 = 100;
        v23 = 0;
        v24 = 0;
        v25 = v7;
        v21 = 100;
      }
      LOWORD(v13) = *(unsigned __int8 *)(a1 + 208);
      v26 = v7;
      v9 = KeHeteroSystem ? *(_BYTE *)(a1 + 34056) : *(_BYTE *)(a1 + 34059);
      LOBYTE(v12) = v9;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v13;
      v33 = 1LL;
      v32 = a1 + 209;
      v35 = 4LL;
      v34 = &v27;
      v37 = 4LL;
      v36 = &v14;
      v38 = &v15;
      v40 = &v16;
      v42 = &v17;
      v44 = &v18;
      v46 = &v19;
      v48 = &v20;
      v50 = &v21;
      v52 = &v12;
      v54 = a1 + 34057;
      v56 = &v22;
      v58 = &v23;
      v60 = &v24;
      v62 = &v28;
      v64 = &v29;
      v66 = a1 + 34058;
      v68 = &v25;
      v30 = *(unsigned __int8 *)(a1 + 33659);
      v70 = &v30;
      v72 = &v26;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 1LL;
      v55 = 1LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 1LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      LOBYTE(v1) = EtwWrite(v4, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x16u, &UserData);
      if ( v5 )
      {
        if ( *(_QWORD *)(v5 + 16) == a1 + 33968 && *(_DWORD *)(v5 + 296) )
        {
          do
          {
            LOBYTE(v1) = v2;
            v10 = (_DWORD *)(*(_QWORD *)(v5 + 312) + 144LL * v2);
            if ( v10[4] == 2 )
              LOBYTE(v1) = PpmEventHiddenProcessorPerformance(a1, v10[5], v10[6], v10[7]);
            ++v2;
          }
          while ( v2 < *(_DWORD *)(v5 + 296) );
        }
      }
    }
  }
  return (char)v1;
}
