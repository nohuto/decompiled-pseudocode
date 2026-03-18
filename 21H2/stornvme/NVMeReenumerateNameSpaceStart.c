/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x1C0023AF0
 * Callers:
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C000F9E0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0023918 (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 i; // rdi
  void *v7; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 1640);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 2u);
  if ( *(_DWORD *)(v4 + 516) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v7 = *(void **)(a1 + 8 * i + 1752);
    if ( v7 )
      memset(v7, 0, 0x1A8uLL);
  }
  *(_DWORD *)(a1 + 212) = 0;
  result = StorPortNotification(7LL, a1, 0LL, a4);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 1u);
  return result;
}
