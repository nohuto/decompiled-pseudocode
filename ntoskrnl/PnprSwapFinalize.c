__int64 PnprSwapFinalize()
{
  int v0; // ebx
  __int64 v1; // rax
  int MillisecondCounter; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // eax

  v0 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    PnprRecopyMirrorPages();
  v1 = PnprContext;
  *(_DWORD *)(PnprContext + 64) &= ~4u;
  if ( (*(_DWORD *)(v1 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(PnprContext + 33232) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v3 = PnprContext;
    *(_DWORD *)(PnprContext + 33300) = MillisecondCounter;
    v0 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 33232))(*(_QWORD *)(v3 + 33168));
    if ( v0 < 0 )
    {
      v4 = PnprContext;
      v5 = *(_DWORD *)(PnprContext + 33272);
      if ( !v5 )
        v5 = 2988;
      v6 = *(_DWORD *)(PnprContext + 33276);
      *(_DWORD *)(PnprContext + 33272) = v5;
      if ( !v6 )
        v6 = 8;
      *(_DWORD *)(v4 + 33276) = v6;
    }
    *(_DWORD *)(PnprContext + 33304) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v0;
}
