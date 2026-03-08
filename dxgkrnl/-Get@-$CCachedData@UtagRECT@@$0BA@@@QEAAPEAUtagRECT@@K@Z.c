/*
 * XREFs of ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C001B2EC
 * Callers:
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C01E38B0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CF2FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void *__fastcall CCachedData<tagRECT,16>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  void *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( a2 <= 0x10 )
    return (void *)a1;
  v5 = *(void **)(a1 + 256);
  if ( a2 <= *(_DWORD *)(a1 + 264) )
    return v5;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL);
  *(_QWORD *)(a1 + 256) = v7;
  *(_DWORD *)(a1 + 264) = v7 != 0 ? v2 : 0;
  return *(void **)(a1 + 256);
}
