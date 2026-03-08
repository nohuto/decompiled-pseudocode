/*
 * XREFs of CmpDumpOneKeyBody @ 0x140A14530
 * Callers:
 *     CmpDumpKeyBodyList @ 0x140A143F8 (CmpDumpKeyBodyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 */

int __fastcall CmpDumpOneKeyBody(struct _KPROCESS *a1, __int64 a2, const void **a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  void *v7; // rcx
  PEPROCESS v8; // rcx
  _DWORD *v9; // rdi
  int v10; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  PEPROCESS v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v13 = a1;
  if ( a4 )
  {
    v9 = *(_DWORD **)(a4 + 8);
    if ( *(_QWORD *)(a4 + 32) != a2 )
    {
      v10 = *(unsigned __int16 *)a3 + 24;
      *(_DWORD *)(a4 + 16) += v10;
      if ( *(int *)(a4 + 20) >= 0 )
      {
        if ( (unsigned int)(v10 + *(_DWORD *)(a4 + 24)) <= *(_DWORD *)a4 )
        {
          *(_QWORD *)&v9[6 * *v9 + 2] = *(_QWORD *)(a2 + 24);
          LOWORD(v9[6 * *v9 + 4]) = *(_WORD *)a3;
          HIWORD(v9[6 * *v9 + 4]) = *(_WORD *)a3;
          *(_QWORD *)&v9[6 * *v9 + 6] = *(_QWORD *)(a4 + 40) - *(unsigned __int16 *)a3;
          memmove(*(void **)&v9[6 * *v9 + 6], a3[1], *(unsigned __int16 *)a3);
          v4 = *(unsigned __int16 *)a3;
          *(_QWORD *)(a4 + 40) -= v4;
          *(_DWORD *)(a4 + 24) += v10;
        }
        else
        {
          *(_DWORD *)(a4 + 20) = -2147483643;
        }
      }
      ++*v9;
    }
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v13 = 0LL;
    LODWORD(v4) = PsLookupProcessByProcessId(v7, &v13);
    v8 = v13;
    if ( (v4 & 0x80000000) != 0LL )
      v8 = 0LL;
    if ( v8 )
      LODWORD(v4) = ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
  return v4;
}
