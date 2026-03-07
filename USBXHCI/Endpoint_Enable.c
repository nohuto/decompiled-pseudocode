__int64 __fastcall Endpoint_Enable(__m128i **a1)
{
  __m128i **v2; // r14
  void *v3; // rdx
  __m128i *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __m128i *v10; // rsi
  __int64 Pool2; // rax
  int v12; // r8d
  int StreamContextArray; // edi
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rcx
  __m128i *v17; // rax
  __int64 v18; // r8
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 DequeuePointer; // rax
  __int64 v23; // rdx
  int v24; // edx
  char v25; // [rsp+30h] [rbp-31h]
  int v26; // [rsp+38h] [rbp-29h]
  char v27; // [rsp+40h] [rbp-21h]
  __int128 v28; // [rsp+58h] [rbp-9h] BYREF
  __int128 v29; // [rsp+68h] [rbp+7h]
  char pszDest[16]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v31; // [rsp+88h] [rbp+27h]

  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v2 = a1 + 2;
  v3 = &WPP_54015396503830aea6e7f220ba327c55_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_ddq(
      (*a1)[4].m128i_i64[1],
      (_DWORD)v3,
      13,
      23,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      (*v2)[8].m128i_i8[7],
      *((_DWORD *)a1 + 36),
      (char)a1[3]);
  }
  if ( (_mm_srli_si128((*a1)[21], 8).m128i_u64[0] & 0x10000) != 0 )
  {
    v4 = *v2;
    if ( (*v2)[2].m128i_i32[1] == 1 && ((*((_DWORD *)a1 + 30) - 3) & 0xFFFFFFFB) == 0 )
    {
      v5 = 120LL * (unsigned int)(v4[2].m128i_i32[3] - 1);
      v6 = *(_QWORD *)(*(_QWORD *)(v4->m128i_i64[1] + 152) + 48LL);
      if ( *(_BYTE *)(v5 + v6 + 13) == 3 )
        _InterlockedAdd((volatile signed __int32 *)(v5 + v6 + 108), 1u);
    }
  }
  if ( (unsigned __int8)Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(a1) )
  {
    if ( !*((_BYTE *)a1 + 38) )
    {
      v7 = *a1;
      *((_BYTE *)a1 + 38) = 1;
      if ( _InterlockedIncrement(v7[41].m128i_i32) == 1 )
        Controller_SetHSIIWorkaround();
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64, __m128i *, __int64 (__fastcall *)(_QWORD)))qword_1C0064838)(
         UcxDriverGlobals,
         a1[3],
         Endpoint_Enable);
  v9 = v8;
  if ( *((_BYTE *)a1 + 37) )
  {
    if ( v8 )
    {
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              v8,
              off_1C0063338);
      a1[17] = (__m128i *)v20;
      v10 = (__m128i *)v20;
      if ( !*(_QWORD *)(v20 + 32) )
      {
        StreamContextArray = XilEndpoint_AllocateStreamContextArray(v20);
        if ( StreamContextArray < 0 )
          goto LABEL_42;
      }
      v21 = 1;
      if ( v10->m128i_i32[2] )
      {
        while ( 1 )
        {
          StreamContextArray = TR_Enable_Internal(*((_QWORD **)&a1[17][-3] + 13 * v21 - 1));
          if ( StreamContextArray < 0 )
            break;
          DequeuePointer = Endpoint_GetDequeuePointer(a1, v21);
          v23 = v21++;
          *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16 * v23) = DequeuePointer;
          if ( v21 > v10->m128i_i32[2] )
            goto LABEL_22;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = (*v2)[8].m128i_u8[7];
          LOBYTE(v24) = 2;
          WPP_RECORDER_SF_dddd(
            (*a1)[4].m128i_i64[1],
            v24,
            13,
            25,
            (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
            (*v2)[8].m128i_i8[7],
            *((_DWORD *)a1 + 36),
            v21 + 1,
            StreamContextArray);
        }
        goto LABEL_42;
      }
    }
    else
    {
      v10 = a1[16];
      if ( !v10 )
      {
        Pool2 = ExAllocatePool2(64LL, 152LL, 1229146200LL);
        a1[16] = (__m128i *)Pool2;
        LODWORD(v10) = Pool2;
        if ( !Pool2 )
        {
          StreamContextArray = -1073741670;
LABEL_42:
          Endpoint_Disable_Internal((__int64 *)a1, 1, v12);
          goto LABEL_27;
        }
        a1[17] = (__m128i *)Pool2;
        *(_QWORD *)Pool2 = a1;
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_DWORD *)(Pool2 + 12) = 1;
        a1[17][3].m128i_i64[0] = (__int64)a1[11];
        StreamContextArray = XilEndpoint_AllocateStreamContextArray(Pool2);
        if ( StreamContextArray < 0 )
          goto LABEL_42;
      }
      StreamContextArray = TR_Enable_Internal(a1[11]);
      if ( StreamContextArray < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v15 = 24;
        v27 = StreamContextArray;
        v26 = *((_DWORD *)a1 + 36);
        v25 = (*v2)[8].m128i_i8[7];
        v16 = (*a1)[4].m128i_i64[1];
LABEL_41:
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_ddd(v16, v14, 13, v15, (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids, v25, v26, v27);
        goto LABEL_42;
      }
      *(_QWORD *)(*(_QWORD *)(a1[17][2].m128i_i64[0] + 16) + 16LL) = TR_GetDequeuePointer(a1[11]);
    }
LABEL_22:
    StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates((_DWORD)v10);
    if ( StreamContextArray < 0 )
      goto LABEL_42;
  }
  else
  {
    StreamContextArray = TR_Enable_Internal(a1[11]);
    if ( StreamContextArray < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v15 = 26;
      v27 = StreamContextArray;
      v16 = (*a1)[4].m128i_i64[1];
      v26 = *((_DWORD *)a1 + 36);
      v25 = (*v2)[8].m128i_i8[7];
      goto LABEL_41;
    }
  }
  v17 = *v2;
  v18 = (__int64)*a1;
  *(_QWORD *)&v29 = 0LL;
  *(_QWORD *)&v28 = 56LL;
  pszDest[0] = 0;
  HIDWORD(v29) = 16;
  BYTE8(v29) = 0;
  v31 = 0x200000002LL;
  *((_QWORD *)&v28 + 1) = 0xC800000400LL;
  if ( RtlStringCchPrintfA(
         pszDest,
         0x10uLL,
         "%02d SLT%02d DCI%02d",
         *(_DWORD *)(v18 + 176),
         v17[8].m128i_u8[7],
         *((_DWORD *)a1 + 36)) < 0
    || (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v28, a1 + 10) < 0 )
  {
    a1[10] = (__m128i *)(*a1)[4].m128i_i64[1];
  }
  StreamContextArray = 0;
  ESM_AddEvent(a1 + 37);
LABEL_27:
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(_QWORD), __int64, const char *))(WdfFunctions_01023 + 1648))(
      WdfDriverGlobals,
      v9,
      Endpoint_Enable,
      1224LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
