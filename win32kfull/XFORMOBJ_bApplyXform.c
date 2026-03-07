// local variable allocation has failed, the output may be wrong!
BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  _DWORD *v5; // rdi
  struct _POINTFIX *v6; // rbx
  unsigned __int64 v7; // rbp
  struct MATRIX **v9; // r14
  struct _POINTL *v10; // rdx
  BOOL result; // eax
  struct _POINTFIX *v12; // rsi
  struct _POINTFIX *i; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+50h] [rbp-38h]

  v5 = pvOut;
  v6 = (struct _POINTFIX *)pvIn;
  v7 = cPoints;
  v9 = (struct MATRIX **)pxo;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( !iMode )
  {
    v10 = (struct _POINTL *)pvIn;
    if ( pvIn == pvOut )
    {
      *(_QWORD *)&cPoints = cPoints;
      return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, v10, *(__int64 *)&cPoints);
    }
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    {
      while ( v5 < (_DWORD *)((char *)pvOut + 8 * v7) )
      {
        *v5 = (*v5 + 8) >> 4;
        v5[1] = (v5[1] + 8) >> 4;
        v5 += 2;
      }
      return 1;
    }
    return 0;
  }
  if ( iMode == 2 )
    return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints);
  v16 = 0;
  memset(v15, 0, sizeof(v15));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v14, (struct MATRIX *)v15, 0);
  if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)v14, *v9) )
    return 0;
  if ( iMode != 1 )
  {
    if ( iMode == 3 )
      return EXFORMOBJ::bXform((EXFORMOBJ *)v14, v6, (struct _POINTL *)pvOut, v7);
    return 0;
  }
  if ( v6 == pvOut )
  {
    *(_QWORD *)&cPoints = v7;
    pxo = (XFORMOBJ *)v14;
    v10 = (struct _POINTL *)v6;
    return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, v10, *(__int64 *)&cPoints);
  }
  v12 = &v6[v7];
  for ( i = v6; i < v12; ++i )
  {
    i->x *= 16;
    i->y *= 16;
  }
  result = EXFORMOBJ::bXform((EXFORMOBJ *)v14, v6, (struct _POINTL *)pvOut, v7);
  while ( v6 < v12 )
  {
    v6->x >>= 4;
    v6->y >>= 4;
    ++v6;
  }
  return result;
}
