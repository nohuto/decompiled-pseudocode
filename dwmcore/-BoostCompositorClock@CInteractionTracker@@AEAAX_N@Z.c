void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 541) & 4) != 0) != a2 )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(_DWORD *)(v2 + 1228);
    if ( a2 )
    {
      v4 = v3 + 1;
    }
    else
    {
      if ( !v3 )
      {
LABEL_7:
        *((_BYTE *)this + 541) &= ~4u;
        *((_BYTE *)this + 541) |= 4 * a2;
        CInteractionTracker::LogBoostCompositorClock(this, a2);
        return;
      }
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 1228) = v4;
    goto LABEL_7;
  }
}
