void __fastcall CPTPEngine::HandleButtonSuppressionAndPendingUps(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  unsigned int v3; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax

  v3 = *((_DWORD *)this + 984);
  if ( (v3 & 1) == 0 )
  {
    v6 = *((_DWORD *)this + 910) & 0x10;
    if ( (v3 & 0x1000) != 0 )
      goto LABEL_13;
    if ( v6 )
    {
      if ( *((_DWORD *)this + 26) == 2 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow(this, a2, 8u, 0)
        || *((_DWORD *)this + 903)
        || *((_DWORD *)this + 978) && !a3 )
      {
        v7 = 4096;
      }
      else
      {
        v7 = 0;
      }
      v3 = v7 | *((_DWORD *)this + 984) & 0xFFFFEFFF;
      *((_DWORD *)this + 984) = v3;
    }
    if ( (v3 & 0x1000) != 0 )
    {
LABEL_13:
      if ( v6 )
        *((_DWORD *)this + 910) &= ~0x10u;
      else
        *((_DWORD *)this + 984) = v3 & 0xFFFFEFFF;
    }
    else if ( v6 )
    {
      CPTPEngine::CancelMouseUpTimer(this, 1);
    }
  }
  v8 = *((_DWORD *)this + 984);
  if ( (v8 & 2) == 0
    && (v8 & 4) == 0
    && ((*((_DWORD *)this + 910) & 0x20) != 0 || (*((_DWORD *)this + 910) & 0x40) != 0) )
  {
    CPTPEngine::CancelMouseUpTimer(this, 1);
  }
}
