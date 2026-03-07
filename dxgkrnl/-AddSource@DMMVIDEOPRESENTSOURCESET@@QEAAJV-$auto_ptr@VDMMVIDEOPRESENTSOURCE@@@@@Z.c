__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // r10

  v2 = 0;
  if ( !*a2 )
    WdLogSingleEntry0(1LL);
  v5 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( v5 )
  {
    if ( v5 != v6 )
    {
      WdLogSingleEntry3(2LL, *(unsigned int *)(v6 + 24), v6, a1);
      v2 = -1071774927;
      goto LABEL_6;
    }
LABEL_9:
    WdLogSingleEntry2(2LL, *a2, a1);
    v2 = -1071774953;
    goto LABEL_6;
  }
  if ( !Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v6) )
    goto LABEL_9;
  *a2 = 0LL;
LABEL_6:
  auto_ptr<DMMVIDEOPRESENTSOURCE>::~auto_ptr<DMMVIDEOPRESENTSOURCE>(a2);
  return v2;
}
