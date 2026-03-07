char __fastcall COffScreenRenderTarget::ReadyForRender(COffScreenRenderTarget *this)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1756) )
    return 0;
  if ( !COffScreenRenderTarget::IsRenderTime(this, &v3) )
  {
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 224LL))(this);
    ScheduleCompositionPass(v3, 1u);
    return 0;
  }
  return 1;
}
