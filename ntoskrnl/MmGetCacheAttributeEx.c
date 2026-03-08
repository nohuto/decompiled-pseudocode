/*
 * XREFs of MmGetCacheAttributeEx @ 0x14061C860
 * Callers:
 *     HalCreateCommonBufferFromMdl @ 0x14050FA20 (HalCreateCommonBufferFromMdl.c)
 *     MmGetCacheAttribute @ 0x14061C840 (MmGetCacheAttribute.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x14029C30C (MiIsPageInHugePfn.c)
 *     MiLookupIoPageNode @ 0x1403AB558 (MiLookupIoPageNode.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttributeEx(unsigned __int64 a1, int a2, _DWORD *a3)
{
  ULONG_PTR v5; // rbx
  int v6; // eax
  int v7; // eax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  if ( a1 >> 12 <= qword_140C65820 && ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    if ( !*(_WORD *)(48 * v5 - 0x21FFFFFFFFE0LL) && (struct _KTHREAD *)qword_140C67B08 != KeGetCurrentThread() )
      KeBugCheckEx(0x1Au, 0x1232uLL, v5, *(_BYTE *)(48 * v5 - 0x21FFFFFFFFDELL) & 7, 0LL);
    v6 = *(unsigned __int8 *)(48 * v5 - 0x21FFFFFFFFDELL) >> 6;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      return 3221225793LL;
    v6 = MiLookupIoPageNode(v5, 0);
    if ( v6 == 3 )
    {
      LOBYTE(v7) = MiIsPageInHugePfn(v5);
      if ( v7 )
      {
LABEL_14:
        *a3 = 1;
        return 0LL;
      }
      v6 = 3;
    }
  }
  switch ( v6 )
  {
    case 1:
      goto LABEL_14;
    case 0:
      *a3 = 0;
      return 0LL;
    case 2:
      *a3 = 2;
      return 0LL;
  }
  return 3221225711LL;
}
