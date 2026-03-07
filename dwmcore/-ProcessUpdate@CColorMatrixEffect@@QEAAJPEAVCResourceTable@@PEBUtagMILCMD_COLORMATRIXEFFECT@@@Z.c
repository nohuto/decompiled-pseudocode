__int64 __fastcall CColorMatrixEffect::ProcessUpdate(
        CColorMatrixEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORMATRIXEFFECT *a3)
{
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)this + 12) = *(_OWORD *)((char *)a3 + 24);
  *((_OWORD *)this + 13) = *(_OWORD *)((char *)a3 + 40);
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a3 + 56);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a3 + 72);
  *((_DWORD *)this + 64) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 23);
  (*(void (__fastcall **)(CColorMatrixEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
