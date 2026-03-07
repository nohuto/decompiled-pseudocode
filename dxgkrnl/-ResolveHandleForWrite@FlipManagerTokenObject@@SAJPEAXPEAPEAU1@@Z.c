__int64 __fastcall FlipManagerTokenObject::ResolveHandleForWrite(void *a1, struct FlipManagerTokenObject **a2)
{
  __int64 result; // rax
  struct FlipManagerTokenObject *v4; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  result = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 5, &v4);
  if ( (int)result >= 0 )
    *a2 = v4;
  return result;
}
