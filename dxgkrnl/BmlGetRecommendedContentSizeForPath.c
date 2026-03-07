__int64 __fastcall BmlGetRecommendedContentSizeForPath(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  struct DMMVIDPNTARGETMODESET *v8; // rax
  __int64 v9; // rdx
  struct DMMVIDPNTARGETMODESET *v10; // rbx
  unsigned int v11; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  UINT v14; // ebp
  UINT v15; // eax
  bool v16; // cl
  UINT v17; // r15d
  __int64 v18; // rax
  const struct DMMVIDPNSOURCEMODE *v19; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // r14
  int v21; // eax
  struct _D3DKMDT_2DREGION v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  bool v25; // [rsp+90h] [rbp+8h]

  v4 = a2;
  if ( !a1 || a2 >= *a1 || !a3 || !a4 )
    WdLogSingleEntry0(1LL);
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
    WdLogSingleEntry0(1LL);
  v8 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a3 + 88));
  v10 = v8;
  if ( !v8 )
  {
    v11 = -1071774968;
    goto LABEL_32;
  }
  v12 = (_QWORD *)((char *)v8 + 48);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    v11 = -1071774970;
    goto LABEL_32;
  }
  v14 = *(_DWORD *)(a4 + 152);
  v15 = *(_DWORD *)(a4 + 156);
  v16 = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v23 = 0LL;
  v25 = v16;
  if ( v16 )
  {
    v17 = v15;
    v23.cx = v15;
    v23.cy = v14;
  }
  else
  {
    v17 = v14;
    v23.cx = v14;
    v14 = v15;
    v23.cy = v15;
  }
  v18 = 120 * v4;
  v19 = 0LL;
  v24 = v18;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v13 - 1);
  if ( !NextMode )
  {
LABEL_31:
    v11 = -1071774970;
    WdLogSingleEntry4(2LL, v17, v14, a3, -1071774970LL);
LABEL_32:
    if ( v10 )
      goto LABEL_33;
    return v11;
  }
  do
  {
    LOBYTE(v9) = 1;
    if ( (unsigned __int8)BmlIsSupportedSourceMode(NextMode, v9, *(unsigned int *)&a1[v18 + 120])
      && (BmlAreRawModesEnabled((__int64)a1, a2)
       || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v24 + 36]) != 1) )
    {
      if ( v19 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v19 + 76),
                             &v23) != 1 )
          goto LABEL_25;
        if ( *((_DWORD *)v19 + 19) == v17 && *((_DWORD *)v19 + 20) == v14 )
          WdLogSingleEntry0(1LL);
      }
      v19 = NextMode;
    }
LABEL_25:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v10, NextMode);
    v18 = v24;
  }
  while ( NextMode );
  if ( !v19 )
    goto LABEL_31;
  if ( v25 )
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v19 + 20);
    v21 = *((_DWORD *)v19 + 19);
  }
  else
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v19 + 19);
    v21 = *((_DWORD *)v19 + 20);
  }
  *(_DWORD *)(a4 + 164) = v21;
  v11 = 0;
LABEL_33:
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v10 + 88));
  return v11;
}
