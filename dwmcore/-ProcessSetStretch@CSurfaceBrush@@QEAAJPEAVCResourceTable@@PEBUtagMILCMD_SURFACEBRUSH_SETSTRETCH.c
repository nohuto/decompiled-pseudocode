__int64 __fastcall CSurfaceBrush::ProcessSetStretch(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSTRETCH *a3)
{
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
  return 0LL;
}
