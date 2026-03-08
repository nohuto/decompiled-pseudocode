/*
 * XREFs of ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C0309014
 * Callers:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030A2A0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A750 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CVP_SYSTEM_THREAD::Start(void **this)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  result = PsCreateSystemThread(this + 1, 0, &ObjectAttributes, 0LL, 0LL, CVP_SYSTEM_THREAD::ThreadRoutine, this);
  *((_DWORD *)this + 4) = result;
  if ( result < 0 )
    this[1] = 0LL;
  return result;
}
