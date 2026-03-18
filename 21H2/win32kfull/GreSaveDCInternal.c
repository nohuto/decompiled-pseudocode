/*
 * XREFs of GreSaveDCInternal @ 0x1C00DE7E8
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C00DE7D0 (NtGdiSaveDC.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientLpkDrawTextEx @ 0x1C022C7DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C022CBE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C00F4EC8 (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C02835BC (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDCInternal(HDC a1, int a2)
{
  DC *v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // r12
  int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // rdi
  int v14; // eax
  DC *v15; // rcx
  __int64 v16; // rdx
  _QWORD v18[2]; // [rsp+20h] [rbp-50h] BYREF
  int v19; // [rsp+30h] [rbp-40h]
  DC *v20; // [rsp+38h] [rbp-38h] BYREF
  int v21; // [rsp+40h] [rbp-30h]
  int v22; // [rsp+44h] [rbp-2Ch]
  _BYTE v23[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF

  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v23);
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  v4 = v20;
  v5 = 0;
  if ( !v20 )
    goto LABEL_37;
  if ( a2 )
    goto LABEL_5;
  if ( (*(_DWORD *)(HmgPentryFromPobj(v20) + 8) & 0xFFFFFFFE) == 0 )
  {
LABEL_37:
    EngSetLastError(6u);
    goto LABEL_38;
  }
  v4 = v20;
LABEL_5:
  v6 = *((_QWORD *)v4 + 122);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v4, *(_QWORD *)(v6 + 160));
    v4 = v20;
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v4, *(_QWORD *)(*((_QWORD *)v4 + 122) + 168LL));
    v4 = v20;
  }
  v8 = *((_QWORD *)v4 + 6);
  v24 = v8;
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
    GreLockVisRgn(v8);
  GreAcquireSemaphore(ghsemPalette);
  v9 = *((_DWORD *)v20 + 9) & 0x800;
  if ( v9 )
    DC::bMakeInfoDC(v20, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v18, (struct DCOBJ *)&v20);
  if ( v18[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v24);
    v10 = *((_QWORD *)v20 + 14);
    *((_QWORD *)v20 + 14) = *(_QWORD *)v18[0];
    v11 = *(_DWORD *)(v18[0] + 104LL);
    if ( !(unsigned int)bSavePath((struct XDCOBJ *)&v20, v11 + 1) )
      goto LABEL_30;
    v12 = *(_DWORD *)(v18[0] + 104LL);
    if ( (unsigned int)bSaveRegion(&v20, v12 + 1) )
    {
      if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v18[0], 2147483666LL, 0LL, 0LL) )
      {
        v19 = 1;
        PDEVOBJ::vUnreferencePdev(&v24, 0LL);
        if ( (*((_DWORD *)v20 + 9) & 0x4000) != 0 )
          *(_DWORD *)(v18[0] + 36LL) |= 0x4000u;
        v13 = *(_QWORD *)(v18[0] + 496LL);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 112);
          if ( (v14 & 0x800) != 0 )
          {
            INC_SHARE_REF_CNT(*(_QWORD *)(v18[0] + 496LL));
          }
          else if ( v14 >= 0 )
          {
            INC_SHARE_REF_CNT(*(_QWORD *)(v18[0] + 496LL));
            ++*(_DWORD *)(v13 + 168);
          }
        }
        INC_SHARE_REF_CNT(*((_QWORD *)v20 + 17));
        INC_SHARE_REF_CNT(*((_QWORD *)v20 + 18));
        INC_SHARE_REF_CNT(*((_QWORD *)v20 + 19));
        INC_SHARE_REF_CNT(*((_QWORD *)v20 + 12));
        v15 = v20;
        v16 = *((_QWORD *)v20 + 11);
        if ( (struct PALETTE *)v16 != ppalDefault )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 56));
          v15 = v20;
        }
        v5 = *((_DWORD *)v15 + 26);
        *((_DWORD *)v15 + 26) = v5 + 1;
        goto LABEL_31;
      }
      vRestoreRegion(&v20, v12);
    }
    vRestorePath((struct XDCOBJ *)&v20, v11);
    if ( &v20 )
LABEL_30:
      *((_QWORD *)v20 + 14) = v10;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_31:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v18);
  if ( v9 )
    DC::bMakeInfoDC(v20, 1);
  if ( (*(_DWORD *)(v24 + 40) & 1) != 0 )
    GreUnlockVisRgn(v24);
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
LABEL_38:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v20);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
  return v5;
}
