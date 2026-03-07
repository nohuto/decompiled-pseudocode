struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // r8d
  bool v11; // zf
  struct _KTHREAD *v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  _BYTE v18[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h]

  v4 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 46, 0);
  DXGPUSHLOCK::AcquireExclusive(v19);
  v20 = 2;
  if ( *a4 )
  {
    WdLogSingleEntry1(1LL, 9261LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE == *ReachedEnd", 9261LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *a3;
  v9 = v4;
  v10 = *((_DWORD *)this + v4 + 358);
  v11 = (_DWORD)v8 == v10;
  if ( (unsigned int)v8 < v10 )
  {
    v12 = this[v4 + 163];
    v13 = *a3;
    v14 = *a3;
    do
    {
      v8 = v14;
      if ( *((_QWORD *)v12 + v13) )
        break;
      v14 = ++v13;
      *a3 = v13;
      v8 = v13;
    }
    while ( v13 < v10 );
    v11 = (_DWORD)v8 == v10;
  }
  if ( v11 )
  {
    *a4 = 1;
    v15 = 0LL;
  }
  else
  {
    v15 = *((_QWORD *)this[v4 + 163] + v8);
    if ( !v15 )
    {
      WdLogSingleEntry1(1LL, 9275LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAllocation", 9275LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *a3 != ((*(_DWORD *)(v15 + 72) >> 1) & 0x3FF) )
    {
      WdLogSingleEntry1(1LL, 9276LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"*Iterator == pAllocation->m_DirectFlipIndex",
        9276LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_DWORD *)this + v9 + 374) )
    {
      WdLogSingleEntry1(1LL, 9277LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9277LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *a3;
    *((_QWORD *)this[v9 + 163] + v16) = 0LL;
    --*((_DWORD *)this + v9 + 374);
    *(_DWORD *)(v15 + 72) &= 0xFFFFF801;
    *a3 = v16 + 1;
    if ( *((_DWORD *)this + v9 + 358) == (_DWORD)v16 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v15 + 40) )
    {
      WdLogSingleEntry1(1LL, 9296LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != pAllocation->m_pOwningResource",
        9296LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v15);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v15 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return (struct DXGALLOCATION *)v15;
}
