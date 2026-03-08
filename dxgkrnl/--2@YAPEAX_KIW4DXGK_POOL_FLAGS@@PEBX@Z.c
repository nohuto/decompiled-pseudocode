/*
 * XREFs of ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x1C00525F8
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C036F040 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void *__fastcall operator new(size_t a1, __int64 a2, __int64 a3, const void *a4)
{
  size_t v4; // rbx
  void *Pool2; // rax
  void *v8; // rdi

  v4 = a1;
  if ( !a1 )
    v4 = 1LL;
  if ( v4 > 0x7FFFFFFF )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(258LL, v4, 1265072196LL);
  v8 = Pool2;
  if ( Pool2 )
    memmove(Pool2, a4, v4);
  return v8;
}
