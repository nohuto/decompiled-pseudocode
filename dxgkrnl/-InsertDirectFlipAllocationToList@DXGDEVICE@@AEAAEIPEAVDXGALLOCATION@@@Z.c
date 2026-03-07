char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  char v6; // bl
  bool v7; // zf
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // r12
  int v14; // edx
  const wchar_t *v15; // r9
  __int64 v16; // r15
  unsigned int i; // r14d
  char v19[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+60h] [rbp-38h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, this + 46, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v6 = 0;
  v7 = (*((_DWORD *)a3 + 18) & 0x7FE) == 0;
  v21 = 2;
  if ( !v7 )
  {
    WdLogSingleEntry1(1LL, 9134LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"0 == pAllocation->m_DirectFlipIndex",
      9134LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + v3 + 358);
  if ( v8 == *((_DWORD *)this + v3 + 374) )
  {
    v9 = v8;
    if ( v8 )
    {
      v8 *= 2;
      if ( v8 > 0x300 )
      {
        v10 = 9150LL;
        WdLogSingleEntry1(2LL, 9150LL);
        v14 = 0x40000;
        v15 = L"Reached maximum number of primary allocation, rejecting this request";
        goto LABEL_10;
      }
    }
    else
    {
      v8 = 4;
    }
    v10 = v8;
    v11 = 8LL * v8;
    if ( !is_mul_ok(v8, 8uLL) )
      v11 = -1LL;
    v12 = (struct _KTHREAD *)operator new[](v11, 0x4B677844u, 256LL);
    v13 = v12;
    if ( !v12 )
    {
      WdLogSingleEntry1(6LL, v8);
      v14 = 262145;
      v15 = L"Failed to grow device primary allocation array to %d entries";
LABEL_10:
      DxgkLogInternalTriageEvent(0LL, v14, -1, (__int64)v15, v10, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_26;
    }
    if ( (_DWORD)v9 )
    {
      memmove(v12, this[v3 + 163], 8 * v9);
      operator delete(this[v3 + 163]);
    }
    v16 = v3 + 163;
    this[v3 + 163] = v13;
    *((_DWORD *)this + v3 + 358) = v8;
  }
  else
  {
    v16 = v3 + 163;
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( !*((_QWORD *)this[v3 + 163] + i) )
      break;
  }
  if ( i != v8 )
  {
    if ( *((_QWORD *)this[v16] + i) )
    {
      WdLogSingleEntry1(1LL, 9194LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DirectFlipAllocation[VidPnSourceId][PinIndex] == NULL",
        9194LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + v3 + 358) < *((_DWORD *)this + v3 + 374) )
    {
      WdLogSingleEntry1(1LL, 9195LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DirectFlipAllocationArraySize[VidPnSourceId] >= m_DirectFlipAllocationCount[VidPnSourceId]",
        9195LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v6 = 1;
    *((_QWORD *)this[v16] + i) = a3;
    ++*((_DWORD *)this + v3 + 374);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * i)) & 0x7FE;
  }
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v6;
}
