/*
 * XREFs of ViSpRtlReplaceStringBuffer @ 0x140AA72F4
 * Callers:
 *     VfSpRtlUnicodeStringToAnsiString_Exit @ 0x140AA7270 (VfSpRtlUnicodeStringToAnsiString_Exit.c)
 *     VfSpRtlCreateUnicodeString_Exit @ 0x140AA72A0 (VfSpRtlCreateUnicodeString_Exit.c)
 *     VfSpRtlDuplicateUnicodeString_Exit @ 0x140AA72D0 (VfSpRtlDuplicateUnicodeString_Exit.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 */

void __fastcall ViSpRtlReplaceStringBuffer(__int64 a1, __int64 a2)
{
  PVOID v3; // rax
  PVOID v4; // rdi

  if ( *(_WORD *)(a1 + 2) )
  {
    v3 = VfHandlePoolAlloc(
           NonPagedPool,
           768LL,
           *(unsigned __int16 *)(a1 + 2),
           0x72745356u,
           LowPoolPriority,
           (__int64)&VfExtendedParameters,
           1u,
           a2);
    v4 = v3;
    if ( v3 )
    {
      memmove(v3, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
}
