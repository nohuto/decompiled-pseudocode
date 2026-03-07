BOOL __stdcall STROBJ_bGetAdvanceWidths(STROBJ *pso, ULONG iFirst, ULONG c, POINTQF *pptqD)
{
  ULONG cGlyphs; // ecx
  ULONG v6; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8

  cGlyphs = pso->cGlyphs;
  v6 = iFirst + c;
  if ( iFirst >= cGlyphs || v6 > cGlyphs || v6 < iFirst )
    return 0;
  if ( ((__int64)pso[4].pwszOrg & 0x1400) != 0 )
    return STROBJ_bGetAdvanceWidthsLinked((struct ESTROBJ *)pso, iFirst, c, pptqD);
  v8 = *(_QWORD *)&pso[1].rclBkGround.top + 24LL * iFirst;
  v9 = v8 + 24LL * c;
  if ( *(_DWORD *)(**(_QWORD **)&pso[1].ulCharInc + 640LL) )
  {
    while ( v8 < v9 )
    {
      pptqD->x.HighPart = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 12LL);
      pptqD->x.LowPart = 0;
      pptqD->y.QuadPart = 0LL;
      v8 += 24LL;
      ++pptqD;
    }
  }
  else
  {
    while ( v8 < v9 )
    {
      *pptqD++ = *(POINTQF *)(*(_QWORD *)(v8 + 8) + 48LL);
      v8 += 24LL;
    }
  }
  return 1;
}
