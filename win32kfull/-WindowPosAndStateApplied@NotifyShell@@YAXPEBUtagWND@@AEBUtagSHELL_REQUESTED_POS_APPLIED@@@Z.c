void __fastcall NotifyShell::WindowPosAndStateApplied(
        NotifyShell *this,
        const struct tagWND *a2,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a3)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  int v9; // [rsp+28h] [rbp-60h]
  _BYTE v10[4]; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int128 v11; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]

  v8 = *(_QWORD *)this;
  v9 = 9;
  memset_0(v10, 0, 0x44uLL);
  v5 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  v15 = *((_DWORD *)a2 + 14);
  v11 = v5;
  v7 = *((_OWORD *)a2 + 2);
  v12 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
  v13 = v7;
  v14 = v6;
  InputTraceLogging::Win32k::ShellWindowPosApplied(this, a2);
  anonymous_namespace_::NotifyIAMWindowManagementEvent(&v8, 0);
}
