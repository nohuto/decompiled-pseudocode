struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *__fastcall GetFlipManagerAuxiliaryPresentInfo(
        struct _D3DKMT_AUXILIARYPRESENTINFO *a1)
{
  if ( !a1 || *((_DWORD *)a1 + 1) )
    return 0LL;
  if ( *(_DWORD *)a1 != 56 )
  {
    WdLogSingleEntry1(1LL, 1335LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pBaseAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
      1335LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return a1;
}
