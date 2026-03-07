void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rdi
  volatile signed __int32 *v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rdi
  int v13; // edx
  struct DXGSYNCOBJECT *v14; // rdi
  PERESOURCE *Global; // rax

  v3 = a2;
  v5 = 32LL * a2;
  v6 = *(void **)(v5 + a3 + 72);
  if ( v6 )
  {
    ObCloseHandle(v6, 1);
    *(_QWORD *)(v5 + a3 + 72) = 0LL;
    *(_QWORD *)(32 * (v3 + 2) + a3) = 0LL;
  }
  v7 = *(_DWORD *)(v5 + a3 + 56);
  if ( v7 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6);
    v9 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(v5 + a3 + 56) = 0;
      return;
    }
    v10 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v11 = (v7 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v9 + 74) )
    {
      v12 = *((_QWORD *)v9 + 35);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 8 )
          {
            v14 = *(struct DXGSYNCOBJECT **)(v12 + 16LL * v11);
LABEL_12:
            _InterlockedDecrement(v10 + 4);
            ExReleasePushLockSharedEx(v10, 0LL);
            KeLeaveCriticalRegion();
            if ( v14 )
            {
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v14, v7);
            }
            goto LABEL_14;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_12;
  }
}
