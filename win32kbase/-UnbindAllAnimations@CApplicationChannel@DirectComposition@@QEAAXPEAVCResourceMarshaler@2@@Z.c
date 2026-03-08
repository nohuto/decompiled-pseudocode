/*
 * XREFs of ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005B1EC
 * Callers:
 *     ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C000B61C (-SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEB.c)
 *     ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1C005A258 (-SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C02510E4 (-SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChann.c)
 *     ?SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0262170 (-SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B284 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BB744 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnbindAllAnimations(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rsi
  DirectComposition::CAnimationBinding *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  if ( *((int *)this + 6) > 2 )
  {
    for ( i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 5);
          i;
          i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 5) )
    {
      DirectComposition::CAnimationBinding::DetachAndDelete(i, this);
    }
  }
  else
  {
    v4 = *((_QWORD *)a2 + 5);
    if ( v4 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 8);
        v6 = *(_QWORD *)(v4 + 32);
        if ( (v5 & 2) != 0 )
        {
          v8 = (_QWORD *)((char *)this + 448);
          while ( 1 )
          {
            v9 = (_QWORD *)*v8;
            if ( !*v8 )
              break;
            if ( (struct DirectComposition::CResourceMarshaler *)v9[2] == a2 )
            {
              *v8 = *v9;
              *v9 = 0LL;
            }
            else
            {
              v8 = (_QWORD *)*v8;
            }
          }
          DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v4, this);
        }
        else if ( (v5 & 1) != 0 )
        {
          DirectComposition::CApplicationChannel::NewRemovingBinding(
            this,
            (struct DirectComposition::CAnimationBinding *)v4);
        }
        v4 = v6;
      }
      while ( v6 );
    }
  }
}
