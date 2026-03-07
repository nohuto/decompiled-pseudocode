char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // r9d
  char v4; // di
  __int64 v7; // rax

  v3 = *((_DWORD *)this + 44);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia(this, 2LL);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 328LL))(*((_QWORD *)this + 41));
      *(float *)(v7 + 40) = a2 + *(float *)(v7 + 40);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 320LL))(*((_QWORD *)this + 42));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 320LL))(*((_QWORD *)this + 43));
      *(_QWORD *)((char *)this + 532) = *(_QWORD *)a3;
    }
  }
  return v4;
}
