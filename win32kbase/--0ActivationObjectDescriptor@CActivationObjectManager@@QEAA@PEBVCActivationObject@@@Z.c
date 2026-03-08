/*
 * XREFs of ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1C0155C70
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0156108 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C015646C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     <none>
 */

CActivationObjectManager::ActivationObjectDescriptor *__fastcall CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
        CActivationObjectManager::ActivationObjectDescriptor *this,
        PEPROCESS *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    *(_DWORD *)this = (unsigned int)PsGetProcessId(a2[3]) & 0xFFFFFFFC;
    *((_DWORD *)this + 1) = (unsigned int)PsGetThreadId(a2[4]);
    *((_QWORD *)this + 1) = a2[5];
  }
  return this;
}
