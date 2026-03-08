/*
 * XREFs of LogicalToPhysicalInPlaceRgnWorker @ 0x1C00DB9C4
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0053AA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C010220C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C0144C5C (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRgnWorker(const struct tagWND *a1, HRGN *a2, int a3)
{
  unsigned int v3; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rdi
  float *v7; // rax
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  HRGN v11; // rax
  float v12[6]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  TopLevelOrDpiBoundaryWindow = a1;
  if ( a3 )
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( TopLevelOrDpiBoundaryWindow )
    {
      if ( *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(TopLevelOrDpiBoundaryWindow) )
        {
          v12[1] = 0.0;
          v12[2] = 0.0;
          v7 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
          v12[0] = *v7;
          v8 = v7[5];
          v12[3] = v8;
          v9 = v7[12];
          v12[4] = v9;
          v10 = v7[13];
          v12[5] = v10;
          if ( v12[0] != 1.0 || v8 != 1.0 || v10 != 0.0 || v9 != 0.0 )
          {
            v11 = TransformRgn(*a2, (struct tagXFORM *)v12);
            if ( v11 )
            {
              v3 = 1;
              *a2 = v11;
            }
          }
        }
      }
    }
  }
  return v3;
}
