DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  DXGKEYEDMUTEX *v15; // rcx
  _BYTE v16[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)a3 + 74)
    || (v9 = *((_QWORD *)a3 + 35), ((a2 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60))
    || (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0
    || (v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F) == 0 )
  {
LABEL_9:
    *(_QWORD *)this = 0LL;
    goto LABEL_10;
  }
  if ( v10 != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        0LL,
        0,
        -1,
        L"Handle type mismatch",
        267LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_9;
  }
  v15 = *(DXGKEYEDMUTEX **)(v9 + 16LL * v8);
  *(_QWORD *)this = v15;
  if ( v15 )
    DXGKEYEDMUTEX::AcquireReference(v15);
LABEL_10:
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
