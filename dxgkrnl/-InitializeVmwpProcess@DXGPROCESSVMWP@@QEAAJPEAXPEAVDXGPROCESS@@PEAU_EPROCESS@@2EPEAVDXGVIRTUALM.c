__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6,
        struct DXGVIRTUALMACHINE *a7)
{
  DXGVIRTUALMACHINE *v11; // rax
  DXGVIRTUALMACHINE *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !*((_BYTE *)this + 632) )
  {
    if ( a7 )
    {
      *((_QWORD *)this + 76) = a7;
      *((_QWORD *)a7 + 7) = this;
    }
    else
    {
      v11 = (DXGVIRTUALMACHINE *)operator new[](0x208uLL, 0x4B677844u, 64LL);
      if ( v11 )
        v12 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v11, this);
      else
        v12 = 0LL;
      *((_QWORD *)this + 76) = v12;
    }
    if ( !*((_QWORD *)this + 76) )
    {
      WdLogSingleEntry1(6LL, 5537LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGVIRTUALMACHINE",
        5537LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 632) )
      {
        WdLogSingleEntry1(1LL, 5543LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_bInitialized == FALSE", 5543LL, 0LL, 0LL, 0LL, 0LL);
      }
      v14 = *((_QWORD *)this + 76);
      *((_QWORD *)this + 77) = a3;
      *(_QWORD *)(v14 + 280) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 76) + 336LL) = 1;
      if ( Object )
      {
        v15 = *((_QWORD *)this + 76);
        *((_DWORD *)this + 106) |= 0x400u;
        *(_QWORD *)(v15 + 272) = Object;
        ObfReferenceObject(Object);
      }
      *((_BYTE *)this + 632) = 1;
    }
  }
  return 0LL;
}
