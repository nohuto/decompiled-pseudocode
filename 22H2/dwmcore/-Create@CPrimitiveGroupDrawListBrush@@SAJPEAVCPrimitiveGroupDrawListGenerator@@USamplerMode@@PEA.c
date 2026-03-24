/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x1800130C4
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800565B0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x1800131A8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListBrush *a1,
        __int16 *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  char *v10; // rbx
  struct CObjectCache *v11; // r9
  unsigned int v12; // ecx
  __int16 v13; // bp
  char v14; // r15

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = ObjectCache;
  v12 = *((_DWORD *)ObjectCache + 1);
  if ( v12 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v12 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x58uLL)) != 0LL )
  {
    v13 = *a2;
    v14 = *((_BYTE *)a2 + 2);
    v10[52] = 0;
    v10[64] = 0;
    *(_QWORD *)v10 = &CPrimitiveGroupDrawListBrush::`vftable';
    *(_OWORD *)(v10 + 8) = _xmm;
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_QWORD *)v10 + 9) = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListBrush *, __int64, __int64, struct CObjectCache *))a1)(
        a1,
        v8,
        v9,
        v11);
    *((_WORD *)v10 + 40) = v13;
    v10[82] = v14;
  }
  *a3 = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v6;
}
