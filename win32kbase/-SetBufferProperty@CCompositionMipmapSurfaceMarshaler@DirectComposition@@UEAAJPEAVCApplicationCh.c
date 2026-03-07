__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v8; // r8d
  unsigned int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned int v14; // eax
  __int64 QuotaZInit; // rax
  __int64 v17; // rax

  v6 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v17 = *((unsigned int *)this + 16);
      if ( (unsigned int)v17 < *((_DWORD *)this + 19) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *(_OWORD *)(*((_QWORD *)this + 7) + 24 * v17 + 8) = *(_OWORD *)a4;
        *a6 = 1;
        *((_DWORD *)this + 22) |= 1 << *((_BYTE *)this + 64);
        return v6;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 20 )
    return (unsigned int)-1073741811;
  v9 = *a4;
  v10 = a4[1];
  v11 = a4[3];
  v12 = a4[4];
  if ( !*a4 )
    return (unsigned int)-1073741811;
  if ( !v10 )
    return (unsigned int)-1073741811;
  v13 = a4[2];
  if ( (unsigned int)(v13 - 1) > 0xE )
    return (unsigned int)-1073741811;
  v14 = *a4;
  if ( v9 <= v10 )
    v14 = a4[1];
  if ( v14 < 1 << (v13 - 1) )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 17)
    || *((_DWORD *)this + 18)
    || *((_DWORD *)this + 19)
    || *((_DWORD *)this + 21)
    || *((_DWORD *)this + 20)
    || *((_QWORD *)this + 7) )
  {
    return 3221225485LL;
  }
  if ( is_mul_ok(v13, 0x18uLL) )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)(v13 - 1),
                   (a4[2] * (unsigned __int128)0x18u) >> 64,
                   24 * v13,
                   0x6D6D4344u);
    if ( QuotaZInit )
    {
      *((_DWORD *)this + 17) = v9;
      *((_DWORD *)this + 18) = v10;
      *((_DWORD *)this + 19) = v13;
      *((_DWORD *)this + 21) = v12;
      *((_DWORD *)this + 20) = v11;
      *((_QWORD *)this + 7) = QuotaZInit;
      *((_DWORD *)this + 22) = 0;
      *a6 = 1;
      *((_DWORD *)this + 4) |= 0x20u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v6;
}
