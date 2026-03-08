/*
 * XREFs of ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C00799AC
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C001375C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkQueryHostCompSurfInfo(void *a1, unsigned int *a2, unsigned __int64 *a3)
{
  int v5; // edi
  PVOID v6; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  v5 = CompositionSurfaceObject::ResolveHandle(a1, 1u, (__int64)a3, (struct CompositionSurfaceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v5 = (**((__int64 (__fastcall ***)(char *, unsigned int *, unsigned __int64 *))Object + 4))(
           (char *)Object + 32,
           a2,
           a3);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
