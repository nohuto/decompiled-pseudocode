__int64 __fastcall XDCOBJ_vSetDefaultFontWrap(Gre::Base *a1, int a2)
{
  __int64 v3; // rdx
  __int64 StockObject; // rbx
  __int64 result; // rax

  if ( a2 )
    StockObject = GreGetStockObject(13LL);
  else
    StockObject = *(_QWORD *)(*((_QWORD *)Gre::Base::Globals(a1) + 396) + 112LL);
  LOBYTE(v3) = 10;
  result = HmgShareLockCheck(StockObject, v3);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = StockObject;
  *(_QWORD *)(*(_QWORD *)a1 + 152LL) = result;
  return result;
}
