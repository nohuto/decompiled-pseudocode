__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        unsigned int *a2,
        void **a3)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v11; // [rsp+50h] [rbp-9h] BYREF
  int v12; // [rsp+58h] [rbp-1h] BYREF
  int v13; // [rsp+5Ch] [rbp+3h]
  int v14; // [rsp+60h] [rbp+7h]
  unsigned int v15; // [rsp+64h] [rbp+Bh]
  void *v16; // [rsp+68h] [rbp+Fh]
  _DWORD v17[4]; // [rsp+70h] [rbp+17h] BYREF

  v17[3] = 0;
  v15 = 0;
  v16 = 0LL;
  v17[0] = 1886220131;
  v12 = 1886220131;
  v5 = *((_QWORD *)this + 1);
  v17[1] = -1073741823;
  v17[2] = 1;
  v13 = -1073741823;
  v14 = 2;
  v11 = 24;
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
         v5,
         v17,
         16LL,
         &v12,
         &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SendSyncMessage returns error from host. Returning 0x%I64x",
      v8,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v8;
  }
  if ( v11 != 24 )
  {
    v9 = v11;
LABEL_5:
    WdLogSingleEntry2(3LL, v9, -1073741823LL);
    LODWORD(v8) = -1073741823;
    return (unsigned int)v8;
  }
  if ( v14 != 2 )
  {
    v9 = v14;
    goto LABEL_5;
  }
  LODWORD(v8) = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, v13, this);
  }
  else
  {
    *a2 = v15;
    *a3 = v16;
  }
  return (unsigned int)v8;
}
