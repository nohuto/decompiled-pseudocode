unsigned __int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::GetCount(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  return (unsigned __int64)*((unsigned int *)this + 6) >> 5;
}
