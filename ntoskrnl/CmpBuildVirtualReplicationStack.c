/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x140A15FF8
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  _DWORD *Pool2; // r9
  __int64 result; // rax
  __int64 v11; // r8
  _WORD *v12; // rdx
  __int16 v13; // cx
  _WORD *v14; // rdx
  __int16 v15; // cx
  __int64 v16; // r10
  __int16 v17; // ax

  v6 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
  v7 = a1;
  *a4 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(48 * v6), 538987843LL);
  if ( !Pool2 )
    return 3221225626LL;
  LODWORD(v11) = 4;
  v12 = *(_WORD **)(a2 + 8);
  v13 = *(_OWORD *)a2;
  while ( 1 )
  {
    if ( *v12 == 92 )
    {
      LODWORD(v11) = v11 - 1;
      if ( !(_DWORD)v11 )
        break;
    }
    v13 -= 2;
    if ( !v13 )
    {
LABEL_21:
      ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    ++v12;
  }
  v14 = v12 + 1;
  v15 = v13 - 2;
  while ( v15 )
  {
    v16 = 6LL * (unsigned int)v11;
    *(_QWORD *)&Pool2[12 * (unsigned int)v11 + 2] = v14;
    do
    {
      if ( *v14 == 92 )
        break;
      LOWORD(Pool2[12 * (unsigned int)v11]) += 2;
      ++v14;
      v15 -= 2;
    }
    while ( v15 );
    v17 = Pool2[12 * (unsigned int)v11];
    LODWORD(v11) = v11 + 1;
    HIWORD(Pool2[2 * v16]) = v17;
    if ( !v15 )
      break;
    do
    {
      if ( *v14 != 92 )
        break;
      ++v14;
      v15 -= 2;
    }
    while ( v15 );
  }
  *a3 = v11;
  while ( (unsigned int)v11 > 1 )
  {
    if ( !v7 )
      goto LABEL_21;
    v11 = (unsigned int)(v11 - 1);
    Pool2[12 * v11 + 10] = *(_DWORD *)(v7 + 40) >> 31;
    v7 = *(_QWORD *)(v7 + 72);
  }
  Pool2[10] = 0;
  result = 0LL;
  *a4 = Pool2;
  return result;
}
