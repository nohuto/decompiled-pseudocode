int __fastcall CContentResourceState::RebindCompositionSurfaceBuffer(
        CContentResource **this,
        struct CCompositionSwapchainBuffer *a2)
{
  int result; // eax

  result = CContentResource::RebindCompositionSurfaceBuffer(this[3], a2);
  if ( result >= 0 )
    this[7] = (CContentResource *)*((_QWORD *)this[3] + 7);
  return result;
}
