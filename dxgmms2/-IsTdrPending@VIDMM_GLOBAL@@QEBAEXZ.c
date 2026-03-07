unsigned __int8 __fastcall VIDMM_GLOBAL::IsTdrPending(VIDMM_GLOBAL *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 2870LL) || *(_BYTE *)(*((_QWORD *)this + 2) + 1025LL) )
    return 1;
  return v1;
}
