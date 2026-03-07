__int64 __fastcall CDrawingContext::GetMaxTextureSize(CDrawingContext *this, char a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(*((_QWORD *)this + 5) + 928LL);
  if ( !a2 && (unsigned int)result >= 0x4000 )
    return 0x4000LL;
  return result;
}
