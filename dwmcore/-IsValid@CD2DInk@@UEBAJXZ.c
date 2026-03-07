__int64 __fastcall CD2DInk::IsValid(CD2DInk *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 5) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 8LL) - 104;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
