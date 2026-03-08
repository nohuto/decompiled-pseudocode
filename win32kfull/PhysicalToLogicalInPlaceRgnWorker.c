/*
 * XREFs of PhysicalToLogicalInPlaceRgnWorker @ 0x1C0052B04
 * Callers:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0052AEC (PhysicalToLogicalInPlaceRgn.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0053AA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C0144C5C (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgnWorker(const struct tagWND *a1, HRGN *a2, int a3)
{
  unsigned int v3; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rdi
  __int64 v7; // rax
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  HRGN v11; // rax
  float v12[6]; // [rsp+20h] [rbp-38h] BYREF

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
          v7 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
          v12[0] = 1.0 / *(float *)v7;
          v8 = 1.0 / *(float *)(v7 + 20);
          v12[3] = v8;
          v9 = COERCE_FLOAT(*(_DWORD *)(v7 + 48) ^ _xmm) / *(float *)v7;
          v12[4] = v9;
          v10 = COERCE_FLOAT(*(_DWORD *)(v7 + 52) ^ _xmm) / *(float *)(v7 + 20);
          v12[5] = v10;
          if ( v12[0] != 1.0 || v8 != 1.0 || v9 != 0.0 || v10 != 0.0 )
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
