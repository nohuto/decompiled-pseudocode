/*
 * XREFs of ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1C0169DE0
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0020FF0 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetMultiByteSizeFromUnicodeString(__int64 a1, ULONG *a2)
{
  ULONG v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax

  *a2 = 0;
  RtlUnicodeToMultiByteSize(a2, *(PCWCH *)(a1 + 8), *(_DWORD *)a1);
  v3 = *a2;
  v4 = -1;
  v5 = *a2 + 2;
  if ( v5 >= *a2 )
    v4 = *a2 + 2;
  *a2 = v4;
  return v5 >= v3 && v4 < 0x7FFFFFFF;
}
