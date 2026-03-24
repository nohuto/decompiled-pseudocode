/*
 * XREFs of NtGdiGetDCObject @ 0x1C00AA130
 * Callers:
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00AB8BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D5A80 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 */

__int64 __fastcall NtGdiGetDCObject(HDC a1, int a2)
{
  __int64 v4; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  __int64 *v9; // rax
  _QWORD v10[6]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v11; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  _BYTE v14[56]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+3Fh]
  __int64 v16; // [rsp+B8h] [rbp+47h]
  __int64 v17; // [rsp+C0h] [rbp+4Fh]

  v4 = 0LL;
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || a1 != (HDC)-589410304LL )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    v6 = (_QWORD *)v10[0];
    if ( v10[0] )
    {
      v7 = *(_QWORD *)(v10[0] + 976LL);
      v8 = *(_DWORD *)(v7 + 152);
      if ( (v8 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v10[0], *(_QWORD *)(v7 + 160));
        v6 = (_QWORD *)v10[0];
      }
      if ( (v8 & 0x2000) != 0 )
      {
        GreDCSelectPen(v6, *(_QWORD *)(v6[122] + 168LL));
        v6 = (_QWORD *)v10[0];
      }
      switch ( a2 )
      {
        case 0x50000:
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v14);
          v12 = 0LL;
          v11 = 0LL;
          v13 = 0;
          DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v11);
          v17 = 0LL;
          v16 = 0LL;
          v15 = 0LL;
          DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v11, (struct XDCOBJ *)v10);
          v4 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v10) + 4);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v11);
          goto LABEL_22;
        case 0x80000:
          v4 = v6[10];
          goto LABEL_22;
        case 0xA0000:
          v4 = *(_QWORD *)(v6[122] + 296LL);
          goto LABEL_22;
        case 0x100000:
          v9 = (__int64 *)v6[17];
          goto LABEL_18;
      }
      if ( ((a2 - 3145728) & 0xFFDFFFFF) == 0 )
      {
        v9 = (__int64 *)v6[18];
LABEL_18:
        v4 = *v9;
      }
    }
LABEL_22:
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    return v4;
  }
  if ( a2 == 655360 )
    return GreGetStockObject(13LL);
  else
    return 0LL;
}
