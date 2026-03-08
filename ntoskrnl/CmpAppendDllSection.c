/*
 * XREFs of CmpAppendDllSection @ 0x140B31860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAppendDllSection(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  *a1 ^= a2;
  a1[1] ^= a2;
  a1[2] ^= a2;
  a1[3] ^= a2;
  a1[4] ^= a2;
  a1[5] ^= a2;
  a1[6] ^= a2;
  a1[7] ^= a2;
  a1[8] ^= a2;
  a1[9] ^= a2;
  a1[10] ^= a2;
  a1[11] ^= a2;
  a1[12] ^= a2;
  a1[13] ^= a2;
  a1[14] ^= a2;
  a1[15] ^= a2;
  v2 = a1 + 15;
  v2[1] ^= a2;
  v2[2] ^= a2;
  v2[3] ^= a2;
  v2[4] ^= a2;
  v2[5] ^= a2;
  v2[6] ^= a2;
  v2[7] ^= a2;
  v2[8] ^= a2;
  v2[9] ^= a2;
  v2 -= 15;
  *(_DWORD *)v2 ^= a2;
  v3 = a2;
  v4 = v2;
  v5 = *((unsigned int *)v2 + 49);
  if ( v3 )
  {
    do
    {
      v4[v5 + 24] ^= v3;
      v6 = __ROR8__(v3, v5);
      v3 = v6 ^ (1LL << v6);
      --v5;
    }
    while ( v5 );
  }
  v7 = ((__int64 (__fastcall *)(__int64))((char *)v4 + *((unsigned int *)v4 + 506)))(v5);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 272))(v7 + 1944, 1LL);
}
