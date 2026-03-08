/*
 * XREFs of PpmHeteroComputeMultiClassUnparkCount @ 0x140594A00
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140594418 (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140594838 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroComputeUnparkCount @ 0x140594CD0 (PpmHeteroComputeUnparkCount.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140599710 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x140599908 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 */

__int64 __fastcall PpmHeteroComputeMultiClassUnparkCount(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        unsigned int a5,
        char a6,
        char a7)
{
  unsigned int v8; // r13d
  unsigned __int64 v9; // rsi
  unsigned int i; // edx
  __int64 v11; // rax
  unsigned int v12; // r8d
  _QWORD *v13; // r12
  __int64 result; // rax
  int v15; // r14d
  int v16; // r15d
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int8 *v19; // rcx
  unsigned int v20; // r10d
  char v21; // r11
  unsigned __int8 *v22; // rdi
  unsigned int v23; // r9d
  char v24; // al
  unsigned int v25; // ecx
  unsigned int v26; // edx
  int v27; // r9d
  int v28; // r8d
  unsigned int v29; // edi
  unsigned __int64 v30; // rcx
  unsigned __int8 *v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int8 v34; // dl
  unsigned __int64 v35; // rax
  char v36; // [rsp+40h] [rbp-61h]
  unsigned int v37; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-4Dh]
  __int64 v39; // [rsp+58h] [rbp-49h] BYREF
  void *v40; // [rsp+60h] [rbp-41h]
  unsigned int *v41; // [rsp+68h] [rbp-39h]
  __int64 v42; // [rsp+70h] [rbp-31h] BYREF
  __int64 v43; // [rsp+78h] [rbp-29h]
  __int128 v44; // [rsp+80h] [rbp-21h] BYREF

  v37 = 0;
  v42 = 0LL;
  v8 = 1;
  v9 = *(_QWORD *)(a1 + 96);
  v40 = a4;
  v41 = a3;
  v43 = a2;
  if ( a7 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    for ( i = 1; i < *(unsigned __int8 *)(a1 + 11); *(_QWORD *)(104 * v11 + *(_QWORD *)(a1 + 184) + 8) = 0LL )
      v11 = i++;
  }
  v12 = *(unsigned __int8 *)(a1 + 11);
  v13 = (_QWORD *)(a1 + 184);
  result = *(unsigned __int16 *)(a1 + 4);
  v15 = 0;
  v16 = 0;
  v44 = 0LL;
  WORD4(v44) = result;
  if ( v12 > 1 )
  {
    v17 = v12 - 1;
    v18 = v44;
    v19 = (unsigned __int8 *)(*v13 + 104LL);
    do
    {
      v18 |= *((_QWORD *)v19 + 2);
      v15 += v19[4];
      result = *v19;
      v19 += 104;
      v16 += result;
      *(_QWORD *)&v44 = v18;
      --v17;
    }
    while ( v17 );
    do
    {
      v20 = a5;
      if ( !a5 )
        break;
      v21 = 0;
      v38 = v8 + 1;
      v22 = (unsigned __int8 *)(*v13 + 104LL * v8);
      v39 = 0LL;
      v15 -= v22[4];
      v16 -= *v22;
      if ( v8 + 1 == (unsigned __int8)v12 )
      {
        v23 = 0;
      }
      else
      {
        PpmHeteroComputeCoreParkingUtilities(v8, (__int64 *)&v44, v41, v40, &v42, &v39);
        v24 = PpmHeteroComputeUnparkCount(v8, v43, 1, (_DWORD)v41, 0LL, (__int64)v40, v39, v15, v16, (__int64)&v37);
        v23 = v37;
        v21 = v24;
        v20 = a5;
        if ( v37 >= a5 )
          v23 = a5;
      }
      v25 = *v22;
      v26 = v20 - v23;
      v36 = v23;
      v37 = v23;
      v27 = (int)v40;
      if ( v26 >= v25 )
        v26 = v25;
      LOBYTE(v25) = v8;
      v28 = (int)v41;
      *((_QWORD *)v22 + 1) += v9 * v26;
      a5 = v20 - v26;
      PpmEventTraceMultiClassHeteroResponse(v25, (unsigned int)&v44, v28, v27, v39, v15, v21, v26, v36, v9);
      v8 = v38;
      *(_QWORD *)&v44 = ~*((_QWORD *)v22 + 2) & v44;
      result = *(unsigned __int8 *)(a1 + 11);
      LOBYTE(v12) = *(_BYTE *)(a1 + 11);
    }
    while ( v38 < (unsigned int)result );
  }
  *(_QWORD *)(a1 + 128) += v9;
  if ( a6 )
  {
    v29 = 1;
    if ( *(_BYTE *)(a1 + 11) > 1u )
    {
      do
      {
        v30 = *(_QWORD *)(a1 + 128);
        v31 = (unsigned __int8 *)(*v13 + 104LL * v29);
        if ( !v30 )
          v30 = 1LL;
        *(_QWORD *)(a1 + 128) = v30;
        v32 = (*((_QWORD *)v31 + 1) + (v30 >> 1)) / v30;
        v33 = *v31;
        v34 = v32;
        if ( (unsigned __int8)v32 >= (unsigned __int8)v33 )
          v34 = *v31;
        v31[3] = v34;
        if ( v34 )
        {
          v33 = v34;
          if ( !v9 )
            v9 = 1LL;
          v35 = 100LL * *(_QWORD *)(*((_QWORD *)v31 + 7) + 8LL * v34) / v9;
        }
        else
        {
          LOBYTE(v35) = 0;
        }
        v31[98] = v35;
        LOBYTE(v33) = v29;
        PpmEventTraceMultiClassHeteroResponseUpdate(v33, v31, *(_QWORD *)(a1 + 128), v31);
        result = *(unsigned __int8 *)(a1 + 11);
        ++v29;
      }
      while ( v29 < (unsigned int)result );
    }
  }
  return result;
}
