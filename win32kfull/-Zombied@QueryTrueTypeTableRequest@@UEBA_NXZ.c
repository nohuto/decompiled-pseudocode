bool __fastcall QueryTrueTypeTableRequest::Zombied(QueryTrueTypeTableRequest *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 5) + 12LL);
}
