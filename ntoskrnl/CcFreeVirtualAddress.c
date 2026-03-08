/*
 * XREFs of CcFreeVirtualAddress @ 0x14021E5D0
 * Callers:
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 *     CcPinMappedData @ 0x1406A7750 (CcPinMappedData.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 192);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 552));
  }
  return result;
}
