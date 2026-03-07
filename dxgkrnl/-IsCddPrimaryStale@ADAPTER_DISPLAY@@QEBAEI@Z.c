bool __fastcall ADAPTER_DISPLAY::IsCddPrimaryStale(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 16);
  v3 = 4000LL * a2;
  return *(_QWORD *)(v3 + v2 + 964) != *(_QWORD *)(v3 + v2 + 1008)
      || *(_DWORD *)(v3 + v2 + 972) != *(_DWORD *)(v3 + v2 + 1016)
      || *(_DWORD *)(v3 + v2 + 980) != *(_DWORD *)(v3 + v2 + 1024)
      || *(_DWORD *)(v3 + v2 + 984) != *(_DWORD *)(v3 + v2 + 1028);
}
