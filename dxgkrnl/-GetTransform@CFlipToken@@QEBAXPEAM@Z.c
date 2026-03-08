/*
 * XREFs of ?GetTransform@CFlipToken@@QEBAXPEAM@Z @ 0x1C007D78C
 * Callers:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C007DEE4 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipToken::GetTransform(CFlipToken *this, float *a2)
{
  __int64 v2; // xmm1_8

  v2 = *(_QWORD *)((char *)this + 204);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 188);
  *((_QWORD *)a2 + 2) = v2;
}
