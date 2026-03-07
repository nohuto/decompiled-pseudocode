void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v6; // rsi
  int v7; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v9; // rbx
  int v10; // edx
  int v11; // ebx
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 61LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 61LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 64LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
      64LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v7;
  if ( (v7 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v6 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)this, v6) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)this, v6);
        v9 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v6) )
        {
          *((_QWORD *)this + v6 + 3) = VidPnSourceOwner;
          v10 = *((_DWORD *)this + v6 + 86) ^ (*((_DWORD *)this + v6 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner + v6 + 310)) << 8)) & 0x100;
          *((_DWORD *)this + v6 + 86) = v10;
          *((_DWORD *)this + v6 + 86) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v6 + 310) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v6 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v6);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, v9 + 38, 0);
          DXGPUSHLOCK::AcquireExclusive(v13);
          v11 = *((_DWORD *)v9 + v6 + 294);
          v14 = 2;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
          *((_DWORD *)this + v6 + 70) = v11;
          *((_BYTE *)this + v6 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v6);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)this + 4) >> 2 );
  }
}
