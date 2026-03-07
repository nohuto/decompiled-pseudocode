__int64 __fastcall ADAPTER_RENDER::DisableIommuForDrt(ADAPTER_RENDER *this, struct SYSMM_ADAPTER *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8,
    (ADAPTER_RENDER *)((char *)this + 1840));
  v4 = *((_QWORD *)this + 229);
  v5 = 0;
  if ( v4 )
  {
    if ( v4 != 1 || (v5 = SysMmDisableIommu(a2, 16LL), v5 >= 0) )
      *((_QWORD *)this + 229) = v4 - 1;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v9 )
  {
    v6 = v8;
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}
