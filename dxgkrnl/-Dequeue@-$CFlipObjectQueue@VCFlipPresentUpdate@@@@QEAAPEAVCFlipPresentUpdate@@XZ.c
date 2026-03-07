__int64 __fastcall CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(_QWORD *a1)
{
  __int64 v1; // r9
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 result; // rax

  v1 = (*a1 - 24LL) & -(__int64)(*a1 != 0LL);
  v2 = (_QWORD *)((v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2
    || (v4 = *(_QWORD **)(((v1 + 24) & ((unsigned __int128)-(__int128)((*a1 - 24LL) & (unsigned __int64)-(__int64)(*a1 != 0LL)) >> 64))
                        + 8),
        (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  result = v1;
  *(_QWORD *)(v3 + 8) = v4;
  v2[1] = v2;
  *v2 = v2;
  return result;
}
