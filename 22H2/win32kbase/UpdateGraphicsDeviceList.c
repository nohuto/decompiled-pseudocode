/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C001F2D8
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F1D0 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00B49C0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001F350 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C00C5120 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00C51A0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
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
        result = qword_1C0256638;
        if ( qword_1C0256638 )
          result = (__int64 (*)(void))qword_1C0256638();
        v3 = 1;
      }
    }
  }
  *a1 = v3;
  return result;
}
