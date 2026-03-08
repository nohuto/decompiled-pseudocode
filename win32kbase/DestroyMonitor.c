/*
 * XREFs of DestroyMonitor @ 0x1C00B5C00
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0014FDC (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1C0015BF4 (ApiSetzzzUpdateCursorSizes.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0016324 (--4-$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagM.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C0086878 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0086908 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00B6040 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C00B60F0 (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01A1574 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  struct tagMONITOR *v7; // rcx
  _DWORD *v8; // rax
  char *v9; // rdx
  __int64 v10; // rdx
  const struct tagDomLock *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagMONITOR **i; // rcx
  struct tagMONITOR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF
  char v24; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v24, a1);
  Handle = 0LL;
  v6 = SGDGetUserSessionState(v3, v2, v4, v5);
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(v6 + 16840), &Handle) >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  v7 = (struct tagMONITOR *)*((_QWORD *)gpDispInfo + 13);
  if ( v7 )
  {
    if ( v7 == a1 )
    {
      tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        (_QWORD *)gpDispInfo + 13,
        *((_QWORD *)a1 + 7));
    }
    else
    {
      for ( i = (struct tagMONITOR **)((char *)v7 + 56); ; i = (struct tagMONITOR **)((char *)v20 + 56) )
      {
        v20 = *i;
        if ( !*i )
          break;
        if ( v20 == a1 )
        {
          v21 = *((_QWORD *)a1 + 7);
          if ( v21 )
            v22 = *(_QWORD *)(v21 + 48);
          else
            v22 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v22;
          *i = (struct tagMONITOR *)v21;
          break;
        }
      }
    }
  }
  if ( a1 == *((struct tagMONITOR **)gpDispInfo + 12) )
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)gpDispInfo + 12,
      *((_QWORD *)gpDispInfo + 13));
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  v8 = (_DWORD *)*((_QWORD *)a1 + 16);
  if ( v8 )
  {
    --*v8;
    v9 = (char *)*((_QWORD *)a1 + 16);
    if ( !*(_DWORD *)v9 && v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    *((_QWORD *)a1 + 16) = 0LL;
  }
  ApiSetzzzUpdateCursorSizes();
  _InterlockedOr(v23, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  LockRefactorStagingAssertOwned(v11, v10, v12, v13);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
    result = HMFreeObject(v16, v15, v17, v18);
  if ( v24 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
