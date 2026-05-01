/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@std@@V?$shared_ptr@VAltTabWindowHookData@@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VAltTabWindowHookData@@@std@@@std@@@std@@@0@V10@V10@AEBV?$shared_ptr@VAltTabWindowHookData@@@0@@Z @ 0x18038E9AC
 * Callers:
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18038F2F0 (--1AltTabWindowHook@@QEAA@XZ.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802862EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<AltTabWindowHookData>>>>,std::shared_ptr<AltTabWindowHookData>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( *j != *a4 )
      {
        std::shared_ptr<KBViewInfo>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
