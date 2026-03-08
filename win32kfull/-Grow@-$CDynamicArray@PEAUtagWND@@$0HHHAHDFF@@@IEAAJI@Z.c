/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C022F9B8
 * Callers:
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C022F7FC (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall CDynamicArray<tagWND *,2003858261>::Grow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebx
  void *v7; // rax
  void *v8; // rbp

  v5 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v6 = 0;
  if ( v5 <= *(_DWORD *)(a1 + 12) )
    return v6;
  if ( !is_mul_ok(v5, 8uLL) )
    return (unsigned int)-1073741675;
  v7 = (void *)Win32AllocPool(8LL * v5, 2003858261LL, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v7, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      Win32FreePool(*(void **)a1);
    }
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 12) = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
