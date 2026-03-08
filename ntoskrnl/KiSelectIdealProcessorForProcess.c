/*
 * XREFs of KiSelectIdealProcessorForProcess @ 0x1402968A0
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x140296818 (KiSetIdealNodeProcessByGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectIdealProcessorForProcess(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v5; // r8d
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 168);
  v5 = *((unsigned __int16 *)a2 + 4);
  v6 = *a2 & *(_QWORD *)(a1 + 128);
  if ( v3 )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 116) & 0x3F;
    v8 = ~((1LL << v7) - 1) & v3;
    do
    {
      v9 = v8 & ~(1LL << v7);
      v8 = v3;
      if ( v9 )
        v8 = v9;
      _BitScanForward64((unsigned __int64 *)&v7, v8);
      v10 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v5 << 6) + v7)]] + 34928) & v2;
    }
    while ( !v10 );
    _BitScanForward64(&v6, v10);
    *(_BYTE *)(a1 + 116) = v6;
  }
  else
  {
    _BitScanForward64(&v6, v6);
  }
  return LOWORD(KiProcessorNumberToIndexMappingTable[(unsigned int)(v6 + (v5 << 6))]);
}
