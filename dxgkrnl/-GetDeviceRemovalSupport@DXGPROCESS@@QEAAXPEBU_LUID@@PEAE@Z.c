/*
 * XREFs of ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C034004C
 * Callers:
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0341BD0 (DxgkGetProcessDeviceRemovalSupport.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::GetDeviceRemovalSupport(struct _KTHREAD **this, const struct _LUID *a2, bool *a3)
{
  char *v6; // rbp
  __int16 v7; // cx
  char *v8; // rax
  struct _KTHREAD *v9; // rbx
  __int64 Current; // rax
  __int64 v11; // rdi
  _QWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5155LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 5155LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)(this + 27);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 27, 0LL);
  this[28] = KeGetCurrentThread();
  v7 = *((_WORD *)this + 288);
  if ( !v7 || (*a3 = v7 == 1, v7 != 1) )
  {
    v8 = (char *)(this + 40);
    *a3 = 1;
    v9 = this[40];
    v12[0] = v8;
    while ( 1 )
    {
      v12[1] = v9;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v12);
      if ( !Current )
        break;
      if ( *(_DWORD *)(Current + 464) != 2 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        if ( !v11 )
        {
          WdLogSingleEntry1(1LL, 5198LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter != NULL", 5198LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v11 + 404) == a2->LowPart && *(_DWORD *)(v11 + 408) == a2->HighPart )
        {
          *a3 = 0;
          break;
        }
      }
      v9 = *(struct _KTHREAD **)v9;
    }
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
