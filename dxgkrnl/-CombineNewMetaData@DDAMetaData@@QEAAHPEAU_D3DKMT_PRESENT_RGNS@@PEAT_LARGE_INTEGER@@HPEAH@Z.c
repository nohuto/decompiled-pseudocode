__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  unsigned int v9; // edi
  const wchar_t *v10; // r9
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  char v17; // [rsp+60h] [rbp-28h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 11000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 11000);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 11000);
  v9 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    v10 = L"Failed to process new move regions, this = 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_18;
  }
  v9 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    v10 = L"Failed to process new dirty rects, this = 0x%I64x";
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v9 = DDAMetaData::ConvertGdiRgnToRects(this);
    if ( !v9 )
    {
      WdLogSingleEntry1(2LL, this);
      v10 = L"Failed to get dirty rect from Gdi region, this = 0x%I64x";
      goto LABEL_7;
    }
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *a5 = v11;
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_18:
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  return v9;
}
