__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdi

  v2 = a2 + 2;
  v4 = (_QWORD *)a2[2];
  v6 = (__int64)(v4 - 1);
  while ( 1 )
  {
    v9 = *v4 - 8LL;
    if ( v2 == v4 )
      break;
    v7 = *v4;
    v8 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v8 != v4 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( a1[10] == v6 )
      a1[10] = 0LL;
    if ( a1[9] == v6 )
      a1[9] = 0LL;
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1, v6);
    v6 = v9;
    v4 = (_QWORD *)(v9 + 8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 1664))(
           WdfDriverGlobals,
           *a2,
           v6);
}
