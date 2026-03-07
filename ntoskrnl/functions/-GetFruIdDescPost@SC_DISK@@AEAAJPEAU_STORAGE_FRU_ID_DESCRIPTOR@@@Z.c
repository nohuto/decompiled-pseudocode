__int64 __fastcall SC_DISK::GetFruIdDescPost(
        struct _UNICODE_STRING *this,
        struct _STORAGE_FRU_ID_DESCRIPTOR *a2,
        unsigned __int8 a3)
{
  char *v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx

  v5 = (char *)SC_ENV::Allocate((unsigned int)(*((_DWORD *)a2 + 2) + 1), (unsigned int)a2, a3);
  v6 = v5;
  if ( v5 )
  {
    memmove(v5, (char *)a2 + 12, *((unsigned int *)a2 + 2));
    v7 = ScAnsiToUnicodeString(v6, this + 18);
    SC_ENV::Free(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
