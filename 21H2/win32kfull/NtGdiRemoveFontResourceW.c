/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1C02AFD40
 * Callers:
 *     <none>
 * Callees:
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C010EA68 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     GreRemoveFontResourceW @ 0x1C028B530 (GreRemoveFontResourceW.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02ADFBC (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        WCHAR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  _DWORD v15[20]; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int16 v16[80]; // [rsp+C0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset(v15, 0, 0x48uLL);
  v12 = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v16;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( (unsigned int)ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v15, a6) )
    {
      if ( v15[1] )
      {
        v9 = (struct tagDESIGNVECTOR *)v15;
        v12 = 4 * v15[1] + 8;
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
    v11 = GreRemoveFontResourceW(v10, a2, a3, a4, a5, v9, v12);
  if ( v10 && v10 != v16 )
    FreeTmpBuffer(v10);
  return v11;
}
