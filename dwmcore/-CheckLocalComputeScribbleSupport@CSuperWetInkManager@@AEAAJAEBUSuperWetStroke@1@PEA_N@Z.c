__int64 __fastcall CSuperWetInkManager::CheckLocalComputeScribbleSupport(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CSuperWetInkManager *v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v17 = this;
  *a3 = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport(this, (bool *)&v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !(_BYTE)v17 )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 144LL))(*((_QWORD *)a2 + 1));
  v9 = v8;
  if ( !v8 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        10LL);
    return 0LL;
  }
  v18 = 0LL;
  v10 = *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v18);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v10 + v9 + 8))(
         v10 + v9 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v18) < 0
    || (v11 = v9 + *(int *)(*(_QWORD *)(v9 + 8) + 12LL) + 8LL,
        (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) == 0)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, char *, _QWORD))(**(_QWORD **)a2 + 288LL))(
          *(_QWORD *)a2,
          v12,
          (char *)a2 + 16,
          0LL) )
  {
    v13 = v18;
    goto LABEL_12;
  }
  v14 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 152LL))(*((_QWORD *)a2 + 1)) == 0;
  v13 = v18;
  if ( v14 )
  {
LABEL_12:
    if ( v13 )
      goto LABEL_15;
    return 0LL;
  }
  *a3 = 1;
  if ( v13 )
  {
LABEL_15:
    v15 = *(int *)(*(_QWORD *)(v13 + 8) + 4LL) + v13 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
