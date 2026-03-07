__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int *v7; // r13
  __int64 v8; // rax
  int Ulong; // eax
  int v10; // edx
  int v11; // esi
  int v12; // esi
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  unsigned int v18; // ebx
  char v19; // al
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  __m128i *v23; // rcx
  int v24; // esi
  __int64 v25; // rbx
  int v26; // esi
  char i; // r13
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ebx
  int v31; // edx
  unsigned int *v33; // [rsp+80h] [rbp+8h]
  unsigned int v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+90h] [rbp+18h]

  v2 = a1[1];
  v4 = a2 - 1;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 88);
  v33 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5]);
  v35 = v6;
  v34 = a2 - 1;
  v7 = v33 + 1;
  v8 = a1[6] + 120LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v8 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v8 + 23) )
      return v5;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v4);
    Ulong = XilRegister_ReadUlong(v6, v7);
    v11 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        244,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        Ulong);
    }
    v12 = v11 & 0xFFFEFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 245;
LABEL_24:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        v13,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v12);
    }
  }
  else
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v14,
        11,
        246,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
    v15 = XilRegister_ReadUlong(v6, v7);
    v17 = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        247,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v15);
    }
    v18 = v17 & 0xFFFF0000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        248,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v18);
    }
    XilRegister_WriteUlong(v6, v7, v18);
    v19 = XilRegister_ReadUlong(v6, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v20,
        11,
        249,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v19);
    }
    v7 = v33;
    v21 = XilRegister_ReadUlong(v6, v33);
    v22 = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        250,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v21);
    }
    v23 = (__m128i *)a1[1];
    if ( (_mm_srli_si128(v23[21], 8).m128i_u8[0] & 0x40) != 0 )
    {
      if ( (v22 & 0x400000) != 0 )
      {
        ++v23[31].m128i_i32[1];
        ++v23[34].m128i_i32[0];
        v23[29].m128i_i8[8] = 1;
      }
      v24 = 239124992;
    }
    else
    {
      v24 = 234930688;
    }
    v12 = v22 & v24 | 0x10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 251;
      goto LABEL_24;
    }
  }
  v25 = v35;
  XilRegister_WriteUlong(v35, v7, v12);
  RootHub_ReleaseReadModifyWriteLock((__int64)a1, v34);
  v26 = 6400;
  for ( i = 0; ; i += 10 )
  {
    v28 = XilRegister_ReadUlong(v25, v33);
    v30 = v28;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        v29,
        11,
        252,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        i,
        v28);
    }
    if ( v30 == -1 )
      return (unsigned int)-1073741823;
    v31 = (v30 >> 5) & 0xF;
    if ( !v31 )
      return v5;
    if ( ((v31 - 5) & 0xFFFFFFFA) == 0 && v31 != 9 || (v30 & 0x20203) != 0x203 || v31 == 4 )
      return (unsigned int)-1073741823;
    if ( ((v31 - 9) & 0xFFFFFFFD) == 0 )
      break;
    if ( (v30 & 0x10) != 0 || !v26 )
      return (unsigned int)-1073741823;
    --v26;
    KeStallExecutionProcessor(0xAu);
    v25 = v35;
  }
  v5 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v31,
      11,
      253,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      (v30 >> 5) & 0xF);
  }
  return v5;
}
