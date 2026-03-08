/*
 * XREFs of MiAssignSoftwareWsleRegion @ 0x14039751C
 * Callers:
 *     MiInitializeSystemVa @ 0x140B60308 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiAssignSoftwareWsleRegion(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int16 v10; // ax
  __int64 result; // rax
  RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-49h] BYREF
  int v13; // [rsp+38h] [rbp-39h]
  _DWORD v14[9]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v15; // [rsp+60h] [rbp-11h]
  _BYTE v16[64]; // [rsp+68h] [rbp-9h] BYREF

  memset(v14, 0, 12);
  memset(&v14[6], 0, 12);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v16, 0, sizeof(v16));
  BitMapHeader.Buffer = (unsigned int *)v16;
  if ( (MI_READ_PTE_LOCK_FREE(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0 )
  {
    v4 = 0;
    v5 = (__int64)((8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
    v6 = 0LL;
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v5) )
        v16[v6 >> 3] |= 1 << (v4 & 7);
      v5 += 8LL;
      ++v4;
      ++v6;
    }
    while ( v4 < 0x200 );
  }
  v14[5] = 1;
  v7 = a2 & 0xFFFFFF8000000000uLL;
  v8 = &v14[1];
  v13 = 0;
  *(_QWORD *)&v14[3] = 0x1000000000LL;
  v9 = 2LL;
  v15 = 0x80000000LL;
  do
  {
    v10 = ExGenRandom(1);
    *v8 = v7
        + ((unsigned __int64)RtlFindClearBitsAndSet(
                               &BitMapHeader,
                               ((unsigned __int64)(v8[1] + 0x3FFFFFFFLL) >> 30) + 1,
                               v10 & 0x1FF) << 30);
    v8 += 3;
    --v9;
  }
  while ( v9 );
  qword_140C66CB8 = *(_QWORD *)&v14[1];
  qword_140C66CC0 = *(_QWORD *)&v14[1];
  qword_140C66CC8 = *(_QWORD *)&v14[1];
  qword_140C66BD8 = v15;
  qword_140C66BD0 = *(_QWORD *)&v14[7];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2960LL) = *(_QWORD *)&v14[7];
  result = qword_140C66BD8;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2968LL) = qword_140C66BD8;
  return result;
}
