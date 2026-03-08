/*
 * XREFs of SepGetSidValuesDump @ 0x1405B6728
 * Callers:
 *     SepLogTokenSidManagement @ 0x1409C6C70 (SepLogTokenSidManagement.c)
 * Callees:
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepGetSidValuesDump(_DWORD *a1, _DWORD *a2)
{
  int v2; // edi
  __int64 Pool2; // rax
  __int64 v6; // rbp
  unsigned __int8 *v7; // r15
  char *v8; // r12
  unsigned int i; // r13d
  ULONG v10; // ebx

  v2 = 0;
  *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( !a1[4] )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(*a1 - 24), 1767073107LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = (unsigned __int8 *)(a1 + 6);
  v8 = (char *)Pool2;
  for ( i = 0; i < a1[4]; v8 += v10 )
  {
    v10 = 4 * v7[1] + 8;
    RtlCopySid(v10, v8, v7);
    v2 += v10;
    ++i;
    v7 += (4LL * v7[1] + 11) & 0xFFFFFFFCLL;
  }
  *a2 = v2;
  return v6;
}
