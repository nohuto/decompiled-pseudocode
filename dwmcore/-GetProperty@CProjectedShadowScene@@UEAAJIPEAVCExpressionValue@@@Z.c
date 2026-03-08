/*
 * XREFs of ?GetProperty@CProjectedShadowScene@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802486A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::GetProperty(CProjectedShadowScene *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // xmm0_4

  v3 = 0;
  if ( !a2 )
  {
    v8 = *((_DWORD *)this + 30);
    goto LABEL_14;
  }
  v4 = a2 - 3;
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 28);
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_DWORD *)this + 31);
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 29);
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 32);
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = *((_DWORD *)this + 33);
LABEL_14:
    *((_BYTE *)a3 + 76) = 1;
    *((_DWORD *)a3 + 18) = 18;
    *(_DWORD *)a3 = v8;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x97u, 0LL);
  return v3;
}
