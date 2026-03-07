__int64 *__fastcall Microsoft::WRL::ComPtr<CRenderingEffect>::operator=<CCommonRenderingEffect>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = a2;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  return a1;
}
