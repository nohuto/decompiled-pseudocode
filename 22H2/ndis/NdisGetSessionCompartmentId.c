/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C0013DA0
 * Callers:
 *     ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0013750 (-ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013900 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C001E010 (NdisGetProcessObjectCompartmentId.c)
 *     ndisCmGetThreadState @ 0x1C0035E0C (ndisCmGetThreadState.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C00B1590 (NdisGetJobObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B18B0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013DD8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= dword_1C00E71A8 )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E5B28);
  if ( ThreadSessionId < dword_1C00E71A8 )
    v3 = *((_DWORD *)P + 6 * ThreadSessionId);
  KeReleaseSpinLock(&qword_1C00E5B28, v4);
  if ( !v3 )
    return 1;
  return v3;
}
