__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int BitsPerPixel; // edi
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *((_DWORD *)this + 18);
  if ( ((v2 - 1) & 0xFFFFFFFC) != 0 || v2 == 2 )
    WdLogSingleEntry0(1LL);
  BitsPerPixel = GetBitsPerPixel((enum _D3DDDIFORMAT)*((_DWORD *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v6, v7) + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
