/*
 * XREFs of ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800A6178
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800A5FFC (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 */

__int64 __fastcall HrWicPfToMil(const struct _GUID *a1, enum MilPixelFormat::Enum *a2)
{
  int v2; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v2 = 0;
  if ( a1->Data4[7] > 0x1Fu || memcmp_0(a1, &GUID_WICPixelFormatDontCare, 0xFuLL) || (v2 = a1->Data4[7]) == 0 )
  {
    v6 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat40bppCMYKAlpha.Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat40bppCMYKAlpha.Data1 )
      v6 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat40bppCMYKAlpha.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat80bppCMYKAlpha.Data1;
      if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat80bppCMYKAlpha.Data1 )
        v7 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat80bppCMYKAlpha.Data4;
      if ( v7 )
      {
        v8 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat8bppAlpha.Data1;
        if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppAlpha.Data1 )
          v8 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat8bppAlpha.Data4;
        if ( v8 )
        {
          v9 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat32bppRGBA.Data1;
          if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppRGBA.Data1 )
            v9 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat32bppRGBA.Data4;
          if ( v9 )
          {
            v10 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat32bppPRGBA.Data1;
            if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppPRGBA.Data1 )
              v10 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat32bppPRGBA.Data4;
            if ( v10 )
            {
              v11 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat64bppBGRA.Data1;
              if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppBGRA.Data1 )
                v11 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat64bppBGRA.Data4;
              if ( v11 )
              {
                v12 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat64bppPBGRA.Data1;
                if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppPBGRA.Data1 )
                  v12 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat64bppPBGRA.Data4;
                if ( v12 )
                {
                  v13 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat48bppBGR.Data1;
                  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat48bppBGR.Data1 )
                    v13 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat48bppBGR.Data4;
                  if ( v13 )
                  {
                    v14 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat16bppBGRA5551.Data1;
                    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat16bppBGRA5551.Data1 )
                      v14 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat16bppBGRA5551.Data4;
                    if ( v14 )
                    {
                      v15 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat48bppBGRFixedPoint.Data1;
                      if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat48bppBGRFixedPoint.Data1 )
                        v15 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat48bppBGRFixedPoint.Data4;
                      if ( v15 )
                      {
                        v16 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat64bppBGRAFixedPoint.Data1;
                        if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppBGRAFixedPoint.Data1 )
                          v16 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat64bppBGRAFixedPoint.Data4;
                        if ( v16 )
                        {
                          v17 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat96bppRGBFloat.Data1;
                          if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat96bppRGBFloat.Data1 )
                            v17 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat96bppRGBFloat.Data4;
                          if ( v17 )
                          {
                            v18 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat32bppRGB.Data1;
                            if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppRGB.Data1 )
                              v18 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat32bppRGB.Data4;
                            if ( v18 )
                            {
                              v19 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat64bppRGB.Data1;
                              if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat64bppRGB.Data1 )
                                v19 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat64bppRGB.Data4;
                              if ( v19 )
                              {
                                v20 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat8bppY.Data1;
                                if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppY.Data1 )
                                  v20 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat8bppY.Data4;
                                if ( v20 )
                                {
                                  v21 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat8bppCb.Data1;
                                  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppCb.Data1 )
                                    v21 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat8bppCb.Data4;
                                  if ( v21 )
                                  {
                                    v22 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat8bppCr.Data1;
                                    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat8bppCr.Data1 )
                                      v22 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat8bppCr.Data4;
                                    if ( v22 )
                                    {
                                      v23 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_WICPixelFormat16bppCbCr.Data1;
                                      if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat16bppCbCr.Data1 )
                                        v23 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_WICPixelFormat16bppCbCr.Data4;
                                      if ( v23 )
                                      {
                                        v24 = *(_QWORD *)&a1->Data1
                                            - *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2.Data1;
                                        if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2.Data1 )
                                          v24 = *(_QWORD *)a1->Data4
                                              - *(_QWORD *)GUID_WICPixelFormat32bppR10G10B10A2.Data4;
                                        if ( v24 )
                                        {
                                          v25 = *(_QWORD *)&a1->Data1
                                              - *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2HDR10.Data1;
                                          if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_WICPixelFormat32bppR10G10B10A2HDR10.Data1 )
                                            v25 = *(_QWORD *)a1->Data4
                                                - *(_QWORD *)GUID_WICPixelFormat32bppR10G10B10A2HDR10.Data4;
                                          if ( !v25 )
                                            v2 = 33;
                                        }
                                        else
                                        {
                                          v2 = 32;
                                        }
                                      }
                                      else
                                      {
                                        v2 = 82;
                                      }
                                    }
                                    else
                                    {
                                      v2 = 81;
                                    }
                                  }
                                  else
                                  {
                                    v2 = 80;
                                  }
                                }
                                else
                                {
                                  v2 = 79;
                                }
                              }
                              else
                              {
                                v2 = 78;
                              }
                            }
                            else
                            {
                              v2 = 77;
                            }
                          }
                          else
                          {
                            v2 = 76;
                          }
                        }
                        else
                        {
                          v2 = 75;
                        }
                      }
                      else
                      {
                        v2 = 74;
                      }
                    }
                    else
                    {
                      v2 = 70;
                    }
                  }
                  else
                  {
                    v2 = 71;
                  }
                }
                else
                {
                  v2 = 73;
                }
              }
              else
              {
                v2 = 72;
              }
            }
            else
            {
              v2 = 69;
            }
          }
          else
          {
            v2 = 68;
          }
        }
        else
        {
          v2 = 67;
        }
      }
      else
      {
        v2 = 45;
      }
    }
    else
    {
      v2 = 44;
    }
  }
  *(_DWORD *)a2 = v2;
  return v2 == 0 ? 0x88982F80 : 0;
}
