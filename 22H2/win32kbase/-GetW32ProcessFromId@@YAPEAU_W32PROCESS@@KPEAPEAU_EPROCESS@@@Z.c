/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00A4C10 (HmgIsProcessCleanupRequiredByW32Pid.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  *a2 = 0LL;
  v3 = (void *)a1;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    result = PsGetCurrentProcessWin32Process(v4);
  }
  else
  {
    if ( PsLookupProcessByProcessId(v3, a2) < 0 )
      return 0LL;
    result = PsGetProcessWin32Process(*a2);
  }
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
