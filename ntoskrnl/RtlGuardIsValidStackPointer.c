/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x1407EEA20
 * Callers:
 *     KeVerifyContextRecord @ 0x1403653D4 (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1, _QWORD *Teb)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v6; // [rsp+10h] [rbp+10h]

  if ( !Teb )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
  }
  v6 = Teb[1];
  v3 = Teb[2];
  if ( a1 >= v3 && a1 <= v6 )
    return 1LL;
  return v3 != Teb[655] && a1 >= v3 - 4096 && a1 <= v6;
}
