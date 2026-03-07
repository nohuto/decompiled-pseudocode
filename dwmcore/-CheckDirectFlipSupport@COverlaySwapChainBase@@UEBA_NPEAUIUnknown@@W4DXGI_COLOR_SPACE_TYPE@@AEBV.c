__int64 __fastcall COverlaySwapChainBase::CheckDirectFlipSupport(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  char v6; // bl
  char v7; // bp
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8

  v6 = 0;
  v7 = 0;
  v11 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(a1 + 104), a3);
  v12 = v11;
  if ( *(_DWORD *)(a1 + 208) == 2 || v11 )
    v7 = 1;
  if ( (unsigned __int8)COverlaySwapChainBase::DirectFlipRectRequiresPanelFitter(a1, a4)
    || (unsigned __int8)COverlaySwapChainBase::DirectFlipRectRequiresPanelFitter(a1, a5) )
  {
    v6 = 1;
  }
  LOBYTE(v14) = v6;
  LOBYTE(v13) = v7;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, int, int))(*(_QWORD *)a1 + 240LL))(
           a1,
           v13,
           v14,
           a2,
           a4,
           a5,
           a3,
           v12);
}
