__int64 __fastcall CCompositeEffect::ProcessUpdate(
        CCompositeEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITEEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CCompositeEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
