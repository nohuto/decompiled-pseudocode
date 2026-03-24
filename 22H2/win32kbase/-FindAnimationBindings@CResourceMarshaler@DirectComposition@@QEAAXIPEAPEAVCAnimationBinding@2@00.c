/*
 * XREFs of ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C0092A08
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00927EC (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C009299C (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshaler::FindAnimationBindings(
        DirectComposition::CResourceMarshaler *this,
        int a2,
        struct DirectComposition::CAnimationBinding **a3,
        struct DirectComposition::CAnimationBinding **a4,
        struct DirectComposition::CAnimationBinding **a5)
{
  __int64 v5; // rax
  struct DirectComposition::CAnimationBinding *v6; // r10
  struct DirectComposition::CAnimationBinding *v7; // r11
  struct DirectComposition::CAnimationBinding *v8; // rbx
  int v9; // ecx
  bool v10; // zf

  v5 = *((_QWORD *)this + 4);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  while ( v5 )
  {
    if ( *(_DWORD *)(v5 + 12) != a2 )
      goto LABEL_5;
    v9 = *(_DWORD *)(v5 + 8);
    if ( (v9 & 1) != 0 )
    {
      v6 = (struct DirectComposition::CAnimationBinding *)v5;
      break;
    }
    if ( (v9 & 2) != 0 )
    {
      v7 = (struct DirectComposition::CAnimationBinding *)v5;
      v10 = v8 == 0LL;
    }
    else
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_5;
      v8 = (struct DirectComposition::CAnimationBinding *)v5;
      v10 = v7 == 0LL;
    }
    if ( !v10 )
      break;
LABEL_5:
    v5 = *(_QWORD *)(v5 + 32);
  }
  *a3 = v6;
  *a4 = v7;
  *a5 = v8;
}
