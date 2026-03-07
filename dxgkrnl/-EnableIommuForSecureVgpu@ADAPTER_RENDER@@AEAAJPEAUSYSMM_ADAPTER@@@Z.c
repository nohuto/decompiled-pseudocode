__int64 __fastcall ADAPTER_RENDER::EnableIommuForSecureVgpu(ADAPTER_RENDER *this, struct SYSMM_ADAPTER *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7,
    (ADAPTER_RENDER *)((char *)this + 1840));
  v4 = DxgpEnableIommuFromReference((__int64)a2, 4LL, (__int64 *)this + 228);
  if ( v8 )
  {
    v5 = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
