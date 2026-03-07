_DWORD *__fastcall CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(int **a1, __int64 a2)
{
  int RectangleCount; // eax
  unsigned int v5; // esi
  int v6; // eax
  _DWORD *result; // rax
  int v8; // r10d
  int v9; // r11d
  FastRegion::Internal::CRgnData *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // r8d
  _BYTE v14[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]
  _DWORD *v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16, RectangleCount, 0LL);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  FastRegion::Internal::CRgnData::BeginIterator(
    (FastRegion::Internal::CRgnData *)*a1,
    (struct FastRegion::CRegion::Iterator *)v14);
  while ( 1 )
  {
    result = v16;
    if ( (unsigned __int64)v16 >= v15 )
      break;
    v8 = *v16;
    v9 = v16[2];
    v10 = *(FastRegion::Internal::CRgnData **)a2;
    v11 = 2 * v18;
    v12 = 2LL * v5;
    v13 = *(_DWORD *)(v17 + 4 * v11 + 4);
    *((_DWORD *)v10 + 2 * v12) = *(_DWORD *)(v17 + 4 * v11);
    *((_DWORD *)v10 + 2 * v12 + 1) = v8;
    *((_DWORD *)v10 + 2 * v12 + 2) = v13;
    *((_DWORD *)v10 + 2 * v12 + 3) = v9;
    FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v14);
    ++v5;
  }
  return result;
}
