/*
 * XREFs of CcUnInitializeAsyncReadForNodeHelper @ 0x1403B95D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall CcUnInitializeAsyncReadForNodeHelper(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  if ( *(_QWORD *)(a3 + 232) )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = (_QWORD **)(*(_QWORD *)(a3 + 232) + 16LL * v4);
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        ExFreePoolWithTag(v6, 0x71576343u);
      }
      ++v4;
    }
    while ( v4 <= CcMaxNestingLevel );
    ExFreePoolWithTag(*(PVOID *)(a3 + 232), 0x71576343u);
    *(_QWORD *)(a3 + 232) = 0LL;
  }
  v8 = *(void **)(a3 + 256);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x71576343u);
    *(_QWORD *)(a3 + 256) = 0LL;
  }
  v9 = *(void **)(a3 + 264);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x71576343u);
    *(_QWORD *)(a3 + 264) = 0LL;
  }
  v10 = *(void **)(a3 + 280);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x71576343u);
    *(_QWORD *)(a3 + 280) = 0LL;
  }
  v11 = *(void **)(a3 + 272);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x71576343u);
    *(_QWORD *)(a3 + 272) = 0LL;
  }
  v12 = *(void **)(a3 + 240);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x71576343u);
    *(_QWORD *)(a3 + 240) = 0LL;
  }
  v13 = *(void **)(a3 + 248);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x71576343u);
    *(_QWORD *)(a3 + 248) = 0LL;
  }
  return 1;
}
