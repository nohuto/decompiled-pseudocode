__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 *v7; // rax
  unsigned int v9; // r8d
  __int64 v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  bool v15; // cc
  __int64 v16; // rcx

  v1 = *(_QWORD *)(a1 + 1040);
  if ( !*(_BYTE *)(v1 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 200), 0, 0) )
  {
    v3 = *(unsigned int *)(a1 + 1092);
    if ( (*(_DWORD *)(a1 + 1136) & 0x4000) != 0 )
    {
      v4 = 0;
      if ( (_DWORD)v3 )
      {
        do
        {
          v5 = *(_QWORD *)(a1 + 8LL * v4);
          v6 = *(_QWORD *)(a1 + 8LL * v4 + 512);
          if ( !*(_BYTE *)(v5 + 28) )
          {
            v7 = *(unsigned __int64 **)(v5 + 64);
            if ( *(_BYTE *)(v5 + 29) )
            {
              if ( *v7 < v6 )
                return 0LL;
            }
            else if ( *(_DWORD *)v7 - (int)v6 < 0 )
            {
              return 0LL;
            }
          }
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 1092) );
      }
    }
    else if ( (_DWORD)v3 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v3 - 1));
      v11 = (_DWORD *)(a1 + 520);
      do
      {
        v12 = *((_QWORD *)v11 - 65);
        if ( v12 )
        {
          v13 = v11[1];
          v14 = *(_DWORD *)(v12 + 164);
          v15 = v13 <= v14;
          if ( v13 == v14 )
          {
            if ( *v11 > *(_DWORD *)(v12 + 160) )
              return 0LL;
            v15 = v13 <= v14;
          }
          if ( !v15 )
            return 0LL;
        }
        ++v9;
        v11 += 2;
      }
      while ( v9 < (unsigned int)v3 );
      if ( v10 )
      {
        LOBYTE(v3) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v10, v3, 0);
      }
    }
    if ( (*(_DWORD *)(a1 + 1136) & 0x8000) != 0 )
    {
      v16 = *(_QWORD *)(v1 + 32);
      if ( *(_BYTE *)(v16 + 56) )
        ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(v16 + 8));
    }
  }
  return 1LL;
}
