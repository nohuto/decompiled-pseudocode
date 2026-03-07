__int64 __fastcall CProjectedShadowRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  return CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CProjectedShadowRenderingEffect>(
           (gsl::details *)&v4,
           a3);
}
