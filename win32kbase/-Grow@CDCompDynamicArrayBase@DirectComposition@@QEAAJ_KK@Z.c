__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rax
  char *v11; // rax
  char *v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // kr00_8

  v3 = *((_QWORD *)this + 3);
  v6 = (NSInstrumentation::CLeakTrackingAllocator *)(v3 + a2);
  if ( v3 + a2 < v3 )
    return (unsigned int)-1073741801;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( (unsigned __int64)v6 > v7 )
  {
    if ( !v7 )
      v7 = 64LL;
    while ( v7 < (unsigned __int64)v6 )
    {
      if ( v7 >= 0x400 )
      {
        while ( v7 < (unsigned __int64)v6 )
        {
          if ( v7 + 1024 < v7 )
            return (unsigned int)-1073741801;
          v7 += 1024LL;
        }
        break;
      }
      v14 = v7;
      v7 *= 2LL;
      if ( !is_mul_ok(v14, 2uLL) )
        return (unsigned int)-1073741801;
    }
    if ( is_mul_ok(v7, *((_QWORD *)this + 4)) )
    {
      v10 = v7 * *((_QWORD *)this + 4);
      v11 = (char *)(*((_BYTE *)this + 8)
                   ? NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v6, 260LL, v10, a3)
                   : NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v10, a3));
      v12 = v11;
      if ( v11 )
      {
        v13 = *((_QWORD *)this + 3);
        if ( v13 )
          memmove(v11, *(const void **)this, *((_QWORD *)this + 4) * v13);
        memset(
          &v12[*((_QWORD *)this + 3) * *((_QWORD *)this + 4)],
          0,
          *((_QWORD *)this + 4) * (v7 - *((_QWORD *)this + 3)));
        if ( *(_QWORD *)this )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)this);
        *(_QWORD *)this = v12;
        *((_QWORD *)this + 2) = v7;
        goto LABEL_3;
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_3:
  *((_QWORD *)this + 3) += a2;
  return v8;
}
