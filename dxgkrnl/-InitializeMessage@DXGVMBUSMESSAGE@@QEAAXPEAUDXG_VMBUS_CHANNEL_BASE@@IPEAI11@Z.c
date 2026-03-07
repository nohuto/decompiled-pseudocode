void __fastcall DXGVMBUSMESSAGE::InitializeMessage(
        DXGVMBUSMESSAGE *this,
        struct DXG_VMBUS_CHANNEL_BASE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v10; // r14d
  _DWORD *v11; // rcx

  v10 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 443);
  *((_DWORD *)this + 4) = a3;
  if ( v10 >= 0x28 )
  {
    a3 += 16;
    *((_DWORD *)this + 4) = a3;
  }
  if ( a4 )
  {
    *a4 = a3;
    a3 = *((_DWORD *)this + 4);
  }
  if ( a5 )
  {
    *a5 = (*a5 + 7) & 0xFFFFFFF8;
    if ( a6 )
      *a6 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) += *a5;
    a3 = *((_DWORD *)this + 4);
  }
  if ( a3 > 0x100 )
  {
    *((_QWORD *)this + 1) = ExAllocatePool2(64LL, a3, 1299609668LL);
  }
  else
  {
    *((_QWORD *)this + 1) = (char *)this + 20;
    memset((char *)this + 20, 0, a3);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 1);
  if ( v11 )
  {
    if ( v10 < 0x28 )
    {
      *(_QWORD *)this = v11;
    }
    else
    {
      *(_QWORD *)this = v11 + 4;
      *v11 = 16;
      if ( !*((_DWORD *)a2 + 12) )
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *(_QWORD *)(*((_QWORD *)a2 + 9) + 4580LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)this + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate VM bus message. Size: 0xI64x",
      *((unsigned int *)this + 4),
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
