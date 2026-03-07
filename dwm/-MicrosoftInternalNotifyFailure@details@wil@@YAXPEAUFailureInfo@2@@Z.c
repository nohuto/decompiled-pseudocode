void __fastcall wil::details::MicrosoftInternalNotifyFailure(wil::details *this, struct wil::FailureInfo *a2)
{
  int v2; // eax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  char v11; // [rsp+30h] [rbp-20h]
  __int16 v12; // [rsp+32h] [rbp-1Eh]
  __int16 v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+60h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 2);
  v14 = 0;
  v17 = 0LL;
  v9 = v2;
  v10 = *((_QWORD *)this + 3);
  v11 = *(_BYTE *)this;
  v12 = wil::g_moduleFailureReportFlags;
  v13 = *((_WORD *)this + 32);
  v15 = *((_QWORD *)this + 7);
  v16 = *((_QWORD *)this + 16);
  ProcAddress = (FARPROC)`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers;
  if ( `wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "WilFailureNotifyWatchers"),
        (`wil::details::WilFailureNotifyWatchers'::`2'::s_pfnFailureNotifyWatchers = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD, int *, __int64 *))ProcAddress)(0LL, &v9, &v17);
  }
  v6 = BYTE4(v17);
  *((_DWORD *)this + 4) = v17;
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        *((_DWORD *)this + 1) |= 4u;
    }
    else
    {
      *((_DWORD *)this + 1) |= 2u;
    }
  }
  else
  {
    *((_DWORD *)this + 1) |= 1u;
  }
}
