/*
 * XREFs of ?__move@?$__func@V_lambda_f6971094aed337c398db6b84d0e01c7e_@@$$A6AJK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1801B17F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_f6971094aed337c398db6b84d0e01c7e_,long (unsigned long)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = &wistd::__function::__func<_lambda_99ba3b9c33d985ca735a1a650d7db78e_,long (unsigned long)>::`vftable';
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != v2 )
  {
    *v3 = *v2;
    *v2 = 0LL;
  }
  result = v2[1];
  v3[1] = result;
  return result;
}
