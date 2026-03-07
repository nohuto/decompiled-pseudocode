__int64 __fastcall DXG_REGISTRY_KEY_LIST::ReadNextPath(wchar_t **this, struct _UNICODE_STRING *a2)
{
  wchar_t *v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v2 = *this;
  if ( *((wchar_t ***)*this + 1) != this || (v3 = *(_QWORD *)v2, *(wchar_t **)(*(_QWORD *)v2 + 8LL) != v2) )
    __fastfail(3u);
  *this = (wchar_t *)v3;
  *(_QWORD *)(v3 + 8) = this;
  v4 = RtlUnicodeStringCopyString(a2, v2 + 8);
  operator delete(v2);
  return v4;
}
