/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02B1C34
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B0AE4 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016460 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *((_QWORD *)this + 351) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = 344LL * i;
      v4 = *(void **)(*((_QWORD *)this + 351) + v3 + 64);
      if ( v4 )
      {
        ObfDereferenceObject(v4);
        *(_QWORD *)(*((_QWORD *)this + 351) + v3 + 64) = 0LL;
      }
      operator delete(*(void **)(*((_QWORD *)this + 351) + v3 + 32));
      operator delete(*(void **)(*((_QWORD *)this + 351) + v3 + 40));
      operator delete(*(void **)(*((_QWORD *)this + 351) + v3 + 104));
      operator delete(*(void **)(*((_QWORD *)this + 351) + v3 + 112));
      *(_QWORD *)(*((_QWORD *)this + 351) + v3 + 32) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 351) + v3 + 40) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 351) + v3 + 104) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 351) + v3 + 112) = 0LL;
    }
  }
}
