const struct DwmAnimationPrimitive *__fastcall CPayloadedAnimationPrimitiveBuffer::GetPrimitive(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2)
{
  return (const struct DwmAnimationPrimitive *)(*((_QWORD *)this + 2) + 32LL * a2);
}
