/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x1800115F0
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18000FEC0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180011758 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2)
{
  struct CPrimitiveGroupDrawListBrush *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  v4 = (struct CPrimitiveGroupDrawListBrush *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListBrush *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x58uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
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
