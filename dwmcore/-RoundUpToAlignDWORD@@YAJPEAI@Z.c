/*
 * XREFs of ?RoundUpToAlignDWORD@@YAJPEAI@Z @ 0x1800447F0
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180044740 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800BB78C (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundUpToAlignDWORD(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx

  v1 = -2147024362;
  v2 = (*a1 + 3) & 0xFFFFFFFC;
  if ( v2 >= *a1 )
  {
    *a1 = v2;
    return 0;
  }
  return v1;
}
