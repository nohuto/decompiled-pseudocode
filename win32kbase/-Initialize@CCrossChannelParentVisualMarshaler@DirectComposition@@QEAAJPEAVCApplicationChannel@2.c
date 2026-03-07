__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v8; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  int v10; // esi
  _DWORD *QuotaZInit; // rax

  v10 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x2000002u;
    v10 = 0;
    *(_DWORD *)(a1 + 104) = 1065353216;
    *(_DWORD *)(a1 + 108) = 1065353216;
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v9, v8, 0x10uLL, 0x76634344u);
    if ( QuotaZInit )
      QuotaZInit[2] = 0;
    *(_QWORD *)(a1 + 376) = QuotaZInit;
    if ( QuotaZInit )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 376) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}
