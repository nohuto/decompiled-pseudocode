__int64 __fastcall CCompositionBuffer::RemoveRealization(
        CCompositionBuffer *this,
        const struct CSM_REALIZATION_INFO *a2,
        struct CBufferRealization **a3)
{
  __int64 result; // rax
  char *v5; // rcx
  __int64 v6; // r8
  char **v7; // rdx

  result = CCompositionBuffer::FindRealization(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v5 = (char *)*a3 + 8;
    v6 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)*((_QWORD *)*a3 + 2), *v7 != v5) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  return result;
}
