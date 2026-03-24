/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x1C02AE030
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B8E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     GreAddFontMemResourceEx @ 0x1C028A458 (GreAddFontMemResourceEx.c)
 *     GreRemoveFontMemResourceEx @ 0x1C028B458 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        ULONG64 a5)
{
  __int64 v5; // r12
  _DWORD *v6; // r15
  int v7; // ebx
  int v9; // edi
  __int64 v10; // r14
  _DWORD *v11; // rsi
  unsigned int v13; // [rsp+30h] [rbp-C8h] BYREF
  int v14; // [rsp+34h] [rbp-C4h]
  unsigned int v15; // [rsp+38h] [rbp-C0h]
  unsigned int v16; // [rsp+40h] [rbp-B8h]
  _DWORD *v17; // [rsp+48h] [rbp-B0h]
  unsigned int v18[2]; // [rsp+50h] [rbp-A8h]
  struct tagDOWNLOADFONTHEADER *v19; // [rsp+58h] [rbp-A0h]
  _DWORD v20[20]; // [rsp+60h] [rbp-98h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v13 = a2;
  v19 = a1;
  v15 = a2;
  v17 = a3;
  v16 = a4;
  v9 = 1;
  v14 = 1;
  v10 = 0LL;
  memset(v20, 0, 0x48uLL);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v11 = (_DWORD *)a5;
  if ( !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
    {
      v9 = 0;
      v14 = 0;
    }
    else
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      memmove(v20, v6, (unsigned int)v5);
      v6 = v20;
      v17 = v20;
      if ( v5 != 4LL * v20[1] + 8 )
      {
        v9 = 0;
        v14 = 0;
      }
      v7 = v13;
    }
  }
  else
  {
    v6 = 0LL;
    v17 = 0LL;
  }
  if ( v9 )
  {
    v13 = 0;
    v10 = GreAddFontMemResourceEx(a1, v7, (struct tagDESIGNVECTOR *)v6, v5, &v13);
    *(_QWORD *)v18 = v10;
    if ( v10 )
    {
      if ( a5 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = v13;
    }
  }
  return v10;
}
