struct _FILE_OBJECT *__fastcall CClfsManagedLogClient::GetLogFileObject(CClfsManagedLogClient *this)
{
  return (struct _FILE_OBJECT *)*((_QWORD *)this + 11);
}
