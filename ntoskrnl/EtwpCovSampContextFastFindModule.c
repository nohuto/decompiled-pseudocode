__int64 __fastcall EtwpCovSampContextFastFindModule(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v6; // r11
  __int64 v8; // rdx

  v3 = *(_DWORD *)(a1 + 1196) >> 5;
  v4 = 0LL;
  v5 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
  v6 = v5 & *(_QWORD *)a2;
  if ( v3 )
  {
    v8 = *(_QWORD *)(a1 + 1200)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)(v3 - 1));
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v8 + 8)) )
      {
        if ( !v8 )
          return 0LL;
        if ( *(_DWORD *)(v8 + 32) == *(_DWORD *)(a2 + 16)
          && *(_DWORD *)(v8 + 36) == *(_DWORD *)(a2 + 20)
          && *(_QWORD *)(v8 + 40) == *(_QWORD *)(a2 + 8)
          && *(_DWORD *)(v8 + 160) == *(_DWORD *)(a2 + 24) )
        {
          *(_DWORD *)(v8 + 136) = MEMORY[0xFFFFF78000000320];
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64)) <= 1 )
            __fastfail(0xEu);
          v4 = v8;
        }
        *a3 = v4;
        return v8;
      }
    }
  }
  return 0LL;
}
