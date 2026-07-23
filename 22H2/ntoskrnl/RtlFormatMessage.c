/*
 * XREFs of RtlFormatMessage @ 0x140910E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x140910EE8 (RtlFormatMessageEx.c)
 */

NTSTATUS __cdecl RtlFormatMessage(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           MessageFormat,
           MaximumWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           Arguments,
           Buffer,
           Length,
           ReturnLength,
           0LL);
}
