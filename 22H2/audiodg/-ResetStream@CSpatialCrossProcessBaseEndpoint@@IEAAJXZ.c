/*
 * XREFs of ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14006B8A4
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14006B7A0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14006A0DC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ResetStream(CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  signed __int64 v5; // rcx
  unsigned __int32 State; // eax
  __int64 v7; // r10
  unsigned __int32 v8; // r8d

  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0x10u);
  v2 = *((_QWORD *)this + 161);
  v4 = *(_QWORD *)(v2 + 32);
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 32), 0LL, v4);
  if ( v4 != v3 )
  {
    do
    {
      v5 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 32), 0LL, v3);
    }
    while ( v3 != v5 );
  }
  State = PingPongState::GetState((__int64)this + 576);
  if ( State != 17 )
  {
    do
    {
      if ( State > 0x10 )
        break;
      v8 = State;
      State = _InterlockedCompareExchange(
                *(volatile signed __int32 **)(v7 + 712),
                `PingPongState::Reset'::`2'::nextState[State],
                State);
    }
    while ( v8 != State );
  }
  return 0LL;
}
