char __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 v13; // rax
  char v14; // bp
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  _UNKNOWN **v19; // rdx
  int v20; // r8d
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // edx
  int v24; // edx
  unsigned __int64 v25; // rbx
  int v26; // edx
  int v27; // ebx
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+98h] [rbp+10h]
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v7 = *a2;
  v9 = *(_QWORD *)(a4 + 16);
  v11 = *(_QWORD *)(a4 + 24);
  v30 = v7;
  v13 = *(unsigned int *)(a4 + 44);
  v14 = 0;
  v15 = 16LL * a5;
  v16 = (v13 & 0xFFFFFFFFFFFFFFF0uLL) + v9 - 16;
  v31 = v9;
  v17 = v15 + v11;
  v18 = v15 + v9;
  if ( v15 + v9 > v16 )
    return v14;
  v19 = &WPP_RECORDER_INITIALIZED;
  while ( 1 )
  {
    if ( v17 == *(_QWORD *)a3 )
      v14 = 1;
    v20 = (unsigned __int16)*(_DWORD *)(v18 + 12) >> 10;
    if ( v20 == 1 || v20 == 5 )
      break;
    if ( v20 == 6 )
      goto LABEL_56;
    if ( v20 == 7 )
    {
      if ( v14 )
        goto LABEL_43;
      *a7 = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = *(unsigned __int8 *)(a1[6] + 135LL);
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_DDL(
          *(_QWORD *)(a1[7] + 80LL),
          v21,
          v20,
          32,
          v29,
          *(_BYTE *)(a1[6] + 135LL),
          *(_DWORD *)(a1[7] + 144LL),
          v20);
        v19 = &WPP_RECORDER_INITIALIZED;
      }
      if ( v14 )
        goto LABEL_43;
    }
LABEL_17:
    v18 += 16LL;
    v17 += 16LL;
    if ( v18 > v16 )
      return v14;
  }
  if ( !v14 )
  {
    *a7 += *(_DWORD *)(v18 + 8) & 0x1FFFF;
    goto LABEL_17;
  }
  v22 = *(unsigned __int8 *)(a3 + 11);
  if ( v22 > 0x17 )
  {
    if ( v22 != 26 )
    {
      if ( v22 == 27 )
        goto LABEL_43;
      if ( v22 == 28 )
      {
        *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
        goto LABEL_43;
      }
      if ( v22 != 31 && v22 != 36 )
        goto LABEL_36;
    }
    goto LABEL_39;
  }
  if ( v22 == 23 )
  {
    if ( !*(_BYTE *)(a1[5] + 319LL) )
      goto LABEL_43;
    if ( (*(_DWORD *)(v18 + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(a1[7] + 80LL),
        v23,
        14,
        30,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        *(_BYTE *)(v18 + 8),
        *(_BYTE *)(a3 + 8));
    }
LABEL_42:
    *a7 += (*(_DWORD *)(v18 + 8) & 0x1FFFF) - (*(_DWORD *)(a3 + 8) & 0xFFFFFF);
    goto LABEL_43;
  }
  if ( v22 == 2 || v22 == 3 || v22 == 4 || v22 == 6 )
  {
LABEL_39:
    if ( (*(_DWORD *)(v18 + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDL(
        *(_QWORD *)(a1[7] + 80LL),
        *(unsigned __int8 *)(a1[6] + 135LL),
        v22,
        *(_DWORD *)(a3 + 8) & 0xFFFFFF,
        v29,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        *(_BYTE *)(v18 + 8),
        *(_BYTE *)(a3 + 8),
        *(_BYTE *)(a3 + 11));
    }
    goto LABEL_42;
  }
  if ( v22 != 20 )
  {
LABEL_36:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v24,
        v22,
        31,
        v29,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        *(_BYTE *)(a3 + 11));
    }
  }
LABEL_43:
  v25 = v18;
  if ( v18 >= v16 )
    goto LABEL_56;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2 == 5 )
    {
LABEL_50:
      v25 += 16LL;
      if ( v25 >= v16 )
        goto LABEL_56;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2 == 6 )
    goto LABEL_56;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2 != 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v26) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v26,
        (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2,
        34,
        v29,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        (unsigned __int8)HIBYTE(*(_WORD *)(v25 + 12)) >> 2);
    }
    goto LABEL_50;
  }
  v27 = *(unsigned __int16 *)(v25 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(a1[7] + 80LL),
      (_DWORD)v19,
      14,
      33,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      *((_DWORD *)a2 + 12),
      v27 + 1);
  }
  *(_DWORD *)(v30 + 100) = v27 + 1;
  *((_DWORD *)a2 + 12) = v27 + 1;
LABEL_56:
  if ( v14 )
    *a6 = (__int64)(v18 - v31) >> 4;
  return v14;
}
