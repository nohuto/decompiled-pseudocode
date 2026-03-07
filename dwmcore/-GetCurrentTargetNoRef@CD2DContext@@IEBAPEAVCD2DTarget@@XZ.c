struct CD2DTarget *__fastcall CD2DContext::GetCurrentTargetNoRef(CD2DContext *this)
{
  int v1; // edx
  struct CD2DTarget *result; // rax

  v1 = *((_DWORD *)this + 88);
  result = 0LL;
  if ( v1 )
    return *(struct CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v1 - 1));
  return result;
}
