/*
 * XREFs of ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180030460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800304E8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003065C (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_p.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::`scalar deleting destructor'(CPolygonBuilder *this, __int64 a2)
{
  void **v2; // rbx
  char v4; // si
  void *v5; // rcx
  bool v6; // zf
  struct CPolygonBuilder *v7; // rcx
  struct CObjectCache *ObjectCache; // rax

  v2 = (void **)((char *)this + 16);
  v4 = a2;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(
    (char *)this + 16,
    a2);
  v5 = *v2;
  v6 = *v2 == v2 + 3;
  *v2 = 0LL;
  if ( v6 )
    v5 = 0LL;
  operator delete(v5);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      __global_delete(this, 0x168uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v7);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
