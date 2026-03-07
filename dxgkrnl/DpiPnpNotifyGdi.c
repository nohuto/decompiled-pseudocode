__int64 __fastcall DpiPnpNotifyGdi(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v12; // rcx
  __int128 v13; // [rsp+38h] [rbp-61h] BYREF
  __int128 v14; // [rsp+48h] [rbp-51h]
  _DWORD v15[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v16; // [rsp+68h] [rbp-31h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  __int64 v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+94h] [rbp-5h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  __int64 v23; // [rsp+A0h] [rbp+7h]

  v13 = 0LL;
  v14 = 0LL;
  if ( a1
    && !a2
    && (v12 = *(_QWORD *)(a1 + 64), *((_QWORD *)&v13 + 1) = *(_QWORD *)(v12 + 152), *(_DWORD *)(v12 + 16) == 1953656900)
    && *(_DWORD *)(v12 + 20) == 2 )
  {
    BYTE12(v14) = *(_BYTE *)(v12 + 3920) >> 7;
    BYTE14(v14) = *(_DWORD *)(v12 + 4000) == 3;
    v9 = *(_QWORD *)(v12 + 2672);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v14 = a2;
  LODWORD(v13) = 7;
  if ( !a1 || (BYTE13(v14) = 1, qword_1C013B740 != a1) )
    BYTE13(v14) = 0;
  HIBYTE(v14) = a5;
  v17 = 0LL;
  v21 = a2;
  v19 = 0LL;
  v15[0] = 30;
  v15[1] = 72;
  v18 = 0LL;
  v16 = 0LL;
  v20 = 47;
  v22 = 0LL;
  v23 = v9;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, a4);
  LOBYTE(v10) = 1;
  return SMgrGdiCallout(&v13, a4, v10, (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0), a3, a6);
}
