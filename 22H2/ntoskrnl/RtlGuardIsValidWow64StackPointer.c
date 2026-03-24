/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x14067B4B8
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14033FA10 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x14034049C (KeVerifyContextRecord.c)
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1, __int64 Teb)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rdx

  if ( !Teb )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (__int64)CurrentThread->Teb;
  }
  v2 = Teb + 0x2000;
  v3 = -Teb;
  return a1 >= *(_DWORD *)((v2 & -(__int64)(v3 != 0)) + 8) && a1 <= *(_DWORD *)((v2 & -(__int64)(v3 != 0)) + 4);
}
