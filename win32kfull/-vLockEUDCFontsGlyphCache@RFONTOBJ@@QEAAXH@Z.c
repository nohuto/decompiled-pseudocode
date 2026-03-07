void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 i; // rsi
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(v4 + 840);
  if ( v5 <= 0x20 )
  {
    v20[0] = *(_QWORD *)(v4 + 736);
    v20[1] = *(_QWORD *)(v4 + 728);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 856);
      v9 = *(_DWORD *)(*(_QWORD *)this + 840LL);
      if ( (unsigned int)v8 < v9 )
        break;
      v12 = (unsigned int)v8 - v9;
      if ( (unsigned int)v12 < 2 )
      {
        _mm_lfence();
        v11 = v20[v12];
        v10 = *(_QWORD *)this;
LABEL_8:
        if ( v11 )
        {
          if ( a2 )
          {
            v13 = *(_QWORD *)(v10 + 720);
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 120) < *(_QWORD *)(v11 + 120) )
                RFONTOBJ::vLockSystemTTGlyphCache(this);
            }
          }
          GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        }
      }
      ++v6;
      if ( !--v7 )
      {
        if ( a2 )
          RFONTOBJ::vLockSystemTTGlyphCache(this);
        return;
      }
    }
    _mm_lfence();
    v10 = *(_QWORD *)this;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 744LL) + 8 * v8);
    goto LABEL_8;
  }
  if ( a2 )
    RFONTOBJ::vLockSystemTTGlyphCache(this);
  v14 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v14 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    v22 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  v15 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v15 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
    v23 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  }
  v16 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 840LL); i = (unsigned int)(i + 1) )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 744) + 8 * i);
    if ( v18 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v18 + 504));
      v19 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    }
    v16 = *(_QWORD *)this;
  }
}
