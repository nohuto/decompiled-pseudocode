__int64 __fastcall OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
        ADAPTER_DISPLAY **this,
        unsigned int a2,
        int a3,
        int a4,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a5)
{
  ADAPTER_DISPLAY *v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE VidPnSourceOwnerType; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v15; // rax

  if ( a3 || (v6 = *this) == 0LL )
  {
    *a5 = D3DKMT_VIDPNSOURCEOWNER_SHARED;
  }
  else
  {
    v7 = a2;
    v8 = *(_DWORD *)(4000LL * a2 + *((_QWORD *)v6 + 16) + 740);
    VidPnSourceOwnerType = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, a2);
    v13 = VidPnSourceOwnerType;
    *a5 = VidPnSourceOwnerType;
    if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      if ( a4 )
        return 3223192387LL;
      if ( (v8 & 1) == 0 )
      {
        v15 = WdLogNewEntry5_WdTrace(a5, v10, v11, v12);
        *(_QWORD *)(v15 + 24) = v7;
        *(_QWORD *)(v15 + 32) = v13;
        return 3221225506LL;
      }
    }
  }
  return 0LL;
}
