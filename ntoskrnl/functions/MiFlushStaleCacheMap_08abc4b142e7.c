__int64 __fastcall MiFlushStaleCacheMap(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  _BYTE *v4; // r8
  char *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  _BYTE v12[176]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = v2;
  do
  {
    v8 = (2
        * (((unsigned __int8)v2 & (unsigned __int8)((1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1)) - (_BYTE)v7)) & 0x1F;
    v9 = (unsigned int)(*(_DWORD *)(a1
                                  + 4
                                  * ((unsigned __int64)(2
                                                      * (((unsigned int)v2 & ((unsigned int)(1LL << ((unsigned __int8)dword_140C65760 - 12))
                                                                            - 1))
                                                       - (unsigned int)v7)) >> 5)
                                  + 44) >> v8);
    LOBYTE(v9) = v9 & 3;
    if ( (_BYTE)v9 == 1 )
    {
      if ( !v4 )
      {
        v4 = v12;
        v5 = &v12[48];
      }
      *(_QWORD *)v5 = v2;
      v5 += 8;
      if ( v5 == v4 + 176 )
      {
        *(_QWORD *)v4 = 0LL;
        *((_DWORD *)v4 + 2) = 131248;
        *((_QWORD *)v4 + 4) = 0LL;
        *((_QWORD *)v4 + 5) = 0x10000LL;
        if ( (unsigned int)((__int64 (*)(void))MiFlushCacheMdl)() )
          return 1;
        v7 = *(_QWORD *)(a1 + 24);
        v4 = 0LL;
      }
    }
    ++v6;
    ++v2;
  }
  while ( v6 < 0x200 );
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    v10 = (unsigned int)((v5 - v4 - 48) >> 3) << 12;
    *((_QWORD *)v4 + 5) = v10;
    *((_WORD *)v4 + 4) = 8 * ((v10 >> 12) + 6);
    *((_WORD *)v4 + 5) = 2;
    if ( (unsigned int)MiFlushCacheMdl(v8, v9, v4, v7) )
      return 1;
  }
  return v3;
}
