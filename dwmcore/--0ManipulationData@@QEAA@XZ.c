ManipulationData *__fastcall ManipulationData::ManipulationData(ManipulationData *this)
{
  __int64 v1; // rcx
  ManipulationData *result; // rax

  ManipulationData::Reset(this);
  *(_BYTE *)(v1 + 180) |= 3u;
  *(_DWORD *)(v1 + 168) = 7;
  result = (ManipulationData *)v1;
  *(_DWORD *)(v1 + 172) = 7;
  *(_DWORD *)(v1 + 176) = 7;
  return result;
}
