__int64 __fastcall DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(
        DxgMonitor::MonitorColorState *this,
        char a2,
        char a3)
{
  __int64 v5; // rax
  int v7; // esi
  int v8; // r14d
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  bool v12; // zf
  int v13; // edi
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64 *, _DWORD *, _QWORD); // r9
  int v17; // eax
  __int64 v18; // rdi
  DxgMonitor::MonitorColorState *v19; // rcx
  int v20; // [rsp+20h] [rbp-50h]
  int v21; // [rsp+24h] [rbp-4Ch]
  int v22; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+2Ch] [rbp-44h]
  _DWORD v24[11]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v25[20]; // [rsp+5Ch] [rbp-14h]
  int v26; // [rsp+B8h] [rbp+48h]
  int v27; // [rsp+C8h] [rbp+58h]

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) < 2500 )
      return 0LL;
  }
  v26 = *((_DWORD *)this + 64) >> 10;
  v27 = *((_DWORD *)this + 65) >> 10;
  v20 = *((_DWORD *)this + 66) >> 10;
  v22 = *((_DWORD *)this + 82);
  v7 = *((_DWORD *)this + 59) >> 10;
  v8 = *((_DWORD *)this + 60) >> 10;
  v9 = *((_DWORD *)this + 61) >> 10;
  v10 = *((_DWORD *)this + 62) >> 10;
  v11 = *((_DWORD *)this + 63) >> 10;
  v21 = *((_DWORD *)this + 81);
  v12 = a3 == 0;
  v13 = 1000;
  v23 = *((_DWORD *)this + 83);
  if ( v12 )
    v13 = *((_DWORD *)this + 98);
  v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v24[0] = v7;
  v24[1] = v8;
  v24[2] = v9;
  v15 = *v14;
  v24[5] = v26;
  v16 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD))(v15 + 80);
  v24[6] = v27;
  v24[7] = v20;
  v24[8] = v21;
  v24[9] = v22;
  v24[10] = v23;
  v24[3] = v10;
  v24[4] = v11;
  *(_QWORD *)v25 = 0LL;
  v17 = v16(v14, v24, 80 * v13 / 0x3E8u);
  v18 = v17;
  if ( v17 < 0 )
  {
    v25[16] = 0;
    *((_OWORD *)this + 13) = 0LL;
    *((_OWORD *)this + 14) = 0LL;
    *(_QWORD *)&v25[4] = 0LL;
    *((_OWORD *)this + 15) = 0LL;
    *(_DWORD *)&v25[12] = 0;
    *(_WORD *)&v25[17] = 0;
    v25[19] = 0;
    *((_OWORD *)this + 16) = *(_OWORD *)&v25[4];
    *((_QWORD *)this + 39) = 0LL;
    *((_DWORD *)this + 80) = 0;
    DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v19);
    WdLogSingleEntry1(2LL, v18);
  }
  return (unsigned int)v18;
}
