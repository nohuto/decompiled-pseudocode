__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::DestroyVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct DXGK_VIRTUAL_GPU *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  v2 = *((unsigned int *)a2 + 6);
  v3 = (_QWORD *)((char *)a2 + 120);
  --*((_DWORD *)this + 4);
  if ( *((_QWORD *)a2 + 15) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 72));
    v6 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 144LL))(a2);
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  (**(void (__fastcall ***)(struct DXGK_VIRTUAL_GPU *, __int64))a2)(a2, 1LL);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2) = 0LL;
  return 0LL;
}
