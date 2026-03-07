__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // eax
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7056);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 7056);
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, v4, a1);
    v11 = -1073741811;
LABEL_23:
    v3 = v11;
    goto LABEL_9;
  }
  *a3 = 0LL;
  if ( !a1 || *((_DWORD *)a1 + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL, a1);
    v11 = -1071774973;
    goto LABEL_23;
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( KeGetCurrentIrql() )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, (__int64)v7);
    if ( !v7[1] )
      WdLogSingleEntry0(1LL);
    v12 = *(_QWORD *)(v7[1] + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v12, 0LL, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
  }
  if ( (_DWORD)v4 == 1 )
  {
    *a3 = (const struct _DXGK_VIDPN_INTERFACE *)v7[51];
  }
  else if ( (_DWORD)v4 == 2 )
  {
    *a3 = (const struct _DXGK_VIDPN_INTERFACE *)v7[52];
  }
  else
  {
    *a3 = 0LL;
    WdLogSingleEntry1(3LL, v4);
    v3 = -1073741637;
  }
LABEL_9:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v13);
  return v3;
}
