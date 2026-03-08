/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800EBECC
 * Callers:
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BAB8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::NotifyVisualTreeListeners(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  result = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 24));
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)result;
    do
    {
      result = (__int64)CPtrArrayBase::operator[]((__int64 *)(a1 + 24), v5);
      if ( result != *(_QWORD *)(a1 + 88) )
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)result + 72LL))(result, a2, a1);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
