__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // r8d
  int v7; // edx
  _DWORD *i; // r9
  int v9; // edx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  ULONG v13; // ecx
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a1, 1, 0);
  v5 = v14[0];
  if ( !v14[0] )
  {
    v13 = 6;
    goto LABEL_16;
  }
  v6 = *(_DWORD *)(v14[0] + 52LL);
  v7 = 0;
  for ( i = *(_DWORD **)(v14[0] + 32LL); v6; --v6 )
  {
    v7 += *i >> 1;
    i = (_DWORD *)((char *)i + (unsigned int)(4 * *i + 16));
  }
  v9 = 16 * v7;
  v10 = v9 + 32;
  if ( a3 )
  {
    if ( v10 <= a2 )
    {
      *(_DWORD *)a3 = 32;
      v11 = ((unsigned __int64)v10 - 32) >> 4;
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v11;
      *(_DWORD *)(a3 + 12) = v9;
      if ( (_DWORD)v11 )
      {
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 56);
      }
      else
      {
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 20) = 0;
        *(_DWORD *)(a3 + 24) = 0;
        *(_DWORD *)(a3 + 28) = 0;
      }
      RGNOBJ::vDownload((RGNOBJ *)v14, (void *)(a3 + 32));
      goto LABEL_9;
    }
    v13 = 87;
LABEL_16:
    EngSetLastError(v13);
    v10 = 0;
  }
LABEL_9:
  if ( !v15 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v14);
  if ( v5 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  return v10;
}
