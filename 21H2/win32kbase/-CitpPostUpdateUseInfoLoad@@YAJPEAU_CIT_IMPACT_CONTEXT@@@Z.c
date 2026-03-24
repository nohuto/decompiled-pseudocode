/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008CAD0
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C008B7DC (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C008BB2C (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FD3F4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00463BC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0048838 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C008D854 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C008DC0C (-Citp100NSToMS@@YAI_K@Z.c)
 *     ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C008F4C4 (-CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C008F550 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v1; // r14d
  char *v2; // rsi
  __int64 result; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r15
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  ULONG v14; // eax
  unsigned __int8 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int128 v28; // xmm0
  int v29; // r14d
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  int v42; // r8d
  int v43; // r8d
  int v44; // r8d
  int v45; // r8d
  int v46; // r8d
  int v47; // r8d
  unsigned int v48; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-95h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-91h] BYREF
  void *DestinationString; // [rsp+48h] [rbp-89h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-81h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-61h]
  unsigned __int16 v55[66]; // [rsp+74h] [rbp-5Dh] BYREF

  v1 = 0;
  v2 = (char *)a1 + 336;
  DestinationString = 0LL;
  v48 = 0;
  v49 = 0;
  DestinationString_8 = 0LL;
  memset((char *)a1 + 336, 0, 0x78uLL);
  *((_DWORD *)a1 + 145) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v48);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoGetBuildNumber(&v49);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoOpenKey(a1, &DestinationString);
  if ( (int)result < 0 )
    return result;
  memset(v55, 0, 0x78uLL);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"PUUActive");
  ResultLength[0] = 132;
  if ( ZwQueryValueKey(
         DestinationString,
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x84u,
         ResultLength) >= 0 )
  {
    if ( v54 == 120 )
    {
      if ( v55[12] == 210 && *(_DWORD *)v55 == v48 )
      {
        v8 = *(_OWORD *)&v55[8];
        *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)v55;
        v9 = *(_OWORD *)&v55[16];
        *(_OWORD *)((char *)a1 + 472) = v8;
        v10 = *(_OWORD *)&v55[24];
        *(_OWORD *)((char *)a1 + 488) = v9;
        v11 = *(_OWORD *)&v55[32];
        *(_OWORD *)((char *)a1 + 504) = v10;
        v12 = *(_OWORD *)&v55[40];
        *(_OWORD *)((char *)a1 + 520) = v11;
        v13 = *(_OWORD *)&v55[48];
        *(_OWORD *)((char *)a1 + 536) = v12;
        *(_QWORD *)&v12 = *(_QWORD *)&v55[56];
        *(_OWORD *)((char *)a1 + 552) = v13;
        *((_QWORD *)a1 + 71) = v12;
        goto LABEL_9;
      }
      v5 = v55[2];
      if ( *(_DWORD *)&v55[52] == v49 )
        v1 = *(_DWORD *)&v55[50];
      v7 = *(_QWORD *)&v55[44];
      v6 = v55[48];
    }
    else
    {
      if ( v54 >= 0x18 )
        v5 = v55[2];
      if ( v54 >= 0x1A )
      {
        if ( v55[12] >= 0xD1u )
        {
          v7 = *(_QWORD *)&v55[44];
          v6 = v55[48];
        }
        if ( v55[12] >= 0xD2u )
          v1 = *(_DWORD *)&v55[50];
      }
    }
  }
  memset(v55, 0, 0x78uLL);
  *(_DWORD *)&v55[52] = v49;
  v55[12] = 210;
  v55[2] = v5;
  *(_QWORD *)&v55[44] = v7;
  *(_DWORD *)&v55[50] = v1;
  if ( v7 || v6 )
  {
    v55[48] = v6;
  }
  else
  {
    if ( !v5 )
      v5 = 1;
    v55[48] = v5;
  }
  *(_DWORD *)v55 = v48;
  *(_QWORD *)&v55[40] = MEMORY[0xFFFFF78000000014];
  v36 = *(_OWORD *)&v55[8];
  *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)v55;
  v37 = *(_OWORD *)&v55[16];
  *(_OWORD *)((char *)a1 + 472) = v36;
  v38 = *(_OWORD *)&v55[24];
  *(_OWORD *)((char *)a1 + 488) = v37;
  v39 = *(_OWORD *)&v55[32];
  *(_OWORD *)((char *)a1 + 504) = v38;
  v40 = *(_OWORD *)&v55[40];
  *(_OWORD *)((char *)a1 + 520) = v39;
  v41 = *(_OWORD *)&v55[48];
  *(_OWORD *)((char *)a1 + 536) = v40;
  *(_QWORD *)&v40 = *(_QWORD *)&v55[56];
  *(_OWORD *)((char *)a1 + 552) = v41;
  *((_QWORD *)a1 + 71) = v40;
  CitpStatIncrement(&v55[2], 1);
