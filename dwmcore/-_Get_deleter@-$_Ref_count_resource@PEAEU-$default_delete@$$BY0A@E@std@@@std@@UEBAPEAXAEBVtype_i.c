/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x180250D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  if ( (unsigned int)__std_type_info_compare(a2 + 8, &qword_1803E0CC8) )
    return 0LL;
  else
    return a1 + 16;
}
