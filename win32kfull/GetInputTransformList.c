/*
 * XREFs of GetInputTransformList @ 0x1C01CCC20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C0146BFE (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

InputTransform *__fastcall GetInputTransformList(int a1, unsigned int a2, __int64 a3, char a4, unsigned __int64 *a5)
{
  InputTransform *result; // rax
  struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]

  result = (InputTransform *)HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (InputTransform *)InputTransform::GetTransformList(result, (struct tagWND *)a2, a3, a5, v9);
  }
  return result;
}
