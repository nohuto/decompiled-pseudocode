__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  _D3DKMT_POLLDISPLAYCHILDREN v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  DXGGLOBAL *Global; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v16; // [rsp+50h] [rbp-128h] BYREF
  int v17; // [rsp+58h] [rbp-120h] BYREF
  __int64 v18; // [rsp+60h] [rbp-118h]
  char v19; // [rsp+68h] [rbp-110h]
  struct DXGPROCESS *Current; // [rsp+70h] [rbp-108h]
  _QWORD v21[28]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 43;
  LOBYTE(v21[6]) = -1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2036);
  Current = DXGPROCESS::GetCurrent(v6);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v7 = *a1;
    v16 = *a1;
  }
  else
  {
    v7 = *a1;
    v16 = *a1;
  }
  v8 = HIDWORD(*(unsigned __int64 *)&v7);
  if ( (unsigned int)v8 >= 0x20 )
    *((_DWORD *)&v16 + 1) = v8 & 1;
  v9 = ((*((_BYTE *)&v16 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v16 + 4) & 0x10) == 0 )
    v9 = (*((_BYTE *)&v16 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v16 + 4) & 8) == 0 )
  {
    v11 = PollDisplayChildrenForAdapter(&v16, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21);
    goto LABEL_19;
  }
  if ( !v16.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v16, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21);
LABEL_19:
    v12 = v11;
    goto LABEL_20;
  }
  v12 = -1073741811;
LABEL_20:
  if ( v12 >= 0 && (*((_BYTE *)&v16 + 4) & 4) != 0 )
  {
    v16 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v21[10], 0, 0x90uLL);
    v12 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v12 == -1071774941 )
      v12 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)v12;
}
