/*
 * XREFs of ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0096800
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C0092F7C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C02206CC (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
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
  v5 = (char *)this + 320;
  if ( a2 )
  {
    v8[0] = v5;
    v8[1] = a2;
    HMAssignmentLock(v8, 0LL);
  }
  else
  {
    v7 = HMAssignmentUnlock(v5);
    *((_DWORD *)this + 82) = 0;
    return (struct tagWND *)v7;
  }
  return (struct tagWND *)v4;
}
