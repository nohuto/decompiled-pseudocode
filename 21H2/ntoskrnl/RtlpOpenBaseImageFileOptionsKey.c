/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140604364
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140604234 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1407A8DA0 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1407D08A4 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1, __int64 a2)
{
  void *CurrentServerSiloGlobals; // rbx
  HANDLE v4; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals((__int64)a1, a2);
  v4 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 132);
  Handle = v4;
  if ( !v4 )
  {
    result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
    if ( (int)result < 0 )
      return result;
    if ( RtlpDisableIFEOCaching
      || !_InterlockedCompareExchange64(
            (volatile signed __int64 *)CurrentServerSiloGlobals + 132,
            (signed __int64)Handle,
            0LL) )
    {
      v4 = Handle;
    }
    else
    {
      ZwClose(Handle);
      v4 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 132);
    }
  }
  *a1 = v4;
  return 0LL;
}
