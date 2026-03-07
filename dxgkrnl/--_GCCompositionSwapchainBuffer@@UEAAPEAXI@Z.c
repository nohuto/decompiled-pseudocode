CFlipExBuffer *__fastcall CCompositionSwapchainBuffer::`scalar deleting destructor'(CFlipExBuffer *P, char a2)
{
  *(_QWORD *)P = &CCompositionSwapchainBuffer::`vftable';
  CFlipExBuffer::~CFlipExBuffer(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
