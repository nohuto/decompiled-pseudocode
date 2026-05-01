/*
 * XREFs of ?resize@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180146060
 * Callers:
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1801430F8 (_anonymous_namespace_--TryGetFilePublisher.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180132FC8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 */

char *__fastcall std::vector<unsigned char>::resize(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  char *result; // rax
  __int64 v5; // rbx

  v3 = *(_QWORD *)a1;
  result = (char *)(*(_QWORD *)(a1 + 8) - v3);
  if ( a2 >= (unsigned __int64)result )
  {
    if ( a2 > (unsigned __int64)result )
    {
      if ( a2 <= *(_QWORD *)(a1 + 16) - v3 )
      {
        v5 = v3 + a2;
        result = (char *)memset_0(*(void **)(a1 + 8), 0, v3 + a2 - *(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = v5;
      }
      else
      {
        return std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      }
    }
  }
  else
  {
    result = (char *)(v3 + a2);
    *(_QWORD *)(a1 + 8) = v3 + a2;
  }
  return result;
}
