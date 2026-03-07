struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  _QWORD *InputLuid; // rax

  *a2 = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    InputLuid = (_QWORD *)CInteraction::GetInputLuid(InteractionInternal);
    *v3 = *InputLuid;
  }
  return (struct _LUID)v3;
}
