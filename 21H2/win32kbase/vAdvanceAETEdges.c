/*
 * XREFs of vAdvanceAETEdges @ 0x1C00BCCE0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0024D00 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall vAdvanceAETEdges(__int64 **a1)
{
  int v1; // r9d
  __int64 **v3; // rdx
  _QWORD *result; // rax
  int v6; // eax
  int v7; // r10d
  bool v8; // sf
  int v9; // eax
  int v10; // ecx

  v1 = *((_DWORD *)a1 + 4);
  v3 = (__int64 **)*a1;
  result = a1;
  do
  {
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      v3 = (__int64 **)*v3;
      --v1;
      *result = v3;
    }
    else
    {
      v6 = *((_DWORD *)v3 + 6);
      v7 = *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 8);
      v8 = v6 + *((_DWORD *)v3 + 5) < 0;
      *((_DWORD *)v3 + 5) += v6;
      v9 = *((_DWORD *)v3 + 5);
      *((_DWORD *)v3 + 3) = v7;
      if ( !v8 )
      {
        v10 = *((_DWORD *)v3 + 9);
        *((_DWORD *)v3 + 5) = v9 - *((_DWORD *)v3 + 7);
        *((_DWORD *)v3 + 3) = v7 + v10;
      }
      result = v3;
      v3 = (__int64 **)*v3;
    }
  }
  while ( v3 != a1 );
  *((_DWORD *)a1 + 4) = v1;
  return result;
}
