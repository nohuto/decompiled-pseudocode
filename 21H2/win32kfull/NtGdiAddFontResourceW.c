/*
 * XREFs of NtGdiAddFontResourceW @ 0x1C00F9360
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreAddFontResourceWInternal @ 0x1C00F9550 (GreAddFontResourceWInternal.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C00F9694 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02AC728 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v16; // [rsp+30h] [rbp-188h]
  _DWORD v18[20]; // [rsp+80h] [rbp-138h] BYREF
  unsigned __int16 v19[80]; // [rsp+D0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset(v18, 0, 0x48uLL);
  v12 = 0;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0
    || a4 == 0x80000000 && PsGetCurrentProcess(v14, v13) != gpepCSRSS )
  {
    return 0LL;
  }
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 > 0x414 )
        v11 = 0;
      else
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v19;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v18, a6) )
    {
      if ( v18[1] )
      {
        v9 = (struct tagDESIGNVECTOR *)v18;
        v12 = 4 * v18[1] + 8;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    LODWORD(v16) = v12;
    v11 = GreAddFontResourceWInternal(v10, a2, a3, a4, a5, v9, v16);
  }
  if ( v10 )
  {
    if ( v10 != v19 )
      FreeTmpBuffer(v10);
  }
  return v11;
}
