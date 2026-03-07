__int64 __fastcall CGenericInk::EnqueueComputeScribbleOnHost(void **this, __int64 a2, struct CComputeScribble *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // r14
  char *v10; // rbx
  __int64 (__fastcall *v11)(struct CComputeScribble *, _QWORD *); // r15
  gsl::details *v12; // rcx
  int v13; // eax
  unsigned int v14; // esi
  const void *v15; // r10
  unsigned int *v16; // rsi
  int v17; // edx
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  gsl::details *v19; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue((CSuperWetSource *)this, a2);
  if ( v6 < 0 )
  {
    v7 = 401LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  memset_0(this[15], 0, 0x80uLL);
  v9 = (*(unsigned int (__fastcall **)(struct CComputeScribble *))(*(_QWORD *)a3 + 48LL))(a3);
  if ( (unsigned __int64)(v9 + 24) > 0x80 )
  {
    v6 = -2147024809;
    v7 = 411LL;
    goto LABEL_3;
  }
  v10 = (char *)this[15];
  v11 = *(__int64 (__fastcall **)(struct CComputeScribble *, _QWORD *))(*(_QWORD *)a3 + 56LL);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v19, v9);
  v12 = v19;
  if ( v19 == (gsl::details *)-1LL || v10 == (char *)-20LL && v19 )
    goto LABEL_15;
  v18[0] = v19;
  v18[1] = v10 + 20;
  v13 = v11(a3, v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  *(_QWORD *)v10 = a2 + 1;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 70);
  v10[12] = 1;
  *((_DWORD *)v10 + 4) = v9;
  v15 = this[15];
  v16 = (unsigned int *)this[14];
  if ( !v15 )
  {
LABEL_15:
    gsl::details::terminate(v12);
    JUMPOUT(0x18022A1B8LL);
  }
  memcpy_0(
    (void *)(*(_QWORD *)v16 + 8LL + v16[2] * (_InterlockedExchangeAdd(*(volatile signed __int32 **)v16, 1u) % v16[3])),
    v15,
    v16[2]);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v16 + 4LL));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0pxqtq_EventWriteTransfer(
      (unsigned __int8)v10[12],
      v17,
      (_DWORD)this,
      *(_QWORD *)v10,
      *((_DWORD *)v10 + 2),
      v10[12],
      *((_DWORD *)v10 + 4));
  return 0LL;
}
