void __fastcall CMergedDirtyRect::Reset(CMergedDirtyRect *this)
{
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 19) = 1;
}
