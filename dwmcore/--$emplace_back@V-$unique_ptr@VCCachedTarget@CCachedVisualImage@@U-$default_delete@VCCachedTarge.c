__int64 __fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::emplace_back<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)(a1 + 16) )
    return std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::_Emplace_reallocate<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
             a1,
             v3,
             a2);
  v5 = *a2;
  *a2 = 0LL;
  *v3 = v5;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
