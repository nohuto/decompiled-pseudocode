_DWORD *__fastcall CRegionShape::BuildFromRects(__int64 a1, const struct tagRECT *a2, unsigned int a3)
{
  struct FastRegion::Internal::CRgnData **v3; // rdi
  _DWORD *result; // rax
  __int64 v7; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct FastRegion::Internal::CRgnData **)(a1 + 16);
  result = *(_DWORD **)(a1 + 16);
  *result = 0;
  v7 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v7 )
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( a3 )
  {
    result = (_DWORD *)CRegion::TryAddRectangles(v3, a2, a3);
    if ( (int)result < 0 )
      ModuleFailFastForHRESULT((unsigned int)result, retaddr);
  }
  return result;
}
