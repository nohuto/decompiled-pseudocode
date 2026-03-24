/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B5AA8
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02B66F0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0026620 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00266AC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0082984 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C00ABCE4 (GreGetBitmapBitsSize.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall GreIcmQueryBrushBitmap(
        HDC a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBitsInternal; // ebx
  unsigned int v8; // r15d
  int v9; // ebp
  BRUSH *v12; // rax
  unsigned int BitmapBitsSize; // edi
  BRUSH *v15[6]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v16[13]; // [rsp+80h] [rbp-68h] BYREF

  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 && a6 && a7 && a5 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v16, a1);
    if ( !v16[0] || (*(_DWORD *)(v16[0] + 120LL) & 1) == 0 )
      goto LABEL_21;
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v15, a2);
    if ( v15[0] )
    {
      if ( (*((_DWORD *)v15[0] + 10) & 0x80u) != 0 )
      {
        v8 = *((_DWORD *)v15[0] + 21);
        if ( !v8 )
        {
          if ( BRUSH::hFindIcmDIB(v15[0], *(void **)(*(_QWORD *)(v16[0] + 976LL) + 248LL)) )
          {
            v9 = 1;
          }
          else
          {
            memset(&a3->bmiHeader.biWidth, 0, 0x424uLL);
            v12 = v15[0];
            a3->bmiHeader.biSize = 44;
            DIBitsInternal = GreGetDIBitsInternal(a1, *((HSURF *)v12 + 3), 0, 0, 0LL, a3, 0, 0, 0x428u);
            if ( DIBitsInternal )
            {
              BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
              if ( BitmapBitsSize )
              {
                if ( a4 )
                {
                  if ( BitmapBitsSize > *a5 )
                    goto LABEL_20;
                  DIBitsInternal = GreGetDIBitsInternal(
                                     a1,
                                     *((HSURF *)v15[0] + 3),
                                     0,
                                     abs32(a3->bmiHeader.biHeight),
                                     a4,
                                     a3,
                                     0,
                                     BitmapBitsSize,
                                     0x428u);
                }
                else
                {
                  DIBitsInternal = 1;
                }
                *a5 = BitmapBitsSize;
                goto LABEL_20;
              }
              DIBitsInternal = 0;
            }
          }
        }
      }
    }
LABEL_20:
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v15);
LABEL_21:
    *a6 = v8;
    *a7 = v9;
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return DIBitsInternal;
  }
  return 0LL;
}
