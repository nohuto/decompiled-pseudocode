__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD v13[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h]
  __int64 v15; // [rsp+40h] [rbp-29h]
  __int64 v16; // [rsp+48h] [rbp-21h]
  _DWORD v17[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]

  v13[1] = 0;
  v16 = 0LL;
  v6 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v9, v10);
  v14 = 0LL;
  v13[0] = 7;
  v15 = v7;
  if ( qword_1C013B748 )
    v14 = *(_QWORD *)(*(_QWORD *)(qword_1C013B748 + 64) + 152LL);
  v22 = 0;
  v21 = 0;
  v20 = 0LL;
  v26 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = 6;
  v17[1] = 64;
  v23 = 48;
  v24 = v7;
  v25 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, 0x100000000LL);
  LOBYTE(v11) = v6;
  return SMgrGdiCallout(
           v13,
           0x100000000LL,
           v11,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
