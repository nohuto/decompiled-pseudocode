/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C001DE68
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001DD60 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00B4680 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001DEE0 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C00C4D90 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00C4E10 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall UpdateGraphicsDeviceList(int *a1, __int64 a2))(void)
{
  int v3; // ebx
  __int64 (*result)(void); // rax

  v3 = 0;
  result = (__int64 (*)(void))UserIsWddmConnectedSession(a1, a2);
  if ( (_DWORD)result )
  {
    result = (__int64 (*)(void))DrvUpdateGraphicsDeviceList(0LL);
    if ( !(_DWORD)result )
    {
      result = (__int64 (*)(void))SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL);
        SafeEnableMDEV(1LL);
        result = qword_1C0257638;
        if ( qword_1C0257638 )
          result = (__int64 (*)(void))qword_1C0257638();
        v3 = 1;
      }
    }
  }
  *a1 = v3;
  return result;
}
