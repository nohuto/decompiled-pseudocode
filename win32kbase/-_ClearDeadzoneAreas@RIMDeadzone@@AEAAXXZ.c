void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v2; // zf
  char *v3; // rdx
  __int64 v4; // rdi

  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v2 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  if ( v2 )
  {
    v3 = (char *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      v4 = 0LL;
      if ( !*((_DWORD *)this + 8) )
        goto LABEL_8;
      do
      {
        if ( *(_QWORD *)&v3[24 * v4 + 8] )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)&v3[24 * v4 + 8]);
          v3 = (char *)*((_QWORD *)this + 3);
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 8) );
      if ( v3 )
LABEL_8:
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    }
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
