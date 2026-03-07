__int64 __fastcall CTurbulenceEffect::ProcessUpdate(
        CTurbulenceEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TURBULENCEEFFECT *a3)
{
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 24) = *((_QWORD *)a3 + 3);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 11);
  (*(void (__fastcall **)(CTurbulenceEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
