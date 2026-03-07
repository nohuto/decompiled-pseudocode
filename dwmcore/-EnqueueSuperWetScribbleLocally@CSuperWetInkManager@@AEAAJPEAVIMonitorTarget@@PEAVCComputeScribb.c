__int64 __fastcall CSuperWetInkManager::EnqueueSuperWetScribbleLocally(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        struct CComputeScribble *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 144LL))(a2);
  v5 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v5 + 8))(
         v5 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 280LL))(v13);
    if ( *(_BYTE *)(v10 + 48) )
      wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(v10 + 40, a3);
    else
      *(_BYTE *)(v10 + 49) = 1;
    if ( v13 )
    {
      v11 = (__int64)v13 + *(int *)(v13[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v13 )
    {
      v8 = (__int64)v13 + *(int *)(v13[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
}
