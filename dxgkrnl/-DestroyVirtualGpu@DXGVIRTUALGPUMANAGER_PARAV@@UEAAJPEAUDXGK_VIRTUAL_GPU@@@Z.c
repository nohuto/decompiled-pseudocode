__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::DestroyVirtualGpu(struct _KTHREAD **this, struct DXGK_VIRTUAL_GPU *a2)
{
  DXGPUSHLOCK *v3; // rcx
  __int64 v5; // rbp
  struct DXGK_VIRTUAL_GPU **v6; // r8
  struct DXGK_VIRTUAL_GPU **v7; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v3 = (DXGPUSHLOCK *)(this + 5);
  v10 = v3;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v3);
    v11 = 2;
  }
  v5 = *((unsigned int *)a2 + 6);
  --*((_DWORD *)this + 4);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 9));
  v6 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 15);
  if ( v6[1] != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)
    || (v7 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 16), *v7 != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 120)) )
  {
    __fastfail(3u);
  }
  *v7 = (struct DXGK_VIRTUAL_GPU *)v6;
  v6[1] = (struct DXGK_VIRTUAL_GPU *)v7;
  this[10] = 0LL;
  ExReleasePushLockExclusiveEx(this + 9, 0LL);
  KeLeaveCriticalRegion();
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(a2);
  *((_QWORD *)this[3] + v5) = 0LL;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return 0LL;
}
