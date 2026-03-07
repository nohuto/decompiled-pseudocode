void __fastcall DirectComposition::CCompClockInfo::~CCompClockInfo(DirectComposition::CCompClockInfo *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v1 = *((_DWORD *)this + 4);
    DxgkCloseAdapterInternal(&v1);
  }
}
