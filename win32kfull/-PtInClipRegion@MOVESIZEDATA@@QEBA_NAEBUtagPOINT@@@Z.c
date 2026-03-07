bool __fastcall MOVESIZEDATA::PtInClipRegion(MOVESIZEDATA *this, const struct tagPOINT *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  bool v5; // bl
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 104);
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 168LL);
  if ( !v8 )
    return PtInRect((_DWORD *)this + 22, (unsigned __int64)*a2);
  v5 = (unsigned int)TransformRegionBetweenCoordinateSpaces(v2, v4, &v8) != 0;
  v6 = (unsigned int)GrePtInRegion(v8, (unsigned int)a2->x, (unsigned int)a2->y) != 0;
  if ( v5 )
    GreDeleteObject(v8);
  return v6;
}
