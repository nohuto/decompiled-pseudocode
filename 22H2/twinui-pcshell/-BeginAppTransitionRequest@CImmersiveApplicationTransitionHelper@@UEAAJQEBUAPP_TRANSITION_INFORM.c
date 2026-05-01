/*
 * XREFs of ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18006D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x1801D50A4 (-_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct APP_TRANSITION_INFORMATION *const a2)
{
  unsigned int v2; // r8d
  int v4; // r11d
  int v5; // r9d
  char v6; // cl

  v2 = 0;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_DWORD *)a2 + 5);
    if ( (v4 == 6 || (unsigned int)(v4 - 1) <= 2 && (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8))
      && !*((_DWORD *)this + 16)
      && *((_DWORD *)a2 + 3) != 6 )
    {
      v5 = *((_DWORD *)a2 + 4);
      if ( v5 != 6 )
      {
        if ( !*((_BYTE *)a2 + 56)
          || v5 != 1 && v5 != 8
          || (v6 = 1, v5 == 1)
          || *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 4) )
        {
          v6 = 0;
        }
        if ( v4 == 6 || v6 )
          return (unsigned int)CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                                 (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
                                 a2);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483638;
  }
  return v2;
}
