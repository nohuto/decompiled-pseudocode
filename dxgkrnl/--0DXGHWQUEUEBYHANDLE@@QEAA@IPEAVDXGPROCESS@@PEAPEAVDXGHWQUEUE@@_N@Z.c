DXGHWQUEUEBYHANDLE *__fastcall DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        DXGHWQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGHWQUEUE **a4,
        bool a5)
{
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  _BYTE v19[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)a3 + 74) )
  {
    v12 = *((_QWORD *)a3 + 35);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v12 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 16LL * v9 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 15 )
        {
          v10 = *(_QWORD *)(v12 + 16LL * v9);
          goto LABEL_3;
        }
        WdLogSingleEntry1(2LL, 267LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0,
            0,
            -1,
            (__int64)L"Handle type mismatch",
            11,
            0,
            0,
            0,
            0);
      }
    }
  }
  v10 = 0LL;
LABEL_3:
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v10;
  if ( v10 && !a5 )
  {
    _m_prefetchw((const void *)(v10 + 104));
    v17 = *(_QWORD *)(v10 + 104);
    while ( v17 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 104), v17 + 1, v17);
      if ( v18 == v17 )
        goto LABEL_4;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_4:
  *a4 = *(struct DXGHWQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
