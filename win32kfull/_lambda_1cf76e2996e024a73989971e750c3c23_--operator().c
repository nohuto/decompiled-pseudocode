void __fastcall lambda_1cf76e2996e024a73989971e750c3c23_::operator()(__int64 a1, DC **a2)
{
  __int64 v2; // rcx
  ERECTL *v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = a1;
    if ( (unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v4 = *(_QWORD *)(v2 + 524);
      ERECTL::vScale(v3, (const struct POINTFL *)&v4);
    }
  }
}
