/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x1408F3920
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x1408F2D18 (PpmEventHiddenProcessorPerformance.c)
 */

void __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  unsigned int v1; // ebx
  REGHANDLE v3; // r14
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  unsigned int v6; // edx
  int v7; // eax
  _DWORD *v8; // rcx
  __int16 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+6Ch] [rbp-94h] BYREF
  int v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  unsigned int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  BOOL *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  int *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  __int64 v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  int *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v68; // [rsp+1D0h] [rbp+D0h]
  __int64 v69; // [rsp+1D8h] [rbp+D8h]

  v1 = 0;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN) )
    {
      v4 = *(_QWORD *)(a1 + 33128);
      v5 = *(_DWORD **)(a1 + 33136);
      v23 = *(unsigned __int8 *)(a1 + 33212);
      v24 = *(_DWORD *)(a1 + 33268);
      if ( v4 )
      {
        v6 = *(_DWORD *)(v4 + 316);
        v13 = v6;
        v18 = *(_BYTE *)(v4 + 359) != 0;
        v7 = *(unsigned __int8 *)(v4 + 352);
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 68);
        v7 = 100;
        v13 = v6;
        v18 = 0;
      }
      v25 = v7;
      if ( v5 )
      {
        v10 = v5[6];
        v11 = v5[7];
        v12 = v5[18];
        v14 = v5[20];
        v15 = v5[21];
        v16 = v5[22];
        v19 = v5[23];
        v20 = v5[24];
        v21 = v5[19];
        v17 = v5[30];
        v6 = v6 * v5[29] / 0x64;
      }
      else
      {
        v10 = 100;
        v11 = 100;
        v12 = 100;
        v14 = 100;
        v15 = 100;
        v16 = 100;
        v19 = 0;
        v20 = 0;
        v21 = v6;
        v17 = 100;
      }
      v9 = *(unsigned __int8 *)(a1 + 208);
      v22 = v6;
      UserData.Ptr = (ULONGLONG)&v9;
      *(_QWORD *)&UserData.Size = 2LL;
      v28 = a1 + 209;
      v29 = 1LL;
      v30 = &v23;
      v32 = &v10;
      v34 = &v11;
      v36 = &v12;
      v38 = &v13;
      v40 = &v14;
      v42 = &v15;
      v44 = &v16;
      v46 = &v17;
      v48 = a1 + 33208;
      v50 = a1 + 33209;
      v52 = &v18;
      v54 = &v19;
      v56 = &v20;
      v58 = &v24;
      v60 = &v25;
      v62 = a1 + 33210;
      v64 = &v21;
      v26 = *(unsigned __int8 *)(a1 + 32819);
      v66 = &v26;
      v68 = &v22;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 1LL;
      v51 = 1LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 1LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      EtwWrite(v3, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x16u, &UserData);
      if ( v4 )
      {
        if ( *(_QWORD *)(v4 + 16) == a1 + 33128 && *(_DWORD *)(v4 + 200) )
        {
          do
          {
            v8 = (_DWORD *)(*(_QWORD *)(v4 + 216) + 136LL * v1);
            if ( v8[4] == 2 )
              PpmEventHiddenProcessorPerformance(a1, v8[5], v8[6], v8[7]);
            ++v1;
          }
          while ( v1 < *(_DWORD *)(v4 + 200) );
        }
      }
    }
  }
}
