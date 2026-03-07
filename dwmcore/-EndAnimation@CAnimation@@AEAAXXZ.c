void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int v2; // esi
  char *i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 121) )
  {
    v2 = 0;
    for ( i = (char *)this + 72; v2 < *((_DWORD *)this + 24); ++v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)i + 16LL * v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *((_DWORD *)i + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(i, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 121) = 1;
  }
  if ( *((_BYTE *)this + 104) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
