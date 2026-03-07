void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, int a2, char a3)
{
  __int64 v5; // rdi
  struct CResource *v6; // rdi

  if ( (unsigned __int64)a2 < 2 )
  {
    v5 = *((_QWORD *)this + a2 + 44);
    if ( v5 )
    {
      v6 = *(struct CResource **)(v5 + 16);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 80) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 92LL) )
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
              *((_QWORD *)this + 80),
              this,
              v6,
              (unsigned int)a2);
        }
        *((_BYTE *)v6 + 216) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v6);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
