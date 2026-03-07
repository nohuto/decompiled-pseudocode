// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax

  v4 = a2;
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + a2 + 143));
  v5 = v4 + 542;
  if ( *((_DWORD *)this + v4 + 414) != *((_DWORD *)this + v4 + 478)
    || *((_DWORD *)this + v5) != *((_DWORD *)this + v4 + 606) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
  }
  v6 = *((_DWORD *)this + v4 + 414);
  *((_DWORD *)this + v4 + 964) = 0;
  *((_DWORD *)this + v4 + 1028) = v6;
  *((_DWORD *)this + v4 + 1092) = *((_DWORD *)this + v5);
}
