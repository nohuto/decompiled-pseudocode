void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a2 + 13);
  if ( (*((_DWORD *)a2 + 17) & 0x20000000) != 0 )
  {
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 800) )
        VidSchSwitchFromDevice();
    }
  }
  else if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 404) & 0x10) == 0 )
    {
      v3 = *(_QWORD *)(v2 + 256);
      if ( v3 )
      {
        LOBYTE(a2) = 1;
        VidSchSwitchFromContext(v3, a2);
      }
    }
  }
}
