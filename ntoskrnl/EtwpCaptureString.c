/*
 * XREFs of EtwpCaptureString @ 0x1407478D0
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpAcquireLoggerContext @ 0x140745800 (EtwpAcquireLoggerContext.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EB328 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  char PreviousMode; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  WCHAR *Pool2; // rax
  WCHAR *v9; // rbx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode )
  {
    v6 = *a1;
    if ( (_WORD)v6 )
    {
      v7 = *((_QWORD *)a1 + 1);
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, *a1 + 2LL, 1350005829LL);
  v9 = Pool2;
  if ( !Pool2
    || (memmove(Pool2, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
