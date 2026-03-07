__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r10
  _QWORD **v4; // rdi
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned int v10; // edi
  _OWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 456);
  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v12);
  v3 = *((_QWORD *)&v12[0] + 1);
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
  for ( i = *v4; ; i = (_QWORD *)*i )
  {
    v6 = i - 1;
    if ( v4 == i )
      break;
    v7 = *((_DWORD *)v6 + 6);
    v8 = 0LL;
    if ( v7 )
    {
      while ( v6[9 * v8 + 7] != *(_QWORD *)(*((_QWORD *)&v12[0] + 1) + 24LL) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_6;
      }
      v9 = &v6[9 * v8 + 5];
      if ( v9 )
      {
        *(_QWORD *)(a1 + 1656) = v9;
        return 4077;
      }
      break;
    }
LABEL_6:
    ;
  }
  v10 = 4065;
  *(_DWORD *)(a1 + 1564) = -2147482112;
  *(_DWORD *)(a1 + 1560) = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x2Cu,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      *(_QWORD *)(v3 + 24),
      v3);
  return v10;
}
