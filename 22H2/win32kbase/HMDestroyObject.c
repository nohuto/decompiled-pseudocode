/*
 * XREFs of HMDestroyObject @ 0x1C0009350
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00092F0 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C011BA30 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E928 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyBaseWindow @ 0x1C0138FF0 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C00097C8 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
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
