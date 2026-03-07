signed __int64 __fastcall Control_ValidateED0TrbPointerOnMismatch(__int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // r8d

  result = *a2;
  v4 = a1[22];
  v5 = *(_QWORD *)(v4 + 24);
  if ( *a2 < v5 || result >= v5 + *(unsigned int *)(v4 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = a1[6];
      v12 = *(unsigned __int8 *)(v11 + 135);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(a1[7] + 80),
        v11,
        v12,
        14,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        v12,
        *(_DWORD *)(a1[7] + 144),
        result);
    }
    v10 = 4127;
    return Controller_ReportFatalErrorEx(a1[5], 2u, v10, 0LL, 0LL, a1[6], a1[7], (__int64)a1);
  }
  if ( !_bittest64((const signed __int64 *)(a1[5] + 336), 0x26u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = a1[6];
      v9 = *(unsigned __int8 *)(v8 + 135);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(a1[7] + 80),
        v8,
        v9,
        13,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        v9,
        *(_DWORD *)(a1[7] + 144),
        result);
    }
    v10 = 4128;
    return Controller_ReportFatalErrorEx(a1[5], 2u, v10, 0LL, 0LL, a1[6], a1[7], (__int64)a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a1[6];
    v7 = *(unsigned __int8 *)(v6 + 135);
    LOBYTE(v6) = 3;
    return WPP_RECORDER_SF_DDi(
             *(_QWORD *)(a1[7] + 80),
             v6,
             v7,
             12,
             (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
             v7,
             *(_DWORD *)(a1[7] + 144),
             result);
  }
  return result;
}
