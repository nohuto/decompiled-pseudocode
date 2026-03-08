/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180255230
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(_QWORD *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  float *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx

  if ( a3 != 18 )
    goto LABEL_8;
  v4 = *a4;
  v5 = (float *)(a1 + 22);
  if ( a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( *v5 != v4 )
    {
      v6 = *a1;
      *v5 = v4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
    }
    return v5 == 0LL ? 0x80070057 : 0;
  }
  else
  {
LABEL_8:
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x2Fu, 0LL);
  }
  return v7;
}
