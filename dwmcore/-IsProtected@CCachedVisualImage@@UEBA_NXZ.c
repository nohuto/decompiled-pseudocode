char __fastcall CCachedVisualImage::IsProtected(CCachedVisualImage *this)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 i; // rdi
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 16);
  v2 = 0;
  for ( i = *((_QWORD *)this + 15); i != v1; i += 8LL )
  {
    v4 = *(_QWORD *)(*(_QWORD *)i + 8LL) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 8LL) + 16LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
      v2 = 1;
  }
  return v2;
}
