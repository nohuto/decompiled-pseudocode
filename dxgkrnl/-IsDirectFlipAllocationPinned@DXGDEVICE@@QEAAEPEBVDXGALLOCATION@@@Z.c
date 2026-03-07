bool __fastcall DXGDEVICE::IsDirectFlipAllocationPinned(DXGDEVICE *this, const struct DXGALLOCATION *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  v2 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  v3 = *((_QWORD *)this + v2 + 163);
  return v3
      && ((*((_DWORD *)a2 + 18) >> 1) & 0x3FFu) < *((_DWORD *)this + v2 + 358)
      && *(_QWORD *)(v3 + 8 * (((unsigned __int64)*((unsigned int *)a2 + 18) >> 1) & 0x3FF)) == (_QWORD)a2;
}
