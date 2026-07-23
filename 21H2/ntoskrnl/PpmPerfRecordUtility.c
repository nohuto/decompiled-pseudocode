/*
 * XREFs of PpmPerfRecordUtility @ 0x140206590
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140206490 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     PpmPerfResetHistory @ 0x1403C2848 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r10
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  int v12; // r15d
  int v13; // r8d
  int v14; // r13d
  int v15; // esi
  unsigned int v16; // r13d
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  const EVENT_DESCRIPTOR *v19; // r11
  REGHANDLE v20; // r10
  __int64 v21; // rcx
  unsigned __int64 Keyword; // r8
  unsigned __int8 v23; // al
  unsigned int *v24; // r11
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  char v29; // cl
  unsigned __int64 v30; // rax
  unsigned int v31; // r10d
  __int64 v32; // r9
  char *v33; // r8
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r9d
  __int16 v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 *v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  __int64 *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  unsigned __int8 **v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  __int64 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  int *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  __int16 *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  __int64 v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]

  v1 = *(__int64 **)(a1 + 16);
  v3 = *(unsigned __int8 **)(a1 + 24);
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(_QWORD *)(a1 + 8);
  v42 = v3;
  if ( v1 )
  {
    v6 = *v1;
    v7 = v1[5] - *v1;
    v8 = v1[2];
    v9 = v1[1];
    v10 = v1[4] - v9;
    v11 = v1[6] - v8;
    v12 = *((_DWORD *)v1 + 30) - *((_DWORD *)v1 + 6);
    if ( PpmCheckMakeupCount )
    {
      v30 = v10 / (unsigned int)(PpmCheckMakeupCount + 1);
      v3 = v42;
      v10 = v30;
      if ( v7 < v30 )
        v30 = v1[5] - *v1;
      v7 = v30;
      if ( v11 >= v10 )
        v11 = v10;
    }
    v1[1] = v9 + v10;
    *v1 = v6 + v7;
    v1[2] = v11 + v8;
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 30);
    if ( v7 > v10 )
      v7 = v10;
    if ( v11 > v10 )
      v11 = v10;
    if ( v10 <= 1 )
      v10 = 1LL;
    if ( v3 )
    {
      result = *v3;
      *(_DWORD *)(a1 + 40) = *v3 * v3[1];
    }
    else
    {
      v13 = *(unsigned __int16 *)(a1 + 52);
      if ( v5 )
      {
        v14 = *(_DWORD *)(v5 + 116);
        v15 = *(_DWORD *)(v5 + 120);
      }
      else
      {
        v14 = 100;
        v15 = 100;
      }
      LODWORD(v43) = v14;
      v16 = 0;
      LOBYTE(v38) = 100;
      LODWORD(v42) = v15;
      v46 = v11;
      v45 = v7;
      v40 = 0;
      v17 = v7 * (unsigned int)(100 * v15) / v10;
      LOWORD(v41) = v17;
      v18 = v7 * (unsigned int)(v13 * v15) / v10;
      v44 = v10 - v7;
      LOWORD(v39) = v18;
      if ( *(_BYTE *)(a1 + 60) )
      {
        v19 = &PPM_ETW_RECORDED_UTILITY;
        LOWORD(v40) = *(unsigned __int8 *)(a1 - 32920);
        BYTE2(v40) = *(_BYTE *)(a1 - 32919);
        v55 = 3LL;
      }
      else
      {
        v19 = (const EVENT_DESCRIPTOR *)PPM_ETW_RECORDED_UTILITY_HV;
        v40 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
        v55 = 4LL;
      }
      v54 = &v40;
      if ( PpmEtwRegistered )
      {
        v20 = PpmEtwHandle;
        if ( PpmEtwHandle )
        {
          if ( (v21 = *(_QWORD *)(PpmEtwHandle + 32), Keyword = v19->Keyword, *(_DWORD *)(v21 + 96))
            && ((v23 = *(_BYTE *)(v21 + 100), v19->Level <= v23) || !v23)
            && ((*(_DWORD *)(v21 + 104) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v21 + 112)) != 0 && (*(_QWORD *)(v21 + 120) & Keyword) == *(_QWORD *)(v21 + 120))
            || *(_BYTE *)(PpmEtwHandle + 101)
            && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, v19->Level, Keyword) )
          {
            *(_QWORD *)&UserData.Size = 8LL;
            UserData.Ptr = (ULONGLONG)&PpmCheckTime;
            v49 = 8LL;
            v48 = &v44;
            v51 = 8LL;
            v50 = &v45;
            v53 = 4LL;
            v52 = &v43;
            v57 = 4LL;
            v56 = &v42;
            v58 = &v41;
            v60 = &v39;
            v62 = &v38;
            v64 = (__int64)v1 + 329;
            v66 = &v46;
            v59 = 2LL;
            v61 = 2LL;
            v63 = 1LL;
            v65 = 1LL;
            v67 = 8LL;
            EtwWriteEx(v20, v19, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
          }
        }
      }
      v24 = *(unsigned int **)(a1 + 32);
      if ( v24 )
      {
        v31 = *v24;
        v32 = v24[1];
        v33 = (char *)v24 + 10 * v32;
        v24[2] += (unsigned __int16)v17 - *((unsigned __int16 *)v33 + 16);
        v34 = *((unsigned __int16 *)v33 + 17);
        *((_WORD *)v33 + 16) = v17;
        v24[3] += (unsigned __int16)v18 - v34;
        v35 = *((unsigned __int16 *)v33 + 18);
        *((_WORD *)v33 + 17) = v18;
        v24[4] += (unsigned __int16)v15 - v35;
        *((_WORD *)v33 + 18) = v15;
        v24[5] -= (unsigned __int8)v33[38];
        v24[5] += *((unsigned __int8 *)v1 + 328);
        v33[38] = *((_BYTE *)v1 + 328);
        v24[6] -= (unsigned __int8)v33[39];
        v24[6] += *((unsigned __int8 *)v1 + 329);
        v33[39] = *((_BYTE *)v1 + 329);
        v24[7] -= (unsigned __int8)v33[40];
        v24[7] += *((unsigned __int8 *)v1 + 330);
        v33[40] = *((_BYTE *)v1 + 330);
        if ( (_DWORD)v32 + 1 != v31 )
          v16 = v32 + 1;
        v36 = v24[2];
        v24[1] = v16;
        LODWORD(v17) = v36 / v31;
        LODWORD(v18) = v24[3] / v31;
        v15 = v24[4] / v31;
        v25 = v24[6] / v31;
      }
      else
      {
        LOWORD(v39) = *((_WORD *)v1 + 164);
        LOBYTE(v25) = BYTE1(v39);
      }
      if ( (unsigned __int8)v25 >= 0x64u )
        LOBYTE(v25) = 100;
      v26 = (unsigned __int8)v25;
      v27 = v17 * (unsigned __int8)v25;
      result = 1374389535 * v27;
      v28 = v27 / 0x64;
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v37 = v18 * v26;
        LODWORD(v17) = v17 - v28;
        v29 = 1;
        result = 1374389535 * v37;
        LODWORD(v18) = v18 - v37 / 0x64;
      }
      else
      {
        v29 = 0;
      }
      *(_DWORD *)(a1 + 40) = v17;
      *(_DWORD *)(a1 + 44) = v18;
      *(_DWORD *)(a1 + 48) = v28;
      *(_WORD *)(a1 + 54) = v15;
      *((_DWORD *)v1 + 84) = v12;
      if ( v29 )
        return PpmPerfResetHistory(a1);
    }
  }
  return result;
}
