__int64 __fastcall InitializeResetActionWorkItem(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+48h] [rbp-38h] BYREF
  __int128 v8; // [rsp+4Ch] [rbp-34h]
  int v9; // [rsp+5Ch] [rbp-24h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]
  void *v14; // [rsp+78h] [rbp-8h]

  v9 = 0;
  v13 = 0LL;
  v14 = off_1C006A120;
  v10 = 1;
  v6[2] = 1LL;
  v11 = 1;
  v6[1] = EvtResetActionWorkItem;
  v12 = a3;
  v8 = 0LL;
  v7 = 56;
  v6[0] = 24LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, _QWORD *))(WdfFunctions_01015 + 3032))(
             WdfDriverGlobals,
             v6,
             &v7,
             a1);
  v5 = result;
  if ( (int)result >= 0 )
  {
    *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *a1,
                  off_1C006A120)
              + 24) = HUBUCX_EvtResetActionCompletion;
    return v5;
  }
  return result;
}
