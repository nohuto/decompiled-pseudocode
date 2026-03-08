/*
 * XREFs of AlpcpExposeWorkOnBehalfAttribute @ 0x1407CE2D0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

char __fastcall AlpcpExposeWorkOnBehalfAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  SIZE_T v5; // rax
  __int64 v6; // r10
  __int64 Source2; // [rsp+38h] [rbp+10h] BYREF

  Source2 = 0LL;
  LODWORD(v5) = *(_DWORD *)(a2 + 40);
  if ( (v5 & 0x80u) == 0LL )
  {
    v6 = *(_QWORD *)(a2 + 24);
    LOBYTE(v5) = *(_DWORD *)(a1 + 416) & 6;
    if ( (_BYTE)v5 == 2 )
    {
      if ( v6 )
      {
        LOBYTE(v5) = *(_DWORD *)(v6 + 416) & 6;
        if ( (_BYTE)v5 == 4 )
        {
          *a3 = *(_QWORD *)(a2 + 168);
          v5 = RtlCompareMemory((const void *)(a2 + 168), &Source2, 8uLL);
          if ( v5 != 8 )
            *a4 |= 0x2000000u;
        }
      }
    }
  }
  return v5;
}
