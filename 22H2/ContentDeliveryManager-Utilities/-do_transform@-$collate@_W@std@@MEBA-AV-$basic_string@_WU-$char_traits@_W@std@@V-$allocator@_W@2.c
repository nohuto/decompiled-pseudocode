/*
 * XREFs of ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800C8AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18009718C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     _Wcsxfrm @ 0x1800CF008 (_Wcsxfrm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::collate<wchar_t>::do_transform(
        const _Collvec *a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  size_t v8; // rax
  unsigned __int64 v9; // rcx
  const _Collvec *v10; // rdi
  _WORD *v11; // rcx
  wchar_t *v12; // rax
  wchar_t *v13; // rcx
  _WORD *v14; // rcx

  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  v8 = a4 - a3;
  if ( v8 )
  {
    v9 = 0LL;
    v10 = a1 + 1;
    do
    {
      if ( v8 > v9 )
      {
        std::wstring::append((void **)a2, v8 - v9, 0);
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v8;
        if ( *(_QWORD *)(a2 + 24) < 8uLL )
          v11 = (_WORD *)a2;
        else
          v11 = *(_WORD **)a2;
        v11[v8] = 0;
      }
      if ( *(_QWORD *)(a2 + 24) < 8uLL )
        v12 = (wchar_t *)a2;
      else
        v12 = *(wchar_t **)a2;
      if ( *(_QWORD *)(a2 + 24) < 8uLL )
        v13 = (wchar_t *)a2;
      else
        v13 = *(wchar_t **)a2;
      v8 = Wcsxfrm(v13, &v12[*(_QWORD *)(a2 + 16)], a3, a4, v10);
      v9 = *(_QWORD *)(a2 + 16);
    }
    while ( v8 > v9 && v8 );
  }
  if ( v8 > *(_QWORD *)(a2 + 16) )
  {
    std::wstring::append((void **)a2, v8 - *(_QWORD *)(a2 + 16), 0);
  }
  else
  {
    *(_QWORD *)(a2 + 16) = v8;
    if ( *(_QWORD *)(a2 + 24) < 8uLL )
      v14 = (_WORD *)a2;
    else
      v14 = *(_WORD **)a2;
    v14[v8] = 0;
  }
  return a2;
}
