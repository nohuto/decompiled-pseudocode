__int64 __fastcall DXGDEVICE::CollectDbgInfo(
        DXGDEVICE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1418LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1418LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v8 = (char *)*a3;
  *(_DWORD *)v8 = 1769366852;
  *((_DWORD *)v8 + 1) = *((_DWORD *)this + 116);
  *(_OWORD *)(v8 + 8) = *((_OWORD *)this + 39);
  *((_QWORD *)v8 + 3) = *((_QWORD *)this + 80);
  *((_OWORD *)v8 + 2) = *(_OWORD *)((char *)this + 1240);
  *((_OWORD *)v8 + 3) = *(_OWORD *)((char *)this + 1256);
  *((_OWORD *)v8 + 4) = *(_OWORD *)((char *)this + 1272);
  *((_OWORD *)v8 + 5) = *(_OWORD *)((char *)this + 1288);
  *((_OWORD *)v8 + 6) = *(_OWORD *)((char *)this + 1816);
  *((_OWORD *)v8 + 7) = *(_OWORD *)((char *)this + 1832);
  *((_OWORD *)v8 + 8) = *(_OWORD *)((char *)this + 1848);
  *((_OWORD *)v8 + 9) = *(_OWORD *)((char *)this + 1864);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
