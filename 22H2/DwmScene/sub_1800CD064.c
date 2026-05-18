/*
 * XREFs of sub_1800CD064 @ 0x1800CD064
 * Callers:
 *     sub_1800CCF94 @ 0x1800CCF94 (sub_1800CCF94.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1800CD064(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    sub_1800CD1EC(&v6, a2);
    throw;
  }
  return result;
}
