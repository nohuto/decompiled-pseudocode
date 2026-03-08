/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1C02489A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C02700FC (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int updated; // ebx

  v4 = a2;
  v5 = a1;
  if ( UserIsCurrentProcessDwm(a1, a2, a3, a4) )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(v5, v4);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}
