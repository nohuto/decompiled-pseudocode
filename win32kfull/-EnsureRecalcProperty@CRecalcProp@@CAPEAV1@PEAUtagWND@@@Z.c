struct CRecalcProp *__fastcall CRecalcProp::EnsureRecalcProperty(struct tagWND *a1)
{
  struct CRecalcProp *result; // rax
  __int64 v3; // rax
  CRecalcProp *v4; // rbx
  char v5; // dl
  char v6; // dl

  result = CRecalcProp::GetRecalcProperty(a1);
  if ( !result )
  {
    v3 = Win32AllocPoolZInit(48LL, 1920168789LL);
    v4 = (CRecalcProp *)v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_DWORD *)(v3 + 28) = 0;
      *(_DWORD *)(v3 + 24) = 0;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_QWORD *)v3 = &CRecalcProp::`vftable';
      if ( (unsigned int)CWindowProp::SetProp((CWindowProp *)v3, (unsigned __int64)a1) )
      {
        *((_DWORD *)a1 + 80) |= 0x80u;
        return v4;
      }
      v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v5,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          55LL,
          2u,
          0x17u,
          0x37u,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          *(_QWORD *)a1);
      CRecalcProp::`scalar deleting destructor'(v4);
    }
    else
    {
      v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          54LL,
          2u,
          0x17u,
          0x36u,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          *(_QWORD *)a1);
    }
    return 0LL;
  }
  return result;
}
