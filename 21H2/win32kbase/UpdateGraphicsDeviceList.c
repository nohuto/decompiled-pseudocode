/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C006A194
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C006A150 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x1C00D44A0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D44F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall UpdateGraphicsDeviceList(int *a1))(void)
{
  int v2; // ebx
  __int64 (*result)(void); // rax

  v2 = 0;
  result = (__int64 (*)(void))UserIsWddmConnectedSession();
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
        result = qword_1C029C378;
        if ( qword_1C029C378 )
          result = (__int64 (*)(void))qword_1C029C378();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
