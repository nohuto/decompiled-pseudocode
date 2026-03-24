/*
 * XREFs of HMDestroyObject @ 0x1C0007ED0
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C0007E70 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011B760 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E658 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyBaseWindow @ 0x1C0138D20 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0008348 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMDestroyObject(void *a1)
{
  int v2; // eax
  void *v3; // rcx
  unsigned int v4; // edx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v6);
  v2 = HMMarkObjectDestroyWorker(a1);
  v4 = 0;
  if ( v2 )
  {
    HMFreeObject(v3);
    return 1;
  }
  return v4;
}
