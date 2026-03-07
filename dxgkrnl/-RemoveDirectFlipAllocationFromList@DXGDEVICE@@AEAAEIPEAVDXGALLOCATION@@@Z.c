char __fastcall DXGDEVICE::RemoveDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v6; // rdx
  __int64 v7; // rsi
  char v8; // bl
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 46, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v6 = this[v3 + 163];
  v7 = (unsigned int)v3;
  v12 = 2;
  if ( v6
    && ((*((_DWORD *)a3 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v3 + 358)
    && *((struct DXGALLOCATION **)v6 + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) == a3 )
  {
    v8 = 1;
    if ( !*((_DWORD *)this + v7 + 374) )
    {
      WdLogSingleEntry1(1LL, 9230LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9230LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this[v7 + 163] + (((unsigned __int64)*((unsigned int *)a3 + 18) >> 1) & 0x3FF)) = 0LL;
    --*((_DWORD *)this + v7 + 374);
    *((_DWORD *)a3 + 18) &= 0xFFFFF801;
  }
  else
  {
    v8 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v8;
}
