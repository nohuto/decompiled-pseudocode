_BOOL8 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 62);
  return v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0;
}
