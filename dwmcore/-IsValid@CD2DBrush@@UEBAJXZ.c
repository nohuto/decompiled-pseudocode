__int64 __fastcall CD2DBrush::IsValid(CD2DBrush *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 4) )
    return 2291662989LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 12) + 8LL) - 96;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
