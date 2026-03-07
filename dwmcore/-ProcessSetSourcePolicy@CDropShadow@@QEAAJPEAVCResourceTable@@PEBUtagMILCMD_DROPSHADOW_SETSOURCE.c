__int64 __fastcall CDropShadow::ProcessSetSourcePolicy(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETSOURCEPOLICY *a3)
{
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
  return 0LL;
}
