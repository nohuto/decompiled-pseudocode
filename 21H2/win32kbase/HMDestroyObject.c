/*
 * XREFs of HMDestroyObject @ 0x1C004E3A0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C00D05C0 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01480C0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C01662F0 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C004E70C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall HMDestroyObject(void *a1)
{
  void *v2; // rcx
  __int64 result; // rax
  char v4; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v4, a1);
  if ( (unsigned int)HMMarkObjectDestroyWorker(a1) )
  {
    HMFreeObject(v2);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v4 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
