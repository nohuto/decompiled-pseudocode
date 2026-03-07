char *__fastcall std::vector<std::unique_ptr<ICheckMPOCache>>::emplace_back<std::unique_ptr<CCheckMPOCache>>(
        char **a1,
        __int64 *a2)
{
  char *v3; // rcx
  __int64 v4; // rax
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::unique_ptr<ICheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(
             a1,
             v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)v3 = v4;
  result = a1[1];
  a1[1] = result + 8;
  return result;
}
