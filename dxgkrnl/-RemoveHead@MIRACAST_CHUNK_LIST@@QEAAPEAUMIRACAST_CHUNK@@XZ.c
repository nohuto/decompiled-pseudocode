struct MIRACAST_CHUNK *__fastcall MIRACAST_CHUNK_LIST::RemoveHead(MIRACAST_CHUNK_LIST *this)
{
  struct MIRACAST_CHUNK *result; // rax
  __int64 v2; // rdx

  result = *(struct MIRACAST_CHUNK **)this;
  if ( *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)this + 8LL) != this
    || (v2 = *(_QWORD *)result, *(struct MIRACAST_CHUNK **)(*(_QWORD *)result + 8LL) != result) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)this = v2;
  *(_QWORD *)(v2 + 8) = this;
  if ( result == this )
    return 0LL;
  --*((_DWORD *)this + 4);
  return result;
}
