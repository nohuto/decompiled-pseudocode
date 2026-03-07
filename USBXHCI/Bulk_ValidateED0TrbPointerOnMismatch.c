_UNKNOWN **__fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rax
  _UNKNOWN **result; // rax
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v14) )
  {
    v5 = *(_QWORD *)(a1[5] + 336LL);
    if ( (v5 & 0x4000000000LL) != 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v7 = 44;
      v8 = a1[7];
      v9 = *(unsigned __int8 *)(a1[6] + 135LL);
LABEL_12:
      LOBYTE(v9) = 3;
      return (_UNKNOWN **)WPP_RECORDER_SF_DDDi(*(_QWORD *)(v8 + 80), v9, v4, v7);
    }
    if ( v14 )
    {
      if ( (v5 & 0x2000000000000LL) != 0 )
      {
        v10 = a1[6];
        if ( *(_DWORD *)(v10 + 20) == 3 )
        {
          v8 = a1[7];
          if ( *(_DWORD *)(v8 + 120) == 6 && (unsigned __int8)(*(_BYTE *)(a2 + 11) - 26) <= 2u )
          {
            result = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return result;
            v9 = *(unsigned __int8 *)(v10 + 135);
            v7 = 45;
            goto LABEL_12;
          }
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v11, v4, 46);
    }
    v12 = 4128;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v13, v4, 47);
    }
    v12 = 4127;
  }
  return (_UNKNOWN **)Controller_ReportFatalErrorEx(a1[5], 2u, v12, 0LL, 0LL, a1[6], a1[7], (__int64)a1);
}
