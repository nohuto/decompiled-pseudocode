__int64 __fastcall HUBUCX_NotifyForwardProgress(__int64 a1)
{
  __int64 v1; // rdx
  bool v3; // zf
  __int64 v4; // rax
  int v5; // eax
  int v6; // edi
  __int64 v8; // [rsp+28h] [rbp-21h]
  _DWORD v9[2]; // [rsp+50h] [rbp+7h] BYREF
  _DWORD *v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+64h] [rbp+1Bh]
  _DWORD v13[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int64 v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v1 = *(_QWORD *)(a1 + 32);
  v19 = 0;
  v13[0] = 1;
  v15 = 4096;
  v3 = *(_BYTE *)(a1 + 240) == 0;
  v4 = *(_QWORD *)(a1 + 248);
  v13[1] = 40;
  v16 = 1;
  v14 = v4;
  if ( v3 )
    v5 = *(unsigned __int16 *)(a1 + 1128);
  else
    v5 = *(unsigned __int16 *)(a1 + 88);
  v9[1] = 0;
  v12 = 0;
  v18 = v5;
  v17 = *(_QWORD *)(a1 + 1104);
  v9[0] = 1;
  v10 = v13;
  v11 = 40;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1520))(
         WdfDriverGlobals,
         v1,
         0LL,
         4789263LL,
         v9,
         0LL,
         0LL,
         0LL,
         0LL);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x47u,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v8);
  }
  return (unsigned int)v6;
}
