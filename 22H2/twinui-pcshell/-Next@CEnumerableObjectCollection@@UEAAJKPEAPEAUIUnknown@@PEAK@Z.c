/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKPEAPEAUIUnknown@@PEAK@Z @ 0x1801BDC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        struct IUnknown **a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  struct IUnknown **v9; // rbx
  unsigned int v10; // r12d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rcx
  int v12; // esi
  unsigned int v13; // eax

  v4 = *((_DWORD *)this + 4);
  v9 = a3;
  v10 = v4 + a2;
  if ( v4 + a2 >= *((_DWORD *)this + 8) )
    v10 = *((_DWORD *)this + 8);
  while ( v4 < v10 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(*((_QWORD *)this + 3) + 8LL * v4);
    v12 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, v9);
    if ( v12 < 0 )
    {
      while ( v9 > a3 )
      {
        --v9;
        ((void (__fastcall *)(struct IUnknown *))(*v9)->lpVtbl->Release)(*v9);
      }
      if ( a4 )
        *a4 = 0;
      return (unsigned int)v12;
    }
    ++v4;
    ++v9;
  }
  v13 = v4 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v4;
  if ( a4 )
    *a4 = v13;
  return v13 < a2;
}
