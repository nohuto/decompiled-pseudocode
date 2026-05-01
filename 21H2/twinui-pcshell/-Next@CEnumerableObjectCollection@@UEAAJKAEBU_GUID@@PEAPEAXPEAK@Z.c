/*
 * XREFs of ?Next@CEnumerableObjectCollection@@UEAAJKAEBU_GUID@@PEAPEAXPEAK@Z @ 0x1801BDCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Next(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  void **v10; // rbx
  unsigned int v11; // r15d
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // rcx
  int v13; // esi
  unsigned int v14; // eax

  v5 = *((_DWORD *)this + 6);
  v10 = a4;
  v11 = v5 + a2;
  if ( v5 + a2 >= *((_DWORD *)this + 10) )
    v11 = *((_DWORD *)this + 10);
  while ( v5 < v11 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 4) + 8LL * v5);
    v13 = (**v12)(v12, a3, v10);
    if ( v13 < 0 )
    {
      while ( v10 > a4 )
      {
        --v10;
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v10 + 16LL))(*v10);
      }
      if ( a5 )
        *a5 = 0;
      return (unsigned int)v13;
    }
    ++v5;
    ++v10;
  }
  v14 = v5 - *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = v5;
  if ( a5 )
    *a5 = v14;
  return v14 < a2;
}
