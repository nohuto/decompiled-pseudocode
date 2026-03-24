/*
 * XREFs of IopUpdateOtherOperationCount @ 0x14022B620
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *IopUpdateOtherOperationCount()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++result->OtherOperationCount;
  __incgsdword(0x2EE4u);
  return result;
}
