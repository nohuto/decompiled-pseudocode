DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5,
        bool a6)
{
  unsigned int v10; // eax
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  _BYTE v20[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, a3);
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)a3 + 74) )
  {
    v15 = *((_QWORD *)a3 + 35);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v15 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v16 = *(_DWORD *)(v15 + 16LL * v10 + 8) & 0x1F;
      if ( v16 )
      {
        if ( v16 == 7 )
        {
          v11 = *(_QWORD *)(v15 + 16LL * v10);
          goto LABEL_3;
        }
        if ( a6 )
        {
          WdLogSingleEntry1(2LL, 267LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v18,
                v17,
                v19,
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
    }
  }
  v11 = 0LL;
LABEL_3:
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v11;
  if ( v11 && !a5 )
  {
    _m_prefetchw((const void *)(v11 + 32));
    v12 = *(_QWORD *)(v11 + 32);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 32), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_10;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_10:
  *a4 = *(struct DXGCONTEXT **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return this;
}
