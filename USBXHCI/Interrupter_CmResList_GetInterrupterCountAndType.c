__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // edi
  unsigned int i; // r14d
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // edx
  int v13; // edx

  v4 = 0;
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(WdfDriverGlobals, a2);
    if ( i >= (unsigned int)result )
      break;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
            WdfDriverGlobals,
            a2,
            i);
    v11 = v10;
    if ( *(_BYTE *)v10 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(unsigned __int16 *)(v10 + 2);
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v12,
          9,
          63,
          (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
          i,
          *(_WORD *)(v10 + 2));
      }
      if ( *(_BYTE *)v11 == 2 && (*(_BYTE *)(v11 + 2) & 3) == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = *(unsigned __int16 *)(v11 + 6);
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v13,
            9,
            64,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            *(_WORD *)(v11 + 6),
            *(_DWORD *)(v11 + 8));
        }
        v5 = (v4 != 0) + 1;
        v4 += *(unsigned __int16 *)(v11 + 6);
      }
      else
      {
        ++v4;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
