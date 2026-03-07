bool __fastcall CD2DTarget::CacheTarget(CD2DTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3)) != 0;
  return v1;
}
