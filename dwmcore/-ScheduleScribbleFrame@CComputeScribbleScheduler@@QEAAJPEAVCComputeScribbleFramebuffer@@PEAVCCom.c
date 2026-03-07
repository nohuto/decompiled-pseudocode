__int64 __fastcall CComputeScribbleScheduler::ScheduleScribbleFrame(
        RTL_SRWLOCK *this,
        struct CComputeScribbleFramebuffer *a2,
        struct CComputeScribble *a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  double v12; // xmm6_8
  int v13; // eax
  double i; // xmm0_8
  unsigned int v15; // r9d
  int v16; // edx
  int v17; // ecx
  float v18; // xmm0_4
  double v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  double v22; // [rsp+80h] [rbp+8h] BYREF

  if ( !WaitForSingleObject(this[8].Ptr, 0) )
  {
    v9 = -2147467259;
    v10 = 229LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  CComputeScribbleScheduler::GetWakeupTimeBeforeVBlank((CComputeScribbleScheduler *)this, a3, &v22, &v19);
  v12 = v22;
  v13 = 0;
  for ( i = v22; i > *(double *)&this[6].Ptr; ++v13 )
    i = i - *(double *)&this[6].Ptr;
  v15 = *((_DWORD *)a2 + 61);
  *(double *)&v20[2] = i;
  *(double *)&v20[3] = v19;
  *(double *)&v20[1] = v22;
  v20[0] = a4;
  v9 = CComputeScribbleScheduler::Schedule(
         this,
         (const struct CComputeScribbleScheduler::ScribbleFrame *)v20,
         a5 - v13,
         v15);
  if ( v9 < 0 )
  {
    v10 = 253LL;
    goto LABEL_3;
  }
  CComputeScribbleFramebuffer::SetScribble(a2, a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v18 = v12;
    McTemplateU0xqf_EventWriteTransfer(v17, v16, a4, *((_DWORD *)a2 + 61), SLOBYTE(v18));
  }
  return 0LL;
}
