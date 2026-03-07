__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  char v7; // cl
  __int64 v8; // rsi
  char v9; // r15
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v15; // [rsp+28h] [rbp-10h]

  v7 = *(_BYTE *)(a3 - 1);
  v8 = a3 + a5;
  v9 = 0;
  if ( v7 == 4 )
  {
    if ( ((*(_BYTE *)(a1 + 116) | a2) & 1) == 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
      v9 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 - 5) != (*(_BYTE *)(a3 - 8) ^ (unsigned __int8)(*(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6))) )
        RtlpAnalyzeHeapFailure(a1, a3 - 16);
    }
    LOWORD(v11) = *(_WORD *)(a3 - 8) + a5;
    *(_WORD *)(a3 - 8) = v11;
    *(_BYTE *)(a3 - 2) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 - 5) = v11 ^ *(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6);
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v8 - 2) = a5 >> 4;
  }
  else
  {
    if ( v7 == 5 )
    {
      LOWORD(v11) = *(_WORD *)(a3 - 4) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v7 & 0x40) != 0 )
    {
      LOWORD(v11) = *(_WORD *)(a3 + 16LL * (v7 & 0x3F) - 4);
    }
    else if ( (v7 & 0x3F) == 0x3F )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v12 = *(_DWORD *)(a3 - 8);
        LOWORD(v15) = v12;
        if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
          v15 = *(_DWORD *)(a1 + 136) ^ v12;
        v13 = v15;
      }
      else
      {
        v13 = *(_WORD *)(a3 - 8);
      }
      v11 = *(_QWORD *)(a3 + 16LL * v13 - 16);
    }
    else
    {
      LOWORD(v11) = v7 & 0x3F;
    }
    *(_BYTE *)(v8 - 2) = a5 >> 4;
    *(_BYTE *)(a3 - 1) = (a5 >> 4) | *(_BYTE *)(a3 - 1) & 0xC0 | 0x40;
  }
  *(_BYTE *)(v8 - 1) = 5;
  *(_WORD *)(v8 - 4) = a5 + v11;
  *(_DWORD *)(v8 - 8) = a6;
  if ( v9 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v8;
}
