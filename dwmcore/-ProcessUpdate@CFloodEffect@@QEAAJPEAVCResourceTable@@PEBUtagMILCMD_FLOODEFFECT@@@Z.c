__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FLOODEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  (*(void (__fastcall **)(CFloodEffect *, _QWORD, _QWORD))(v3 + 72))(this, 0LL, 0LL);
  return 0LL;
}
