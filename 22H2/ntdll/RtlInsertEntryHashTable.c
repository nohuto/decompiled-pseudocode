/*
 * XREFs of RtlInsertEntryHashTable @ 0x180068B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x180068C6C (RtlpPopulateContext.c)
 */

char __fastcall RtlInsertEntryHashTable(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _BYTE *v4; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  a2[2] = a3;
  v4 = a4;
  ++*(_DWORD *)(a1 + 20);
  if ( a4 )
  {
    if ( !*a4 )
      RtlpPopulateContext(a1, a4, a3);
  }
  else
  {
    RtlpPopulateContext(a1, v10, a3);
    v4 = v10;
  }
  if ( **(_QWORD **)v4 == *(_QWORD *)v4 )
    ++*(_DWORD *)(a1 + 24);
  v7 = (__int64 *)*((_QWORD *)v4 + 1);
  v8 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  a2[1] = v7;
  *a2 = v8;
  *(_QWORD *)(v8 + 8) = a2;
  *v7 = (__int64)a2;
  return 1;
}
