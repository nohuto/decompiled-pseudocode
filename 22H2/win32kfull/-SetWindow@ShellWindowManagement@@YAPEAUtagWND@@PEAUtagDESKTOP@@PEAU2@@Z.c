/*
 * XREFs of ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C003B148
 * Callers:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C003AE8C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C021DAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::SetWindow(
        ShellWindowManagement *this,
        struct tagDESKTOP *a2,
        struct tagWND *a3)
{
  __int64 v4; // rbx
  char *v5; // rcx
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = (char *)this + 328;
  if ( a2 )
  {
    v8[0] = v5;
    v8[1] = a2;
    HMAssignmentLock(v8, 0LL);
  }
  else
  {
    v7 = HMAssignmentUnlock(v5);
    *((_DWORD *)this + 84) = 0;
    return (struct tagWND *)v7;
  }
  return (struct tagWND *)v4;
}
