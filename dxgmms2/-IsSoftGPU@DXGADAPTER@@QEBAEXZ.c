bool __fastcall DXGADAPTER::IsSoftGPU(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 109) & 8) != 0;
}
