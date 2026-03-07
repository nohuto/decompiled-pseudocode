__int64 __fastcall CD2DEffect::IsValid(CD2DEffect *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 4) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 12) + 8LL) - 96;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