LABEL_9:
  CitpStatIncrement(&v55[4], 1);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v14 = RtlLengthSid(*((PSID *)a1 + 12));
    v15 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v16 = 314159LL;
    v17 = v14;
    if ( v14 >= 8uLL )
    {
      v18 = (unsigned __int64)v14 >> 3;
      v17 = v14 - 8 * v18;
      do
      {
        v19 = v15[7];
        v20 = 37
            * (v15[6]
             + 37 * (v15[5] + 37 * (v15[4] + 37 * (v15[3] + 37 * (v15[2] + 37 * (v15[1] + 37 * (*v15 + 37 * v16)))))));
        v15 += 8;
        v16 = v19 + v20;
        --v18;
      }
      while ( v18 );
    }
    if ( v17 < 1 || v17 > 7 )
      goto LABEL_17;
    v42 = v17 - 1;
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                if ( v47 != 1 )
                  goto LABEL_17;
                LODWORD(v16) = *v15++ + 37 * v16;
              }
              LODWORD(v16) = *v15++ + 37 * v16;
            }
            LODWORD(v16) = *v15++ + 37 * v16;
          }
          LODWORD(v16) = *v15++ + 37 * v16;
        }
        LODWORD(v16) = *v15++ + 37 * v16;
      }
      LODWORD(v16) = *v15++ + 37 * v16;
    }
    LODWORD(v16) = *v15 + 37 * v16;
LABEL_17:
    *(_DWORD *)&v55[16] = v16;
  }
  v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), v21);
  v22 = *(_QWORD *)((char *)a1 + 220);
  v23 = DWORD2(xmmword_1C0255534);
  v24 = (unsigned int)v22 + 1000LL * *(unsigned int *)&v55[6];
  *((_DWORD *)a1 + 144) = v21;
  v25 = v24 % v23;
  v26 = *(_DWORD *)&v55[56];
  *((_DWORD *)a1 + 145) = v22 - v25;
  if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)&v55[40] )
  {
    v27 = Citp100NSToMS(MEMORY[0xFFFFF78000000014] - *(_QWORD *)&v55[40]);
    v26 = *(_DWORD *)&v55[56] + v27;
  }
  v28 = *(_OWORD *)v55;
  v29 = v21 - v26;
  result = 0LL;
  v30 = *(_OWORD *)&v55[8];
  *((_DWORD *)a1 + 207) = v29;
  *(_OWORD *)v2 = v28;
  v31 = *(_OWORD *)&v55[16];
  *((_OWORD *)v2 + 1) = v30;
  v32 = *(_OWORD *)&v55[24];
  *((_OWORD *)v2 + 2) = v31;
  v33 = *(_OWORD *)&v55[32];
  *((_OWORD *)v2 + 3) = v32;
  v34 = *(_OWORD *)&v55[40];
  *((_OWORD *)v2 + 4) = v33;
  v35 = *(_OWORD *)&v55[48];
  *((_OWORD *)v2 + 5) = v34;
  *(_QWORD *)&v34 = *(_QWORD *)&v55[56];
  *((_OWORD *)v2 + 6) = v35;
  *((_QWORD *)v2 + 14) = v34;
  return result;
}
