/*
 * XREFs of ?try_lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18035552C
 * Callers:
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180127690 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_reader.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall wil::srwlock::try_lock_shared(RTL_SRWLOCK *a1, unsigned __int64 *a2)
{
  bool v4; // cf
  unsigned __int64 *result; // rax

  v4 = TryAcquireSRWLockShared(a1) != 0;
  result = a2;
  *a2 = (unsigned __int64)a1 & -(__int64)v4;
  return result;
}
