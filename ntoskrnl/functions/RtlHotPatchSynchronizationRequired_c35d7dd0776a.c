__int64 __fastcall RtlHotPatchSynchronizationRequired(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        PRTL_BITMAP BitMapHeader,
        int a9,
        int a10,
        int a11,
        int a12,
        _BYTE *a13)
{
  _DWORD *v13; // r11
  unsigned int v15; // r10d
  int v16; // eax
  _DWORD *v17; // r8
  int v18; // edx
  bool v19; // cl
  int v20; // edi
  bool v21; // al
  int v22; // edx
  int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // r11
  _BYTE *v26; // rcx
  ULONG v27; // edx
  ULONG ClearBitsAndSet; // eax
  int v29; // eax

  v13 = a3;
  *a13 = 0;
  if ( a3 )
  {
    v15 = 2;
    if ( *a2 >= 3u )
      v15 = a2[6] + 2;
    do
    {
      v16 = *v13;
      v17 = v13;
      if ( !*v13 )
        break;
      v18 = *v13;
      v19 = 0;
      v20 = *v13++ & 0xFFF;
      v21 = v16 >= 0;
      if ( (v18 & 0xFC000) == 0x1C000 )
        v19 = v21;
      if ( v19 )
      {
        if ( v20 )
        {
          do
          {
            v22 = 0;
            v23 = a1 + *v13;
            if ( v15 != 2 )
              v22 = (_DWORD)v13 + 8;
            v24 = RtlpCheckFunctionPatchAppliedInOriginalImage(a1 + *v13, v22, (_DWORD)v17, a4, a6);
            if ( v24 == -1 )
              return 3221225595LL;
            if ( v24 == -2 )
            {
              if ( (v23 & 7) == 7 )
              {
LABEL_25:
                *a13 = 1;
                return 0LL;
              }
            }
            else if ( a7 )
            {
              v26 = (char *)BitMapHeader->Buffer + ((unsigned __int64)v24 >> 3);
              *v26 |= 1 << (v24 & 7);
            }
            v13 = (_DWORD *)(v25 + 4LL * v15);
          }
          while ( --v20 );
        }
      }
      else
      {
        v13 = &v17[v20 * v15 + 1];
      }
    }
    while ( v13 );
  }
  if ( a7 )
  {
    v27 = 0;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, v27);
      v27 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v29 = *(_DWORD *)(a7 + 6LL * ClearBitsAndSet);
      if ( v29 && (((_BYTE)a1 + (_BYTE)v29) & 7) == 7 )
        goto LABEL_25;
    }
  }
  return 0LL;
}
