char *__fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::emplace_back<CWeakReference<CResource> * &,unsigned int &>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v4; // rdx
  char *result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
    return std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
             (__int128 **)a1,
             (char *)v4,
             a2,
             a3);
  *(_QWORD *)v4 = *a2;
  *(_DWORD *)(v4 + 8) = *a3;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
