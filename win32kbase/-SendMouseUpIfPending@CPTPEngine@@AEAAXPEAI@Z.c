void __fastcall CPTPEngine::SendMouseUpIfPending(CPTPEngine *this, unsigned int *a2)
{
  int v2; // eax
  int v3; // edx

  v2 = *a2;
  if ( *a2 )
  {
    if ( v2 == 4 )
    {
      *((_DWORD *)this + 984) &= ~8u;
    }
    else if ( v2 == 16 )
    {
      *((_DWORD *)this + 984) &= ~0x10u;
    }
    *a2 = 0;
    v3 = 2;
    if ( v2 != 4 )
      v3 = 4;
    CBasePTPEngine::SendMouseOutput((__int64)this, v3, *((_QWORD *)this + 491));
  }
}
