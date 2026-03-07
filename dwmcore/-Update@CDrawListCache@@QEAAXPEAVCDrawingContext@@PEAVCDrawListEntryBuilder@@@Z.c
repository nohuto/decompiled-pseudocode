void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3)
{
  enum D2D1_ANTIALIAS_MODE v5; // r9d
  unsigned __int64 v6; // rdx
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 568LL) )
    *((_BYTE *)this + 101) = 1;
  v5 = *((_DWORD *)a2 + 84) != 0;
  if ( *((_BYTE *)a2 + 8048) )
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 1007) + 4704LL);
  else
    v6 = 0LL;
  CDrawListCache::Update(
    this,
    v6,
    *((struct CDrawListEntry ***)a3 + 11),
    (__int64)(*((_QWORD *)a3 + 12) - *((_QWORD *)a3 + 11)) >> 3,
    v5,
    *((_BYTE *)a3 + 4472));
  if ( (*((_BYTE *)this + 88) & 0x40) != 0 )
  {
    v8 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v7);
    if ( !(unsigned __int8)CMILMatrix::Get2DScaleDimensionsWithPerspective(
                             (CMILMatrix *)v7,
                             (float *)this + 20,
                             (float *)this + 21) )
      *((_DWORD *)this + 22) |= 0x100u;
  }
}
