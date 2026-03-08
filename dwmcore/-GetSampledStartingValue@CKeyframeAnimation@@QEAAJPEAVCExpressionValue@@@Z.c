/*
 * XREFs of ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800EDB80
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180057560 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180263F00 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800AB96C (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800C1704 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::GetSampledStartingValue(CKeyframeAnimation *this, struct CExpressionValue *a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = *((_QWORD *)this + 48);
  if ( *(_DWORD *)v2 || (v7 = CKeyframeAnimation::SampleStartingValue(this), v5 = v7, v7 >= 0) )
  {
    if ( *(_DWORD *)v2 == 11 )
    {
      v9 = *((_QWORD *)this + 57);
      *((_DWORD *)a2 + 18) = 11;
      *((_BYTE *)a2 + 76) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)a2 + 8, v9);
    }
    else
    {
      switch ( *(_DWORD *)v2 )
      {
        case 0x11:
          *(_BYTE *)a2 = *(_BYTE *)(v2 + 8);
          *((_DWORD *)a2 + 18) = 17;
          break;
        case 0x12:
          *(_DWORD *)a2 = *(_DWORD *)(v2 + 8);
          *((_DWORD *)a2 + 18) = 18;
          break;
        case 0x23:
          *((_DWORD *)a2 + 18) = 35;
          *(_QWORD *)a2 = *(_QWORD *)(v2 + 8);
          break;
        case 0x2A:
          *((_DWORD *)a2 + 18) = 42;
          *(_DWORD *)a2 = *(_DWORD *)(v2 + 8);
          break;
        case 0x34:
          *((_DWORD *)a2 + 18) = 52;
          *(_QWORD *)a2 = *(_QWORD *)(v2 + 8);
          *((_DWORD *)a2 + 2) = *(_DWORD *)(v2 + 16);
          break;
        default:
          switch ( *(_DWORD *)v2 )
          {
            case 'E':
              *((_DWORD *)a2 + 18) = 69;
              break;
            case 'F':
              *((_DWORD *)a2 + 18) = 70;
              break;
            case 'G':
              *((_DWORD *)a2 + 18) = 71;
              break;
            default:
              v5 = -2147467259;
              MilInstrumentationCheckHR_MaybeFailFast(
                (unsigned int)(*(_DWORD *)v2 - 70),
                0LL,
                0,
                -2147467259,
                0x729u,
                0LL);
              return v5;
          }
          *(_OWORD *)a2 = *(_OWORD *)(v2 + 8);
          break;
      }
      *((_BYTE *)a2 + 76) = 1;
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x6F6u, 0LL);
  }
  return v5;
}
