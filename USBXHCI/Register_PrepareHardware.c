__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  char *v5; // rdx
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // edx
  __int64 *v10; // r14
  __int64 v11; // rax
  int v12; // edx
  int v13; // ebx
  __m128i **v14; // rsi
  int v15; // eax
  int v16; // r9d
  __m128i *v17; // rax
  __int64 v18; // r8
  __m128i *v19; // rcx
  char v21; // [rsp+30h] [rbp-68h]
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2432))(WdfDriverGlobals) )
  {
LABEL_12:
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v13 = -1073741670;
      v8 = a1 + 8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)v8 + 72LL),
          (_DWORD)v5,
          6,
          16,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
      }
      goto LABEL_36;
    }
    v14 = (__m128i **)(a1 + 8);
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
    {
      v13 = Register_MapSecureMmio(a1);
      v10 = (__int64 *)(a1 + 24);
      v8 = a1 + 8;
      if ( v13 < 0 )
        goto LABEL_37;
    }
    v15 = Register_ParseCapabilityRegister(a1);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v15 = Register_BiosHandoff(a1);
      v13 = v15;
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_24;
        v16 = 18;
        goto LABEL_23;
      }
      v15 = Register_ControllerReset(a1, 0);
      v13 = v15;
      if ( v15 >= 0 )
      {
        if ( (_mm_srli_si128((*v14)[21], 8).m128i_u64[0] & 0x80000) == 0 )
        {
          v10 = (__int64 *)(a1 + 24);
          v8 = a1 + 8;
          if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) != 0 )
            goto LABEL_37;
        }
        v17 = *v14;
        v5 = (char *)((char *)&v22 - (char *)*v14);
        v22 = 1uLL;
        v18 = 2LL;
        v19 = v17 + 21;
        do
        {
          v19->m128i_i64[0] |= *(unsigned __int64 *)((char *)v19[-21].m128i_u64 + (_QWORD)v5);
          v19 = (__m128i *)((char *)v19 + 8);
          --v18;
        }
        while ( v18 );
        v8 = a1 + 8;
LABEL_36:
        v10 = (__int64 *)(a1 + 24);
        goto LABEL_37;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 19;
        goto LABEL_23;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 17;
LABEL_23:
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        (*v14)[4].m128i_i64[1],
        (_DWORD)v5,
        6,
        v16,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v15);
    }
LABEL_24:
    v10 = (__int64 *)(a1 + 24);
    v8 = a1 + 8;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WdfDriverGlobals,
           a2,
           v4);
    if ( *(_BYTE *)v7 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v8 = a1 + 8,
            LOBYTE(v6) = 4,
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v6,
              6,
              12,
              (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
              v4),
            WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED) )
      {
        v8 = a1 + 8;
      }
      else
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_DDd(
          *(_QWORD *)(*(_QWORD *)v8 + 72LL),
          v9,
          6,
          13,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          *(_DWORD *)(v7 + 8),
          *(_DWORD *)(v7 + 4),
          *(_DWORD *)(v7 + 12));
      }
      v10 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) )
        break;
    }
LABEL_11:
    if ( ++v4 >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
                   WdfDriverGlobals,
                   a2) )
      goto LABEL_12;
  }
  v11 = MmMapIoSpaceEx(*(_QWORD *)(v7 + 4), *(unsigned int *)(v7 + 12), 516LL);
  *v10 = v11;
  if ( v11 )
  {
    v12 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(a1 + 20) = v12;
    *(_BYTE *)(a1 + 16) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v12;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)v8 + 72LL),
        v12,
        6,
        15,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v11,
        v21);
    }
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)v8 + 72LL),
      (_DWORD)v5,
      6,
      14,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  }
  v13 = -1073741670;
LABEL_37:
  if ( !*v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)v8 + 72LL),
        (_DWORD)v5,
        6,
        20,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
