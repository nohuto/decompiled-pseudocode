/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1C02C6D80
 * Callers:
 *     <none>
 * Callees:
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C00D0A54 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     GreRemoveFontResourceW @ 0x1C0290E90 (GreRemoveFontResourceW.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02C435C (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        const unsigned __int16 *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r15d
  _BYTE v17[4]; // [rsp+70h] [rbp-138h] BYREF
  int v18; // [rsp+74h] [rbp-134h]
  unsigned __int16 v19[80]; // [rsp+C0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset_0(v17, 0, 0x48uLL);
  v14 = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
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
    if ( (unsigned int)ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v17, a6) )
    {
      if ( v18 )
      {
        v9 = (struct tagDESIGNVECTOR *)v17;
        v14 = 4 * v18 + 8;
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
    v11 = GreRemoveFontResourceW((Gre::Base *)v10, a2, a3, a4, a5, v9, v14);
  if ( v10 && v10 != v19 )
    FreeTmpBuffer(v10, v12, v13);
  return v11;
}
