void __fastcall lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_(__int64 a1, unsigned int a2)
{
  __int64 v2; // [rsp+48h] [rbp+20h] BYREF

  v2 = HmgShareLockCheck(a2, 5);
  if ( v2 )
    SURFREF::bDeleteSurface((SURFREF *)&v2);
  SURFREF::~SURFREF((SURFREF *)&v2);
}
