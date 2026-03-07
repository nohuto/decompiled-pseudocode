__int64 __fastcall NtGdiAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        ULONG64 a5)
{
  __int64 v5; // r12
  _BYTE *v6; // r15
  int v7; // ebx
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  unsigned int v14; // [rsp+30h] [rbp-C8h] BYREF
  int v15; // [rsp+34h] [rbp-C4h]
  unsigned int v16; // [rsp+38h] [rbp-C0h]
  unsigned int v17; // [rsp+40h] [rbp-B8h]
  _BYTE *v18; // [rsp+48h] [rbp-B0h]
  unsigned int v19[2]; // [rsp+50h] [rbp-A8h]
  struct tagDOWNLOADFONTHEADER *v20; // [rsp+58h] [rbp-A0h]
  _BYTE v21[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v14 = a2;
  v20 = a1;
  v16 = a2;
  v18 = a3;
  v17 = a4;
  v9 = 1;
  v15 = 1;
  v10 = 0LL;
  memset_0(v21, 0, 0x48uLL);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v11) < 0 )
    return 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v12 = (_DWORD *)a5;
  if ( !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
    {
      v9 = 0;
      v15 = 0;
    }
    else
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      memmove(v21, v6, (unsigned int)v5);
      v6 = v21;
      v18 = v21;
      if ( v5 != 4LL * v22 + 8 )
      {
        v9 = 0;
        v15 = 0;
      }
      v7 = v14;
    }
  }
  else
  {
    v6 = 0LL;
    v18 = 0LL;
  }
  if ( v9 )
  {
    v14 = 0;
    v10 = GreAddFontMemResourceEx(a1, v7, (struct tagDESIGNVECTOR *)v6, v5, &v14);
    *(_QWORD *)v19 = v10;
    if ( v10 )
    {
      if ( a5 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = v14;
    }
  }
  return v10;
}
