__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 QuotaZInit; // rax

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 2) == 0 )
      goto LABEL_3;
    *((_QWORD *)this + 10) = 0LL;
  }
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x38uLL, 0x6C614344u);
  if ( !QuotaZInit )
  {
    *((_QWORD *)this + 10) = 0LL;
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(QuotaZInit + 48) = 1;
  *(_QWORD *)QuotaZInit = this;
  *((_QWORD *)this + 10) = QuotaZInit;
  if ( v2 )
    *(_QWORD *)(v2 + 16) = QuotaZInit;
LABEL_3:
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  return v3;
}
