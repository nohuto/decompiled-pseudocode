/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800BA740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(CVisual *this, struct COcclusionContext *a2, struct COcclusionInfo *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  result = *((_QWORD *)this + 31);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)(*(int *)(*(_QWORD *)(result + 56) + 8LL)
                                                                                                + result
                                                                                                + 56)
                                                                                    + 8LL))(
               *(int *)(*(_QWORD *)(result + 56) + 8LL) + result + 56,
               a2,
               (char *)this + 132);
    v5 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, result, 0xF69u, 0LL);
      return v5;
    }
  }
  return result;
}
