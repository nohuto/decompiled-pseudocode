char __fastcall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        int a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  _DWORD *i; // rcx

  if ( (a2 & *((_DWORD *)this + 20)) != a2 )
    return 0;
  v3 = *((unsigned int *)this + 21);
  v4 = 0LL;
  if ( !*((_DWORD *)this + 21) )
    return 0;
  for ( i = (_DWORD *)((char *)this + 48); *i != a2; ++i )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  *a3 = v4;
  return 1;
}
