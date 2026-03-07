char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        v11 = (unsigned __int8)*(_DWORD *)(a2 + 540);
        *(_DWORD *)(a2 + 540) = v11;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4 * v11 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v12 = *(_QWORD *)(a2 + 712);
    if ( v12 )
    {
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 32464), 0LL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(_QWORD *)(v12 + 32464) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v15 = *(_QWORD *)(a2 + 216);
        v16 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v15 + 8) != a2 + 216 || *v16 != a2 + 216 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 32464), 0LL);
    }
    v13 = *(_BYTE *)(a2 + 388);
    if ( v13 == 1 )
    {
      *(_DWORD *)(a2 + 116) |= 2u;
    }
    else if ( v13 == 5 )
    {
      v14 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
      if ( *(_BYTE *)(a2 + 391) )
        *(_QWORD *)(a2 + 1000) += v14;
      else
        *(_QWORD *)(a2 + 992) += v14;
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 976) = 0LL;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 976) = 0LL;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
