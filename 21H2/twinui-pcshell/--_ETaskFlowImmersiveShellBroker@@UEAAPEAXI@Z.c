/*
 * XREFs of ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x1802A0590
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z @ 0x180166230 (--_ETaskFlowImmersiveShellBroker@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x18029F7E8 (--1TaskFlowImmersiveShellBroker@@UEAA@XZ.c)
 */

TaskFlowImmersiveShellBroker *__fastcall TaskFlowImmersiveShellBroker::`vector deleting destructor'(
        TaskFlowImmersiveShellBroker *this,
        char a2)
{
  TaskFlowImmersiveShellBroker::~TaskFlowImmersiveShellBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
