__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edi
  _QWORD *v11; // rbx
  int v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+44h] [rbp-3Ch]
  int v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  void *v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A8h] [rbp+28h] BYREF
  int v23; // [rsp+ACh] [rbp+2Ch]

  v21 = 0LL;
  v15 = 0;
  v18 = 0LL;
  v23 = 0;
  v16 = 1;
  v17 = 1;
  v20 = off_1C0063040;
  v7 = a2 + 24;
  v8 = *a1;
  v19 = v7;
  v14 = 0LL;
  v13 = 56;
  v22 = 8;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, int *, int *, __int64 *))(WdfFunctions_01023
                                                                                                  + 3064))(
          WdfDriverGlobals,
          v8,
          4096LL,
          &v22,
          &v13,
          &v21);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72),
        v9,
        18,
        12,
        (__int64)&WPP_04b707390cf73fa06bfe0db05fea1528_Traceguids,
        v10);
    }
  }
  else
  {
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v21,
                      off_1C0063040);
    v11[2] = v21;
    *v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 176))(WdfDriverGlobals, v21);
    v11[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 184))(WdfDriverGlobals, v21);
    *a4 = v11 + 3;
    *a3 = v11;
  }
  return (unsigned int)v10;
}
