__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // ebx
  char *v7; // rax
  char *v8; // rdx

  v2 = dword_1803E30E8;
  v4 = 1;
  v5 = dword_1803E30E8 + 1;
  if ( dword_1803E30E8 + 1 <= 0 )
    return 0;
  if ( dword_1803E30E8 == dword_1803E30EC )
  {
    if ( dword_1803E30E8 > 0x3FFFFFFF || (unsigned __int64)dword_1803E30E8 > 0xFFFFFFFFFFFFFFFLL )
      return 0;
    v6 = 2;
    if ( dword_1803E30EC >= 2 )
      v6 = dword_1803E30E8 + (dword_1803E30E8 >> 1);
    v7 = (char *)(dword_1803E30E8
                ? DefaultHeap::Realloc(CInteraction::s_DefaultStateLockedInteractions, 8LL * v6)
                : DefaultHeap::AllocClear(8LL * v6));
    if ( !v7 )
      return 0;
    dword_1803E30EC = v6;
    CInteraction::s_DefaultStateLockedInteractions = v7;
  }
  else
  {
    v7 = (char *)CInteraction::s_DefaultStateLockedInteractions;
  }
  v8 = &v7[8 * v2];
  dword_1803E30E8 = v5;
  if ( v8 )
    *(_QWORD *)v8 = *a2;
  return v4;
}
