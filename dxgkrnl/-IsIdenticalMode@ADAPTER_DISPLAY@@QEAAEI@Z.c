char __fastcall ADAPTER_DISPLAY::IsIdenticalMode(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  int CurrentOrientation; // eax
  char v5; // dl
  __int64 v6; // rcx

  v3 = 4000LL * (unsigned int)a2;
  if ( *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 964) != *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 644) )
    return 0;
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(this, a2, 0LL);
  v5 = 1;
  if ( CurrentOrientation != 1 )
    return 0;
  v6 = *((_QWORD *)this + 16);
  if ( *(_DWORD *)(v6 + v3 + 688)
    || *(_DWORD *)(v6 + v3 + 692)
    || *(_DWORD *)(v6 + v3 + 696) != *(_DWORD *)(v6 + v3 + 964)
    || *(_DWORD *)(v6 + v3 + 700) != *(_DWORD *)(v6 + v3 + 968) )
  {
    return 0;
  }
  return v5;
}
