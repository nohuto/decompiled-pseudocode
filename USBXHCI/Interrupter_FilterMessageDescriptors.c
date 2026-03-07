__int64 __fastcall Interrupter_FilterMessageDescriptors(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int i; // ebp
  int v11; // edx
  __int128 *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int128 v15; // xmm1
  __int128 v16; // [rsp+48h] [rbp-70h] BYREF
  __int128 v17; // [rsp+58h] [rbp-60h]

  v16 = 0LL;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2328))(WdfDriverGlobals);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2384))(WdfDriverGlobals, v7);
  v9 = 0;
  for ( i = result; v9 < i; ++v9 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
               WdfDriverGlobals,
               v7,
               v9);
    v12 = (__int128 *)result;
    if ( *(_BYTE *)(result + 1) == 2 && (*(_BYTE *)(result + 4) & 3) == 3 )
    {
      if ( a4 )
      {
        v13 = *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) + 1;
        if ( a4 >= v13 )
        {
          a4 -= v13;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v11,
              9,
              61,
              (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
              a3,
              v9);
          }
          _BitScanReverse(&v14, 2 * a4 - 1);
          v16 = *v12;
          v15 = v12[1];
          DWORD2(v16) = ~(1 << v14);
          v17 = v15;
          HIDWORD(v16) = -2;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD))(WdfFunctions_01023
                                                                                               + 2376))(
                     WdfDriverGlobals,
                     v7,
                     &v16,
                     v9);
          a4 = 0;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v11,
            9,
            60,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            a3,
            v9);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
          WdfDriverGlobals,
          v7,
          v9);
        result = 0xFFFFFFFFLL;
        --v9;
        --i;
      }
    }
  }
  return result;
}
