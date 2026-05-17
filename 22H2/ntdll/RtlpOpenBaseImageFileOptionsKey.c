/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180076438
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800762DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007B400 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180076498 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_18016D508;
  Handle = (HANDLE)qword_18016D508;
  if ( qword_18016D508 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_18016D508, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_18016D508;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
