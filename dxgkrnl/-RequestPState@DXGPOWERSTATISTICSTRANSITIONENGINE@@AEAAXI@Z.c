void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState(DXGPOWERSTATISTICSTRANSITIONENGINE *this, __int32 a2)
{
  if ( a2 != *((_DWORD *)this + 15) && !*((_BYTE *)this + 89) )
  {
    DXGADAPTER::QueuePStateRequestWorkItem(*(DXGADAPTER **)this, *((_DWORD *)this + 2), a2);
    *((_DWORD *)this + 15) = a2;
  }
}
