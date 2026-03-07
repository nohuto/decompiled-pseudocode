__int64 __fastcall CCompositionSurface::GetSwapChainRealizationInfo(
        CCompositionSurface *this,
        unsigned __int64 a2,
        unsigned int *a3,
        struct CSM_REALIZATION_INFO *a4)
{
  __int64 result; // rax
  struct CCompositionBuffer *v7; // rbx
  struct CCompositionBuffer *v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v8);
  if ( (int)result >= 0 )
  {
    v7 = v8;
    if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 88LL))(v8) )
      return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _QWORD, unsigned int *, struct CSM_REALIZATION_INFO *))(*(_QWORD *)v7 + 80LL))(
               v7,
               0LL,
               a3,
               a4);
    else
      return 3221225485LL;
  }
  return result;
}
