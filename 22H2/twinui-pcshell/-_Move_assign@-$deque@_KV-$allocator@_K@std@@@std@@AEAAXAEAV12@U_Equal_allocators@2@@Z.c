/*
 * XREFs of ?_Move_assign@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800EE1A4
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800EC5DC (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800EE3DC (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::_Move_assign(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  std::deque<unsigned __int64>::_Tidy();
  v4 = *(_QWORD **)a1;
  *(_QWORD *)a1 = *a2;
  *a2 = v4;
  if ( *(_QWORD *)a1 )
  {
    **(_QWORD **)a1 = a1;
    v4 = (_QWORD *)*a2;
  }
  if ( v4 )
    *v4 = a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = a2[3];
  result = a2[4];
  *(_QWORD *)(a1 + 32) = result;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  return result;
}
