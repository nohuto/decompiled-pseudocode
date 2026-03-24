/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x1C001AC78
 * Callers:
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007A10 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     memset @ 0x1C0008040 (memset.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C001AAB8 (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rdi
  void *v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1624);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 2u);
  if ( *(_DWORD *)(v1 + 516) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 208); i = (unsigned int)(i + 1) )
  {
    v4 = *(void **)(a1 + 8 * i + 1736);
    if ( v4 )
      memset(v4, 0, 0x68uLL);
  }
  *(_DWORD *)(a1 + 196) = 0;
  result = StorPortNotification(7LL, a1, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 1u);
  return result;
}
