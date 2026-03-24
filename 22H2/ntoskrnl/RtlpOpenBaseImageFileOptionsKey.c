/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140689214
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406890E4 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1407A8FD0 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1407D0654 (RtlpOpenBaseImageFileOptionsKeyEx.c)
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
