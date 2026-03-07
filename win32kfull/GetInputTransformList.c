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
