CShapePtr *__fastcall CGdiSpriteBitmap::GetAccumShape(__int64 a1, CShapePtr *a2, char a3)
{
  int **v3; // r14
  __int64 v7; // rcx
  _DWORD **v8; // r15
  int v9; // eax
  int v11; // eax
  struct CShape *v12; // rbx
  __int64 v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CShape *v15; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = (int **)(a1 + 256);
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_BYTE *)(a1 + 145) )
  {
    **v3 = 0;
    v7 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = (_DWORD **)(a1 + 168);
    v9 = FastRegion::CRegion::Copy(v3, (int **)(a1 + 168));
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    *(_BYTE *)(a1 + 145) = 0;
  }
  else
  {
    v8 = (_DWORD **)(a1 + 168);
  }
  if ( a3 )
  {
    v11 = CShape::CopyShape((CShape *)(a1 + 240), 0LL, &v15);
    if ( v11 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
    v12 = v15;
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = v12;
    *((_BYTE *)a2 + 8) = 1;
    **v8 = 0;
    **v3 = 0;
    v13 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = a1 + 240;
    *((_BYTE *)a2 + 8) = 0;
  }
  return a2;
}
