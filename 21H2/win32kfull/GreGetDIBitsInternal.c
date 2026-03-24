/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0082A14
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C007FE00 (NtGdiGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A9CD0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015CE20 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B65A4 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C007F448 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082DF4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026CFCC (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C027E080 (--1NEEDDDILOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  unsigned int DIBitsInternalWorker; // ebx
  unsigned int v13; // r15d
  BOOL v14; // esi
  unsigned __int8 *v15; // r12
  __int64 v16; // rsi
  unsigned int biSize; // r14d
  unsigned __int16 v18; // ax
  LONG v19; // r8d
  LONG v20; // r9d
  int v21; // edx
  DWORD v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v29[8]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v30[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h]
  DC *v32[6]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v33[13]; // [rsp+F0h] [rbp-18h] BYREF

  v9 = a6;
  DIBitsInternalWorker = 0;
  if ( a6 )
  {
    if ( a7 <= 2 )
    {
      v13 = a9;
      if ( a9 >= 0xC )
      {
        v14 = 1;
        v15 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
        DCOBJ::DCOBJ((DCOBJ *)v33, a1);
        if ( v33[0] )
          v14 = (*(_DWORD *)(*(_QWORD *)(v33[0] + 48LL) + 40LL) & 0x8000) == 0;
        DCOBJ::~DCOBJ((DCOBJ *)v33);
        LODWORD(a6) = v14;
        if ( v14 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        }
        SURFREF::SURFREF((SURFREF *)v30, a2);
        v16 = v31;
        if ( !v31 )
          goto LABEL_38;
        biSize = v9->bmiHeader.biSize;
        if ( !v15 )
        {
          if ( biSize == 12 )
          {
            if ( !HIWORD(v9->bmiHeader.biHeight) )
            {
              LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v31 + 56);
              HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v16 + 60);
              LOWORD(v9->bmiHeader.biHeight) = 1;
              v18 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v16 + 96));
              HIWORD(v9->bmiHeader.biHeight) = v18;
              if ( v18 >= 0x10u )
                HIWORD(v9->bmiHeader.biHeight) = 24;
LABEL_22:
              DIBitsInternalWorker = 1;
              goto LABEL_38;
            }
          }
          else
          {
            if ( v13 < 0x28 )
            {
LABEL_38:
              SURFREF::~SURFREF((SURFREF *)v30);
              NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
              return DIBitsInternalWorker;
            }
            if ( !v9->bmiHeader.biBitCount )
            {
              if ( biSize > 0x28 )
                memset(v9, 0, v9->bmiHeader.biSize);
              v9->bmiHeader.biSize = 40;
              v19 = *(_DWORD *)(v16 + 56);
              v9->bmiHeader.biWidth = v19;
              v20 = *(_DWORD *)(v16 + 60);
              v9->bmiHeader.biHeight = v20;
              v9->bmiHeader.biPlanes = 1;
              v9->bmiHeader.biCompression = 0;
              v21 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v16 + 96));
              v9->bmiHeader.biBitCount = v21;
              if ( v21 == 16 || v21 == 32 )
                v9->bmiHeader.biCompression = 3;
              *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
              v9->bmiHeader.biSizeImage = v20 * (((v19 * v21 + 31) >> 3) & 0xFFFFFFFC);
              v22 = *((_DWORD *)&gacPalEntries + *(unsigned int *)(v16 + 96));
              v9->bmiHeader.biClrImportant = v22;
              v9->bmiHeader.biClrUsed = v22;
              goto LABEL_22;
            }
          }
        }
        if ( biSize < 0x28 || v9->bmiHeader.biCompression - 4 > 1 )
        {
          DCOBJ::DCOBJ((DCOBJ *)v32, a1);
          if ( v32[0] )
          {
            v28 = *((_QWORD *)v32[0] + 6);
            v27 = *((_QWORD *)v32[0] + 11);
            if ( (*(_DWORD *)(v28 + 40) & 0x8000) != 0 )
            {
              DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                       biSize,
                                       v32,
                                       (struct PDEVOBJ *)&v28,
                                       (struct SURFREF *)v30,
                                       (struct XEPALOBJ *)&v27,
                                       a1,
                                       (HBITMAP)a2,
                                       a3,
                                       a4,
                                       v15,
                                       v9,
                                       a7,
                                       a8,
                                       v13);
            }
            else
            {
              NEEDGRELOCK::vLock((NEEDGRELOCK *)v29, (struct XDCOBJ *)v32);
              if ( v31 )
                v23 = v31 + 24;
              else
                v23 = 0LL;
              v26 = 0LL;
              if ( v23 )
              {
                v24 = *(_DWORD *)(v23 + 88);
                if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
                {
                  v26 = v23 - 24;
                  GreLockDisplayDevice(*(_QWORD *)(v23 - 24 + 48));
                }
              }
              DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                       biSize,
                                       v32,
                                       (struct PDEVOBJ *)&v28,
                                       (struct SURFREF *)v30,
                                       (struct XEPALOBJ *)&v27,
                                       a1,
                                       (HBITMAP)a2,
                                       a3,
                                       a4,
                                       v15,
                                       v9,
                                       a7,
                                       a8,
                                       v13);
              NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v26);
              NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v29);
            }
          }
          DCOBJ::~DCOBJ((DCOBJ *)v32);
        }
        else
        {
          EngSetLastError(0x57u);
        }
        goto LABEL_38;
      }
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
