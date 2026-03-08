/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C004FDF4
 * Callers:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0051320 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00B1B60 (HmgIsProcessCleanupRequiredByW32Pid.c)
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
