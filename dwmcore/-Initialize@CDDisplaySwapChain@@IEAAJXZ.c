__int64 __fastcall CDDisplaySwapChain::Initialize(CDDisplaySwapChain *this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  signed int LastErrorFailHr; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rbx
  int v16; // esi
  unsigned int v17; // ebx
  CRegion *v18; // rax
  __int64 v19; // rcx
  CRegion **v20; // rdx
  unsigned int v22; // [rsp+20h] [rbp-18h]
  CRegion *v23; // [rsp+40h] [rbp+8h] BYREF

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 60,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v22 = 46;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, LastErrorFailHr, v22, 0LL);
      return v9;
    }
  }
  v10 = *((_QWORD *)this + 50);
  v11 = *((_QWORD *)this + 51);
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = ((v11 - v10) >> 5) - 1;
  v12 = *((_QWORD *)this + 29);
  v13 = (*((_QWORD *)this + 51) - v10) >> 5;
  v14 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 30) - v12) >> 3);
  if ( v13 >= v14 )
  {
    if ( v13 > v14 )
    {
      if ( v13 <= 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 31) - v12) >> 3) )
        *((_QWORD *)this + 30) = std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(
                                   *((__int64 **)this + 30),
                                   v13 - v14);
      else
        std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>((_QWORD *)this + 29, v13);
    }
  }
  else
  {
    v15 = (__int64 *)(v12 + 40 * v13);
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v15, *((__int64 **)this + 30));
    *((_QWORD *)this + 30) = v15;
  }
  v16 = 0;
  v17 = ((__int64)(*((_QWORD *)this + 51) - *((_QWORD *)this + 50)) >> 5) - 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 51) - *((_QWORD *)this + 50)) >> 5) == 1 )
  {
LABEL_18:
    LastErrorFailHr = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v22 = 65;
      goto LABEL_23;
    }
    LastErrorFailHr = CDDisplaySwapChain::UpdateRefreshRate(this);
    v9 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      v22 = 67;
      goto LABEL_23;
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = (CRegion *)operator new(0x48uLL);
      if ( !v18 )
        break;
      v23 = v18;
      *(_QWORD *)v18 = (char *)v18 + 8;
      *((_DWORD *)v18 + 2) = 0;
      v20 = (CRegion **)*((_QWORD *)this + 58);
      if ( v20 == *((CRegion ***)this + 59) )
      {
        std::vector<std::unique_ptr<CRegion>>::_Emplace_reallocate<std::unique_ptr<CRegion>>(
          (__int64 *)this + 57,
          (__int64)v20,
          (__int64 *)&v23);
        if ( v23 )
          CRegion::`scalar deleting destructor'((void **)v23, 1);
      }
      else
      {
        *v20 = v18;
        *((_QWORD *)this + 58) += 8LL;
      }
      if ( ++v16 >= v17 )
        goto LABEL_18;
    }
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x3Cu, 0LL);
  }
  return v9;
}
