void __fastcall DXGADAPTER::ForcePStateAcrossNodes(DXGADAPTER *this, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 1060); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePState((KSPIN_LOCK *)(248LL * i + *((_QWORD *)this + 529) + 136LL), a2);
}
