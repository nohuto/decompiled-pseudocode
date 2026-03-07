__int64 __fastcall NtGdiAddFontResourceW(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v18[4]; // [rsp+80h] [rbp-138h] BYREF
  int v19; // [rsp+84h] [rbp-134h]
  unsigned __int16 v20[80]; // [rsp+D0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  memset_0(v18, 0, 0x48uLL);
  v12 = 0;
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0
    || a4 == 0x80000000 && PsGetCurrentProcess(v14, v13, v15) != gpepCSRSS )
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
      v10 = v20;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v18, a6) )
    {
      if ( v19 )
      {
        v9 = (struct tagDESIGNVECTOR *)v18;
        v12 = 4 * v19 + 8;
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
    v11 = GreAddFontResourceWInternal(v10, a5, v9, v12);
  if ( v10 )
  {
    if ( v10 != v20 )
      FreeTmpBuffer(v10, v13, v15);
  }
  return v11;
}
