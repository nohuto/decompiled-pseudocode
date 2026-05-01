/*
 * XREFs of HamSetCommitProperties @ 0x1800116A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamSetCommitProperties(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741584;
  if ( !a3 )
    return (unsigned int)-1073741583;
  if ( a2 > a3 )
    return (unsigned int)-1073741776;
  v5 = -1LL;
  if ( a2 == -1LL )
  {
    *(_QWORD *)(a1 + 336) = -1LL;
    v6 = 0LL;
LABEL_13:
    *(_QWORD *)(a1 + 328) = v5;
    *(_QWORD *)(a1 + 288) = v6;
    *(_QWORD *)(a1 + 352) = a3;
    *(_QWORD *)(a1 + 344) = a2;
    *(_DWORD *)(a1 + 296) |= 4u;
    *(_QWORD *)(a1 + 320) |= 0xFuLL;
    return v3;
  }
  if ( is_mul_ok(a2, 0x5AuLL) )
  {
    *(_QWORD *)(a1 + 336) = 90 * a2 / 0x64;
    v7 = -1LL;
    if ( is_mul_ok(a2, 0x32uLL) )
      v7 = 50 * a2;
    v6 = v7 / 0x64;
    v5 = v6;
    goto LABEL_13;
  }
  return (unsigned int)-1073741584;
}
