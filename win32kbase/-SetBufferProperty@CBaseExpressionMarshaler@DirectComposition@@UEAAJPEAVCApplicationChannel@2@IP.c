__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 Quota; // rax
  _OWORD *v11; // rax

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 11) )
    return (unsigned int)-1073741790;
  if ( a5 == 12 )
  {
    if ( *a4 != 1 )
      return (unsigned int)-1073741811;
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 0xCuLL, 0x6D654344u);
    if ( Quota )
    {
      *((_QWORD *)this + 11) = Quota;
      *(_QWORD *)Quota = *(_QWORD *)a4;
      *(_DWORD *)(Quota + 8) = a4[2];
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 == 16 )
  {
    if ( *a4 != 2 )
      return (unsigned int)-1073741811;
    v11 = (_OWORD *)DirectComposition::Memory::Allocate_0(0x10uLL);
    if ( v11 )
    {
      *((_QWORD *)this + 11) = v11;
      *v11 = *(_OWORD *)a4;
      goto LABEL_6;
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
LABEL_6:
  *((_DWORD *)this + 4) &= ~0x40u;
  *a6 = 1;
  return v6;
}
