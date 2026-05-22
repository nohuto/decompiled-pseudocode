/*
 * XREFs of ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x1801A27F4
 * Callers:
 *     _TextInputStateAdapter::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801A403E (_TextInputStateAdapter--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _TextInputStateAdapter::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801A404A (_TextInputStateAdapter--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
