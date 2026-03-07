__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3,
        void **a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // rcx
  DirectComposition::CDCompMappedSharedSectionMarshaler *v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdi
  int v11; // r11d

  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < *((_QWORD *)this + 10)
    && (_mm_lfence(), (v8 = *(_QWORD *)(*((_QWORD *)this + 11) * v5 + *((_QWORD *)this + 7))) != 0)
    && (v9 = (DirectComposition::CDCompMappedSharedSectionMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8),
        (v10 = v9) != 0LL) )
  {
    v11 = DirectComposition::CDCompMappedSharedSectionMarshaler::InitializeSection(v9, a3, a4);
    if ( v11 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
