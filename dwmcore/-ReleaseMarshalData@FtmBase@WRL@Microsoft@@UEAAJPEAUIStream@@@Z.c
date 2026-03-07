__int64 __fastcall Microsoft::WRL::FtmBase::ReleaseMarshalData(Microsoft::WRL::FtmBase *this, struct IStream *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct IStream *))(*(_QWORD *)v2 + 56LL))(v2, a2);
  else
    return 2147942414LL;
}
