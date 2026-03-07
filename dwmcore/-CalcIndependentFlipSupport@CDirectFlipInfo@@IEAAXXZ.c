void __fastcall CDirectFlipInfo::CalcIndependentFlipSupport(CDirectFlipInfo *this)
{
  char v2; // bl
  __int64 v3; // rax

  if ( CCommonRegistryData::m_fDisableIndependentFlip
    || (v2 = 1, *((_DWORD *)this + 13) == 1)
    || *((int *)this + 13) >= 3
    || (v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this),
        !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3)) )
  {
    v2 = 0;
  }
  *((_BYTE *)this + 122) = v2;
}
