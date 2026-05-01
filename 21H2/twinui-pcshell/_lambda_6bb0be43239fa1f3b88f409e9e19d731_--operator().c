/*
 * XREFs of _lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator() @ 0x1803B1CBC
 * Callers:
 *     _lambda_6bb0be43239fa1f3b88f409e9e19d731_::_lambda_invoker_cdecl_ @ 0x1803B0B80 (_lambda_6bb0be43239fa1f3b88f409e9e19d731_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6bb0be43239fa1f3b88f409e9e19d731_::operator()(__int64 a1, unsigned __int64 a2, _QWORD **a3)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 result; // rax

  v4 = *a3;
  v5 = (__int64 *)(*a3)[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( v5[4] >= a2 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == *a3 || a2 < v4[4] )
LABEL_8:
    v4 = *a3;
  try
  {
    if ( v4 != *a3 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a3[2] + 104LL))(a3[2], v4[5]);
    result = 1LL;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
