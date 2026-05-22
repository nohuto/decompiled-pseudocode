/*
 * XREFs of ??1?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAA@XZ @ 0x1800AE8FC
 * Callers:
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$1 @ 0x18005103A (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE,std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    if ( !v3 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x170);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
}
