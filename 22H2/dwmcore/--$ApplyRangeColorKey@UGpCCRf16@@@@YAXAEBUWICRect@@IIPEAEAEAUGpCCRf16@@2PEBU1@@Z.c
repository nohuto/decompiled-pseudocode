/*
 * XREFs of ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x180267214
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1802675A4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x18021A46C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall ApplyRangeColorKey<GpCCRf16>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  int v6; // r11d
  __int64 v8; // r10
  __int64 v9; // r12
  int i; // edi
  __int64 v11; // r9
  float v12; // xmm1_4
  __int64 v13; // r9
  float v14; // xmm1_4
  __int64 v15; // r9
  unsigned __int16 *v16; // r14
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  unsigned __int16 *v20; // r9
  unsigned __int16 *v21; // r9
  float v22; // xmm1_4
  __int64 v23; // r9
  float v24; // xmm1_4
  __int64 v25; // r9
  float v26; // xmm1_4

  v6 = 0;
  v8 = a1;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v9 = a2;
    do
    {
      for ( i = 0; i < *(_DWORD *)(v8 + 8); ++i )
      {
        v12 = CFloat16::operator float(a5 + 3);
        if ( CFloat16::operator float((unsigned __int16 *)(v11 + 4)) >= v12 )
        {
          v14 = CFloat16::operator float((unsigned __int16 *)(v13 + 4));
          if ( CFloat16::operator float(a6 + 3) >= v14 )
          {
            v16 = (unsigned __int16 *)(v15 - 2);
            v17 = CFloat16::operator float(a5);
            if ( CFloat16::operator float(v16) >= v17 )
            {
              v18 = CFloat16::operator float(v16);
              if ( CFloat16::operator float(a6) >= v18 )
              {
                v19 = CFloat16::operator float(a5 + 1);
                if ( CFloat16::operator float(v20) >= v19 )
                {
                  v22 = CFloat16::operator float(v21);
                  if ( CFloat16::operator float(a6 + 1) >= v22 )
                  {
                    v24 = CFloat16::operator float(a5 + 2);
                    if ( CFloat16::operator float((unsigned __int16 *)(v23 + 2)) >= v24 )
                    {
                      v26 = CFloat16::operator float((unsigned __int16 *)(v25 + 2));
                      if ( CFloat16::operator float(a6 + 2) >= v26 )
                        *(_QWORD *)v16 = 0LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
      a4 += v9;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v8 + 12) );
  }
}
