void __fastcall DXGALLOCATION::~DXGALLOCATION(DXGALLOCATION *this)
{
  if ( (*((_DWORD *)this + 18) & 0x40000) != 0 )
    UnlockParavirtualizedAllocationOnGuest(this, 1u);
  if ( (*((_DWORD *)this + 18) & 0x100000) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 5) + 72LL));
}
