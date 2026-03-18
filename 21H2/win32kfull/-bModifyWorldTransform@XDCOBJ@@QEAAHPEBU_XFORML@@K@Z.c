/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C00396E0
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x1C00E4720 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0039670 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0159400 (memcmp.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02B5748 (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-10h]

  v4 = 0;
  v21 = 0;
  Buf1 = 0LL;
  v20 = 0LL;
  if ( a3 == 1 )
  {
LABEL_16:
    v11 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) == 0 )
    {
      *(_OWORD *)(v11 + 392) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v11 + 408) = *((_OWORD *)&gmxIdentity_LToL + 1);
      v12 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      *(_OWORD *)(v12 + 356) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v12 + 372) = *((_OWORD *)&gmxIdentity_LToL + 1);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) |= 0x80B2u;
    }
    return 1;
  }
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
    {
      vConvertXformToMatrix(a2, &Buf1);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) != 0
        || (EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, this, 0x203u), v18[0])
        && (unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v18, (struct MATRIX *)&Buf1, a3) )
      {
        if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        {
          v13 = *(_QWORD *)this;
          *(_OWORD *)(v13 + 392) = Buf1;
          *(_OWORD *)(v13 + 408) = v20;
          v14 = *(_QWORD *)(*(_QWORD *)this + 976LL);
          *(_OWORD *)(v14 + 356) = Buf1;
          *(_OWORD *)(v14 + 372) = v20;
          v15 = *(_QWORD *)this;
          v16 = memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) == 0;
          v17 = *(_QWORD *)(v15 + 976);
          if ( v16 )
          {
            *(_DWORD *)(v17 + 340) |= 0x80B2u;
            return 1;
          }
          *(_DWORD *)(v17 + 340) |= 0x80B0u;
          v9 = *(_QWORD *)(v15 + 976);
LABEL_12:
          *(_DWORD *)(v9 + 340) &= ~2u;
          return 1;
        }
      }
    }
    else if ( a3 == 4 )
    {
      if ( a2->eM11 == 1.0 && a2->eM12 == 0.0 && a2->eM21 == 0.0 && a2->eM22 == 1.0 && a2->eDx == 0.0 && a2->eDy == 0.0 )
        goto LABEL_16;
      vConvertXformToMatrix(a2, &Buf1);
      if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      {
        v6 = *(_QWORD *)this;
        *(_OWORD *)(v6 + 392) = Buf1;
        *(_OWORD *)(v6 + 408) = v20;
        v7 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        *(_OWORD *)(v7 + 356) = Buf1;
        *(_OWORD *)(v7 + 372) = v20;
        v8 = *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) |= 0x80B0u;
        v9 = *(_QWORD *)(v8 + 976);
        goto LABEL_12;
      }
    }
  }
  return v4;
}
