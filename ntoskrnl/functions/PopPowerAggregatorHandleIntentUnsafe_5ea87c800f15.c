__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 (__fastcall *v8)(__int64 *, __m128i *, _QWORD, __int64); // rax
  int v9; // ebx
  bool v11; // zf
  __m128i v12; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+7h]
  _OWORD v14[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+90h] [rbp+3Fh]

  v6 = (int)a1;
  v14[0] = xmmword_140C3A710;
  v7 = a2;
  *(_QWORD *)v13 = ++PopPowerAggregatorContext;
  v15 = qword_140C3A730;
  v12.m128i_i32[0] = 5;
  v12.m128i_i64[1] = a4;
  v12.m128i_i32[1] = (int)a1;
  *(_OWORD *)&v13[8] = 0LL;
  v14[1] = xmmword_140C3A720;
  if ( (unsigned int)((_DWORD)a1 - 1) > 9
    || a3 > 2
    || (a1 = PopPowerAggregatorIntentHandlers,
        (v8 = (__int64 (__fastcall *)(__int64 *, __m128i *, _QWORD, __int64))PopPowerAggregatorIntentHandlers[v6]) == 0LL) )
  {
    v9 = -1073741811;
    goto LABEL_12;
  }
  v9 = v8(&PopPowerAggregatorContext, &v12, (unsigned int)v6, a2);
  if ( v9 >= 0 )
  {
    LODWORD(a1) = _mm_cvtsi128_si32(v12);
    xmmword_140C3A710 = (__int128)v12;
    qword_140C3A730 = *(_QWORD *)&v13[16];
    xmmword_140C3A720 = *(_OWORD *)v13;
    if ( (_DWORD)a1 )
    {
      LODWORD(a1) = (_DWORD)a1 - 1;
      if ( !(_DWORD)a1 )
      {
        if ( (_DWORD)xmmword_140C3A738 != 1 )
        {
LABEL_9:
          v9 = 259;
          PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
          goto LABEL_12;
        }
        v11 = *((_QWORD *)&xmmword_140C3A738 + 1) == *(_QWORD *)v13;
LABEL_14:
        if ( v11 )
        {
LABEL_11:
          v9 = 0;
          goto LABEL_12;
        }
        goto LABEL_9;
      }
      LODWORD(a1) = (_DWORD)a1 - 1;
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 == 1 && (_DWORD)xmmword_140C3A738 == 5 )
          goto LABEL_11;
        goto LABEL_9;
      }
    }
    v11 = (xmmword_140C3A738 & 0xFFFFFFFD) == 0;
    goto LABEL_14;
  }
LABEL_12:
  PopPowerAggregatorRecordIntent((_DWORD)a1, v6, v7, a3, a4, (__int64)v14, (__int64)&v12, v9);
  return (unsigned int)v9;
}
