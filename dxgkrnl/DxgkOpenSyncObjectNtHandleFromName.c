__int64 __fastcall DxgkOpenSyncObjectNtHandleFromName(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  ULONG64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int128 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-10h]
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2204;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2204);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2204);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v14 = *(_OWORD *)v5;
  v15 = *(_QWORD *)(v5 + 16);
  v16 = 0LL;
  LOBYTE(v4) = 1;
  v6 = ObOpenObjectByName(*((_QWORD *)&v14 + 1), g_pDxgkSharedSyncObjectType, v4, 0LL, v14, 0LL, &v16);
  if ( v6 >= 0 )
  {
    v7 = (_QWORD *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = v16;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  return (unsigned int)v6;
}
