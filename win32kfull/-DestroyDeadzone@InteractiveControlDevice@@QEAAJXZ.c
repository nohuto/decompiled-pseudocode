/*
 * XREFs of ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0247FEC
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C024897C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::DestroyDeadzone(InteractiveControlDevice *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 30);
  if ( !v2 || *((_QWORD *)this + 43) == -1LL )
    return 3221225485LL;
  result = RIMDestroyPointerDeviceDeadzone(v2 + 72);
  *((_QWORD *)this + 43) = -1LL;
  *((_DWORD *)this + 84) = 1;
  return result;
}
