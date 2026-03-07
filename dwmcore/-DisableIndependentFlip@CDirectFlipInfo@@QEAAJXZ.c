__int64 __fastcall CDirectFlipInfo::DisableIndependentFlip(CDirectFlipInfo *this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2)) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 376LL))(
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x23Cu, 0LL);
  }
  *((_DWORD *)this + 14) = 0;
  result = v2;
  *((_DWORD *)this + 17) = 0;
  return result;
}
