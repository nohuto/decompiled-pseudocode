/*
 * XREFs of MiAttachWorkingSet @ 0x1402D4FE4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 * Callees:
 *     MiAttachSessionGlobal @ 0x1402D509C (MiAttachSessionGlobal.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall MiAttachWorkingSet(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v2; // rcx
  struct _KTHREAD *v3; // r8
  ULONG_PTR ApcStateIndex; // rax

  LOBYTE(CurrentThread) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)CurrentThread )
  {
    if ( (_BYTE)CurrentThread == 1 )
      LOBYTE(CurrentThread) = MiAttachSessionGlobal(
                                a1 - 192,
                                *(unsigned int *)(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                                + 17000LL));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v2 = a1 - 1664;
    if ( CurrentThread->Process != (_KPROCESS *)v2 )
    {
      v3 = KeGetCurrentThread();
      ApcStateIndex = v3->ApcStateIndex;
      if ( (_BYTE)ApcStateIndex )
        KeBugCheckEx(5u, v2, (ULONG_PTR)v3->ApcState.Process, ApcStateIndex, 0LL);
      LOBYTE(CurrentThread) = KiStackAttachProcess(v2);
    }
  }
  return (char)CurrentThread;
}
