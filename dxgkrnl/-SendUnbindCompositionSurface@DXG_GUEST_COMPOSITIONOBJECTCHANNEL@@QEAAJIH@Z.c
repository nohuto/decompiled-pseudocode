__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendUnbindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v9; // [rsp+58h] [rbp+17h] BYREF
  int v10; // [rsp+60h] [rbp+1Fh] BYREF
  int v11; // [rsp+64h] [rbp+23h]
  int v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+6Ch] [rbp+2Bh]
  _DWORD v14[6]; // [rsp+70h] [rbp+2Fh] BYREF

  v14[5] = 0;
  v13 = 0;
  v14[3] = a2;
  v4 = *((_QWORD *)this + 1);
  v14[0] = 1886220131;
  v10 = 1886220131;
  v14[4] = a3;
  v14[1] = -1073741823;
  v14[2] = 7;
  v11 = -1073741823;
  v12 = 8;
  v9 = 16;
  v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v4 + 32LL))(
         v4,
         v14,
         24LL,
         &v10,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(2LL, v5, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v6,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  if ( v9 != 16 )
  {
    v7 = v9;
LABEL_5:
    WdLogSingleEntry2(3LL, v7, -1073741823LL);
    LODWORD(v6) = -1073741823;
    return (unsigned int)v6;
  }
  if ( v12 != 8 )
  {
    v7 = v12;
    goto LABEL_5;
  }
  LODWORD(v6) = v11;
  if ( v11 < 0 )
    WdLogSingleEntry2(3LL, v11, this);
  return (unsigned int)v6;
}
