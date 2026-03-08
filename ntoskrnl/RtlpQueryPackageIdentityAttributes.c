/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x140298538
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402983B0 (RtlQueryPackageClaims.c)
 *     EtwpQueryPsmKey @ 0x1409E4448 (EtwpQueryPsmKey.c)
 * Callees:
 *     SeQuerySecurityAttributesToken @ 0x14070BAA0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(int a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  unsigned __int8 v9; // si
  int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  result = SeQuerySecurityAttributesToken(a1, (unsigned int)&qword_140001A38, v10, a3, 816, (__int64)&v13);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    if ( v10 == 1 )
      return result;
    result = SeQuerySecurityAttributesToken(a1, (unsigned int)&qword_140001A38, 1, a3, 816, (__int64)&v13);
    if ( (int)result < 0 )
      return result;
    v9 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221226021LL;
  if ( a4 )
  {
    if ( v9 )
      v12 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v12 = 0LL;
    *a4 = v12;
  }
  if ( v5 )
  {
    *v5 |= (2LL * v9) | 1;
    if ( (unsigned int)SeQuerySecurityAttributesToken(a1, (unsigned int)&qword_140001A18, 1, 0, 0, (__int64)&v13) == -1073741789 )
      *v5 |= 4uLL;
    if ( (unsigned int)SeQuerySecurityAttributesToken(a1, (unsigned int)&qword_140001A08, 1, 0, 0, (__int64)&v13) == -1073741789 )
      *v5 |= 8uLL;
  }
  return 0LL;
}
