__int64 __fastcall CVisual::CollectOcclusion(CVisual *this, struct COcclusionContext *a2, struct COcclusionInfo *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  result = *((_QWORD *)this + 32);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)(*(int *)(*(_QWORD *)(result + 64) + 8LL)
                                                                                                + result
                                                                                                + 64)
                                                                                    + 8LL))(
               *(int *)(*(_QWORD *)(result + 64) + 8LL) + result + 64,
               a2,
               (char *)this + 140);
    v5 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, result, 0xF37u, 0LL);
      return v5;
    }
  }
  return result;
}
