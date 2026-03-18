/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x1C01B2E14
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00E3594 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ObfDereferenceObject(v1);
}
