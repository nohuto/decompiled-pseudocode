/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C010B114
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0084420 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C010B3B8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C026B4E4 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall SpCreateSurface(SURFREF *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v11; // [rsp+80h] [rbp-80h] BYREF
  char v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+8Ch] [rbp-74h]
  _DWORD v14[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  _BYTE v17[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-30h]
  __int128 v19; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-10h]
  int v21; // [rsp+F8h] [rbp-8h]
  _QWORD v22[10]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v23; // [rsp+188h] [rbp+88h] BYREF

  v23 = a2;
  if ( (!gfEnableDeviceBitmapsForNonHintedShapes || !g_pDwmState || !gfDwmDeviceBitmapsEnabled)
    && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v23) )
  {
    v6 = 0;
LABEL_13:
    v14[1] = *a3;
    v8 = a3[1];
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    v14[3] = 0;
    v16 = 2049LL;
    v14[0] = 6;
    v14[2] = v8;
    v15 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v14, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
    {
      *(_QWORD *)(v11 + 48) = a2;
      v12 |= 1u;
      *(_DWORD *)(v11 + 112) |= 0x800u;
      EtwPhysicalSurfCreateEvent(*(_QWORD *)(v11 + 32), 0LL, 0LL, v6);
      v9 = v11;
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
      if ( v9 )
      {
        *((_QWORD *)a1 + 4) = v9;
        INC_SHARE_REF_CNT(v9);
      }
    }
    else
    {
      SURFREF::SURFREF(a1);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
    return a1;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v22);
  v22[8] = 0LL;
  v19 = 0LL;
  v22[7] = 0LL;
  v22[0] = 0LL;
  v21 = 1;
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(a2 + 48);
    v20 = a2;
    GreAcquireSemaphore(v19);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
  }
  CreateCompatibleSurface((SURFREF *)v17, a2, 6LL, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
  if ( !v18 )
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
    v6 = 1;
    goto LABEL_13;
  }
  LOBYTE(v7) = 5;
  HmgSetOwner(*(_QWORD *)(v18 + 32), 0LL, v7);
  GreMarkUndeletableBitmap(*(_QWORD *)(v18 + 32));
  SURFREF::SURFREF(a1, v17);
  if ( v18 )
    DEC_SHARE_REF_CNT(v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
  return a1;
}
