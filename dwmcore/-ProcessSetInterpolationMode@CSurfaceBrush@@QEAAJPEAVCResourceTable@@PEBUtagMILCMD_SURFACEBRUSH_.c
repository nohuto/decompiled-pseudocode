__int64 __fastcall CSurfaceBrush::ProcessSetInterpolationMode(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE *a3)
{
  int v3; // eax
  _DWORD *v4; // r9

  v3 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a3 + 2));
  v4[25] = v3;
  (*(void (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)v4 + 72LL))(v4, 6LL, v4);
  return 0LL;
}
