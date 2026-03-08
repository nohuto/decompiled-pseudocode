/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x14077EF8C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14077EE60 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140812A34 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x14085C4B4 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  HANDLE Flink; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Flink = CurrentServerSiloGlobals[78].Flink;
  Handle = Flink;
  if ( Flink )
  {
LABEL_2:
    *a1 = Flink;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching
      && _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CurrentServerSiloGlobals[78],
           (signed __int64)Handle,
           0LL) )
    {
      ZwClose(Handle);
      Flink = CurrentServerSiloGlobals[78].Flink;
    }
    else
    {
      Flink = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
