void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rdi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdx

  v10 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 5920LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0LL,
          2,
          -1,
          L"VidPnSourceId < m_NumVidPnSources",
          5920LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v14 = 4000 * v10;
  *(_BYTE *)(*((_QWORD *)this + 16) + 4000 * v10 + 765) = a3;
  if ( a3 )
  {
    *(_DWORD *)(v14 + *((_QWORD *)this + 16) + 768) = a4;
    *(_DWORD *)(v14 + *((_QWORD *)this + 16) + 772) = a5;
    *(_DWORD *)(v14 + *((_QWORD *)this + 16) + 716) = a6;
    *(_DWORD *)(v14 + *((_QWORD *)this + 16) + 720) = a7;
  }
}
