/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1407611FC
 * Callers:
 *     HvpViewMapUnCOWAndSealRange @ 0x140761148 (HvpViewMapUnCOWAndSealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByCaller(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  char v10; // al
  int v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    v11 = 0;
    v5 = a3;
    do
    {
      v8 = *(_QWORD *)(a2 + 24);
      v9 = (unsigned __int64)(v5 - v8) >> 12;
      v10 = *(_BYTE *)(v9 + a2 + 72);
      if ( (v10 & 2) != 0 )
      {
        CmSiProtectViewOfSection(
          (__int64)&v11,
          *(__int64 **)(a1 + 24),
          v5 + *(_QWORD *)(a2 + 56) - v8,
          4096LL,
          ((~v10 & 0xFC) << 29) | 2,
          (__int64)&v11);
        *(_BYTE *)(v9 + a2 + 72) &= 0xF5u;
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
