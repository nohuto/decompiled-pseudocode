/*
 * XREFs of RtlpSetupExtendedBlock @ 0x14058BB08
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402237C8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  char v7; // cl
  char v8; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v15; // [rsp+28h] [rbp-20h]

  v7 = *(_BYTE *)(a3 - 1);
  v8 = 0;
  v10 = a3 + a5;
  if ( v7 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 - 5) != (*(_BYTE *)(a3 - 8) ^ (unsigned __int8)(*(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6))) )
        RtlpAnalyzeHeapFailure(a1, a3 - 16);
    }
    *(_WORD *)(a3 - 8) += a5;
    LOWORD(v11) = *(_WORD *)(a3 - 8);
    *(_BYTE *)(a3 - 2) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 - 5) = *(_BYTE *)(a3 - 8) ^ *(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6);
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
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
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(a3 - 1) = (a5 >> 4) | *(_BYTE *)(a3 - 1) & 0xC0 | 0x40;
  }
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v11;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v8 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
