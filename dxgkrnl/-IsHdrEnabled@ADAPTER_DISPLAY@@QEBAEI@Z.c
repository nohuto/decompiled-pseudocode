/*
 * XREFs of ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0053038
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C01CA148 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsHdrEnabled(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 5914LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v4,
          v5,
          0LL,
          2,
          -1,
          L"VidPnSourceId < m_NumVidPnSources",
          5914LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_BYTE *)(4000 * v3 + *((_QWORD *)this + 16) + 764);
}
