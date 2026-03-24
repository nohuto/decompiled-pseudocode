/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0098420
 * Callers:
 *     <none>
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C00951F8 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memcmp @ 0x1C0165DD0 (memcmp.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02B7770 (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-49h] BYREF
  int v17; // [rsp+28h] [rbp-41h]
  int v18; // [rsp+2Ch] [rbp-3Dh]
  _BYTE v19[32]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 Buf1; // [rsp+60h] [rbp-9h] BYREF
  __int128 v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+17h]
  struct _XFORML v24; // [rsp+88h] [rbp+1Fh] BYREF

  v3 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v19);
  XDCOBJ::vLock((XDCOBJ *)&v16, a1);
  v7 = v16;
  if ( !v16 )
    goto LABEL_30;
  memset(&v24, 0, sizeof(v24));
  if ( a2 )
  {
    v8 = ProbeAndConvertXFORM(a2, &v24);
    v7 = v16;
    v3 = v8;
  }
  else
  {
    LOBYTE(v3) = a3 == 1;
  }
  if ( !v3 )
    goto LABEL_30;
  v3 = 0;
  v23 = 0;
  Buf1 = 0LL;
  v22 = 0LL;
  if ( a3 == 1 )
    goto LABEL_26;
  if ( a3 <= 1 )
    goto LABEL_30;
  if ( a3 <= 3 )
  {
    vConvertXformToMatrix(&v24, &Buf1);
    v12 = v16;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 976) + 340LL) & 2) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)&v16, 0x203u);
      if ( !v20[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v20, (struct MATRIX *)&Buf1, a3) )
        goto LABEL_30;
      v12 = v16;
    }
    if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      goto LABEL_30;
    *(_OWORD *)(v12 + 392) = Buf1;
    *(_OWORD *)(v12 + 408) = v22;
    v13 = *(_QWORD *)(v16 + 976);
    *(_OWORD *)(v13 + 356) = Buf1;
    *(_OWORD *)(v13 + 372) = v22;
    if ( memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) )
      goto LABEL_18;
LABEL_28:
    *(_DWORD *)(*(_QWORD *)(v16 + 976) + 340LL) |= 0x80B2u;
    goto LABEL_29;
  }
  if ( a3 != 4 )
    goto LABEL_30;
  if ( v24.eM11 == 1.0 && v24.eM12 == 0.0 && v24.eM21 == 0.0 && v24.eM22 == 1.0 && v24.eDx == 0.0 && v24.eDy == 0.0 )
  {
LABEL_26:
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 976) + 340LL) & 2) != 0 )
      goto LABEL_29;
    *(_OWORD *)(v7 + 392) = *(_OWORD *)&gmxIdentity_LToL;
    *(_OWORD *)(v7 + 408) = *((_OWORD *)&gmxIdentity_LToL + 1);
    v14 = *(_QWORD *)(v16 + 976);
    *(_OWORD *)(v14 + 356) = *(_OWORD *)&gmxIdentity_LToL;
    *(_OWORD *)(v14 + 372) = *((_OWORD *)&gmxIdentity_LToL + 1);
    goto LABEL_28;
  }
  vConvertXformToMatrix(&v24, &Buf1);
  if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
  {
    v9 = v16;
    *(_OWORD *)(v16 + 392) = Buf1;
    *(_OWORD *)(v9 + 408) = v22;
    v10 = *(_QWORD *)(v16 + 976);
    *(_OWORD *)(v10 + 356) = Buf1;
    *(_OWORD *)(v10 + 372) = v22;
LABEL_18:
    v11 = v16;
    *(_DWORD *)(*(_QWORD *)(v16 + 976) + 340LL) |= 0x80B0u;
    *(_DWORD *)(*(_QWORD *)(v11 + 976) + 340LL) &= ~2u;
LABEL_29:
    v3 = 1;
  }
LABEL_30:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v16);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  return v3;
}
