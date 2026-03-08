/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x14076EC30
 * Callers:
 *     CmpEnlistKeyBody @ 0x14076EBCC (CmpEnlistKeyBody.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnlistKeyBodyWithKCB(signed __int64 a1, char a2)
{
  __int64 *v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // r11d
  __int64 v7; // rax
  __int64 **v8; // rcx

  v2 = (__int64 *)(a1 + 32);
  v3 = 0;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  v4 = 0;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  do
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v4 + 136), a1, 0LL) )
      goto LABEL_3;
    ++v4;
  }
  while ( v4 < 4 );
  if ( (a2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 8) + 120LL;
    v8 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 128LL);
    if ( *v8 != (__int64 *)v7 )
      __fastfail(3u);
    *v2 = v7;
    v2[1] = (__int64)v8;
    *v8 = v2;
    *(_QWORD *)(v7 + 8) = v2;
LABEL_3:
    *(_WORD *)(a1 + 48) |= 0x40u;
    return v3;
  }
  return (unsigned int)-1073741267;
}
