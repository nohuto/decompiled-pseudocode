/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0027480
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0023D00 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C0026E60 (NtGdiGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1C023A12C (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B4800 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0027858 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0028378 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026AD6C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C027BBF0 (--1NEEDDDILOCK@@QEAA@XZ.c)
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
  unsigned int *v16; // rsi
  unsigned int biSize; // r14d
  unsigned __int16 v18; // ax
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  int v21; // edx
  unsigned int v22; // eax
  int v23; // eax
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  char v28[8]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v29[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  _QWORD v31[6]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v32[13]; // [rsp+F0h] [rbp-18h] BYREF

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
        DCOBJ::DCOBJ((DCOBJ *)v32, a1);
        if ( v32[0] )
          v14 = (*(_DWORD *)(*(_QWORD *)(v32[0] + 48LL) + 40LL) & 0x8000) == 0;
        DCOBJ::~DCOBJ((DCOBJ *)v32);
        if ( v14 )
        {
          LOBYTE(a6) = 1;
          GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        }
        else
        {
          LOBYTE(a6) = 0;
        }
        SURFREF::SURFREF((SURFREF *)v29, a2);
        v16 = (unsigned int *)v30;
        if ( !v30 )
          goto LABEL_37;
        biSize = v9->bmiHeader.biSize;
        if ( !v15 )
        {
          if ( biSize == 12 )
          {
            if ( !HIWORD(v9->bmiHeader.biHeight) )
            {
              LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v30 + 56);
              HIWORD(v9->bmiHeader.biWidth) = *((_WORD *)v16 + 30);
              LOWORD(v9->bmiHeader.biHeight) = 1;
              v18 = *((_WORD *)&galBitsPerPixel + 2 * v16[24]);
              HIWORD(v9->bmiHeader.biHeight) = v18;
              if ( v18 >= 0x10u )
                HIWORD(v9->bmiHeader.biHeight) = 24;
              DIBitsInternalWorker = 1;
              goto LABEL_37;
            }
LABEL_27:
            DCOBJ::DCOBJ((DCOBJ *)v31, a1);
            if ( v31[0] )
            {
              v27 = *(_QWORD *)(v31[0] + 48LL);
              v26 = *(_QWORD *)(v31[0] + 88LL);
              if ( (*(_DWORD *)(v27 + 40) & 0x8000) != 0 )
              {
                DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                         biSize,
                                         (struct DCOBJ *)v31,
                                         (struct PDEVOBJ *)&v27,
                                         (struct SURFREF *)v29,
                                         (struct XEPALOBJ *)&v26,
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
                NEEDGRELOCK::vLock((NEEDGRELOCK *)v28, (struct XDCOBJ *)v31);
                v25 = 0LL;
                if ( v30 )
                {
                  if ( v30 != -24 )
                  {
                    v23 = *(_DWORD *)(v30 + 112);
                    if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
                    {
                      v25 = v30;
                      GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
                    }
                  }
                }
                DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                         biSize,
                                         (struct DCOBJ *)v31,
                                         (struct PDEVOBJ *)&v27,
                                         (struct SURFREF *)v29,
                                         (struct XEPALOBJ *)&v26,
                                         a1,
                                         (HBITMAP)a2,
                                         a3,
                                         a4,
                                         v15,
                                         v9,
                                         a7,
                                         a8,
                                         v13);
                NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v25);
                NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v28);
              }
            }
            DCOBJ::~DCOBJ((DCOBJ *)v31);
            goto LABEL_37;
          }
          if ( v13 < 0x28 )
          {
LABEL_37:
            SURFREF::~SURFREF((SURFREF *)v29);
            NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
            return DIBitsInternalWorker;
          }
          if ( !v9->bmiHeader.biBitCount )
          {
            if ( biSize > 0x28 )
              memset(v9, 0, v9->bmiHeader.biSize);
            v9->bmiHeader.biSize = 40;
            v19 = v16[14];
            v9->bmiHeader.biWidth = v19;
            v20 = v16[15];
            v9->bmiHeader.biHeight = v20;
            v9->bmiHeader.biPlanes = 1;
            v9->bmiHeader.biCompression = 0;
            v21 = *((unsigned __int16 *)&galBitsPerPixel + 2 * v16[24]);
            v9->bmiHeader.biBitCount = v21;
            if ( v21 == 16 || v21 == 32 )
              v9->bmiHeader.biCompression = 3;
            *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
            DIBitsInternalWorker = 1;
            v9->bmiHeader.biSizeImage = v20 * (((int)(v19 * v21 + 31) >> 3) & 0xFFFFFFFC);
            v22 = *((_DWORD *)&gacPalEntries + v16[24]);
            v9->bmiHeader.biClrImportant = v22;
            v9->bmiHeader.biClrUsed = v22;
            goto LABEL_37;
          }
        }
        if ( biSize < 0x28 || v9->bmiHeader.biCompression - 4 > 1 )
          goto LABEL_27;
        EngSetLastError(0x57u);
        goto LABEL_37;
      }
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
