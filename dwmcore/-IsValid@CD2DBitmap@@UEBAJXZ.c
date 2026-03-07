__int64 __fastcall CD2DBitmap::IsValid(CD2DBitmap *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 19) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 32) + 8LL) - 256;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
