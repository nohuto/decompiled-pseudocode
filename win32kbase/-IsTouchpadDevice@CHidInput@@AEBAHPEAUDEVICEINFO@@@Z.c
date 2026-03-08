/*
 * XREFs of ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C00F3940
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHidInput::IsTouchpadDevice(CHidInput *this, struct DEVICEINFO *a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 0;
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 59);
    if ( v3 )
      return *(_DWORD *)(v3 + 24) == 7;
  }
  return result;
}
