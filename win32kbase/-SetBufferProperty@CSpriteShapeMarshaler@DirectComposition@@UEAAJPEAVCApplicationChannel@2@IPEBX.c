__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetBufferProperty(
        char **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount)
{
  unsigned int v5; // ebx
  unsigned __int64 v8; // rbp
  __int64 Quota; // r14
  char *v10; // rdx
  char *v11; // rcx

  v5 = 0;
  if ( a3 == 9 && (a4 || !MaxCount) )
  {
    v8 = MaxCount >> 2;
    if ( (unsigned int)(MaxCount >> 2) > *((_DWORD *)this + 24) )
    {
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                (NSInstrumentation::CLeakTrackingAllocator *)this,
                260LL,
                MaxCount,
                0x64734344u);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v10 = this[11];
      if ( v10 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
      this[11] = (char *)Quota;
    }
    v11 = this[11];
    this[12] = (char *)(unsigned int)v8;
    memcpy_s(v11, 4LL * (unsigned int)v8, a4, MaxCount);
    *((_DWORD *)this + 4) |= 0x400u;
    return v5;
  }
  return (unsigned int)-1073741811;
}
