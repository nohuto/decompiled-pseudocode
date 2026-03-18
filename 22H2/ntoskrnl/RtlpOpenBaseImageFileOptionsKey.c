/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1407CE76C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1407CE640 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1408555A0 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1408603B4 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  void *CurrentServerSiloGlobals; // rbx
  HANDLE v3; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 156);
  Handle = v3;
  if ( v3 )
  {
LABEL_2:
    *a1 = v3;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching
      && _InterlockedCompareExchange64(
           (volatile signed __int64 *)CurrentServerSiloGlobals + 156,
           (signed __int64)Handle,
           0LL) )
    {
      ZwClose(Handle);
      v3 = (HANDLE)*((_QWORD *)CurrentServerSiloGlobals + 156);
    }
    else
    {
      v3 = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
