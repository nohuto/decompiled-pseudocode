/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1800E9DF0
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800E9330 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E9390 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E9600 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800688D0 (RtlCopySid.c)
 */

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  __int64 result; // rax
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // dx
  int v16; // r9d
  __int64 v17; // r8
  _OWORD *v18; // rdx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v13 = a3 & 0xFFFFFF20;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v19) )
    return 3221225591LL;
  v14 = a7[1];
  v15 = 4 * v14 + 20;
  if ( a5 )
    v15 = 4 * v14 + 36;
  v16 = a5 != 0LL;
  if ( a6 )
  {
    v16 |= 2u;
    v15 += 16;
  }
  v17 = v19[0];
  if ( !v19[0] || v19[0] + (unsigned __int64)v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v19[0] + 2LL) = v15;
  v18 = (_OWORD *)(v17 + 12);
  *(_BYTE *)(v17 + 1) = a3;
  *(_BYTE *)v17 = a8;
  *(_DWORD *)(v17 + 4) = a4;
  *(_DWORD *)(v17 + 8) = v16;
  if ( a5 )
  {
    *v18 = *a5;
    v18 = (_OWORD *)(v17 + 28);
  }
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(4 * v14 + 8, v18, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
