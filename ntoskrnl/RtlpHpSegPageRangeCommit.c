__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rsi
  int v8; // r13d
  int v10; // edx
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  int v14; // eax
  char v15; // r9
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  char v18; // cl
  unsigned __int64 v19; // r11
  int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r11
  unsigned int v23; // edx
  int v24; // ebx
  unsigned __int64 v25; // rsi
  int v26; // edx
  unsigned __int64 v27; // rsi
  int v28; // r8d
  bool v29; // zf
  unsigned int v30; // edx
  int v31; // ecx
  __int64 result; // rax
  int v33; // r13d
  unsigned int v34; // r8d
  int v35; // edx
  int v36; // r9d
  unsigned __int64 v37; // rdx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // r8d
  unsigned int v41; // edx
  int v42; // ebx
  int v43; // [rsp+40h] [rbp-58h]
  unsigned int v44; // [rsp+44h] [rbp-54h]
  unsigned int v45; // [rsp+48h] [rbp-50h]
  int v46; // [rsp+4Ch] [rbp-4Ch]
  int v47; // [rsp+A0h] [rbp+8h]
  int v49; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v50; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a4 + a3;
  v7 = a2;
  v8 = (a5 >> 22) & 2;
  v43 = v8;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v46 = v10;
  v12 = (unsigned int)((v7 - (v7 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  v13 = a3;
  if ( a4 <= 0 )
    v6 = a3 - a4;
  v14 = 0;
  v47 = 0;
  if ( a3 >= v6 )
    goto LABEL_21;
  while ( 2 )
  {
    v15 = *(_BYTE *)(a1 + 9);
    v49 = -1;
    v16 = v10 - (v10 & (v13 + v12)) + 1;
    if ( v16 >= v6 - v13 )
      v16 = v6 - v13;
    v17 = 1 << v15;
    v18 = v15;
    v19 = (unsigned __int64)v13 >> v15;
    v20 = -1;
    v45 = v16;
    v21 = v7 + 32 * v19;
    v22 = v19 << v18;
    v50 = v13 & (v17 - 1);
    v23 = v16 - 1 + v50;
    v24 = 0;
    v25 = (unsigned __int64)v23 >> v18;
    v26 = ((v17 - 1) & v23) + 1;
    v27 = v21 + 32 * v25;
    v44 = v26;
    if ( v50 )
    {
      v40 = v17;
      if ( v21 == v27 )
        v40 = v26;
      v41 = *(unsigned __int8 *)(v21 + 25);
      if ( a4 <= 0 )
      {
        if ( v41 > v50 )
        {
          v28 = v22 + v50;
          v42 = v13 & (v17 - 1);
          v49 = v22 + v50;
          v20 = v41 + v22;
          goto LABEL_60;
        }
      }
      else if ( v41 < v40 )
      {
        v42 = v40;
        v20 = v22 + v40;
        v49 = v41 + v22;
        v28 = v41 + v22;
LABEL_60:
        v24 = v42 - v41;
        if ( v24 && a4 <= 0 )
          *(_BYTE *)(v21 + 25) = v24 + v41;
        goto LABEL_63;
      }
      v28 = v49;
LABEL_63:
      v21 += 32LL;
      LODWORD(v22) = v17 + v22;
      goto LABEL_10;
    }
    v28 = v49;
LABEL_10:
    v29 = v21 == v27;
    if ( v21 >= v27 )
      goto LABEL_11;
    v33 = v49;
    do
    {
      v34 = *(unsigned __int8 *)(v21 + 25);
      v35 = 0;
      if ( a4 <= 0 )
      {
        if ( !*(_BYTE *)(v21 + 25) )
          goto LABEL_34;
        v20 = v34 + v22;
        v35 = -v34;
        v39 = v22;
        if ( v33 != -1 )
          v39 = v33;
        v33 = v39;
      }
      else
      {
        if ( v34 >= v17 )
          goto LABEL_34;
        if ( v33 == -1 )
          v33 = v34 + v22;
        v20 = v22 + v17;
        v35 = v17 - v34;
      }
      if ( v35 && a4 <= 0 )
        *(_BYTE *)(v21 + 25) = v35 + v34;
LABEL_34:
      v24 += v35;
      v21 += 32LL;
      LODWORD(v22) = v17 + v22;
      v29 = v21 == v27;
    }
    while ( v21 < v27 );
    v49 = v33;
    v8 = v43;
    v28 = v49;
LABEL_11:
    if ( v29 )
    {
      v30 = *(unsigned __int8 *)(v21 + 25);
      v31 = 0;
      if ( a4 <= 0 )
      {
        if ( *(_BYTE *)(v21 + 25) )
        {
          v20 = v30 + v22;
          v31 = -v30;
          if ( v49 != -1 )
            LODWORD(v22) = v49;
          v49 = v22;
LABEL_17:
          if ( v31 && a4 <= 0 )
            *(_BYTE *)(v21 + 25) = v31 + v30;
        }
      }
      else if ( v30 < v44 )
      {
        if ( v28 == -1 )
          v49 = v30 + v22;
        v20 = v22 + v44;
        v31 = v44 - v30;
        goto LABEL_17;
      }
      v24 += v31;
    }
    v7 = a2;
    if ( v24 )
    {
      v36 = v20 - v49;
      v37 = a2 & *(_QWORD *)a1;
      v50 = v36;
      if ( v24 <= 0 )
      {
        v38 = 0x4000;
      }
      else
      {
        v38 = 4096;
        if ( (a5 & 2) != 0 )
          v38 = 1073745920;
      }
      result = RtlpHpSegMgrCommit(a1, v37, v49 + v12, v36, v24, v38, v8);
      if ( (int)result >= 0 )
      {
        if ( v24 > 0 )
          RtlpHpSegPageRangeHandleCommit(a1, a2, &v49, &v50, 1);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v24);
        *(_WORD *)(a2 + 28) = ~(v24 + ~*(_WORD *)(a2 + 28));
        goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v13 += v45;
      v14 = v24 + v47;
      v47 += v24;
      if ( v13 < v6 )
      {
        v10 = v46;
        continue;
      }
LABEL_21:
      if ( a6 )
        *a6 = v14;
      return 0LL;
    }
    return result;
  }
}
