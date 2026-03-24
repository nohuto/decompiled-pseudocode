/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x1800ACB84
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x1800AABB8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180094E70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  char *v4; // rdi
  __int64 v5; // rax
  bool v6; // cf
  SIZE_T v7; // rax
  char *v8; // rax
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  memset_0(this, 0, 0x40uLL);
  v4 = 0LL;
  *((_DWORD *)this + 18) = 18;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 140) &= ~0x10u;
  *((_DWORD *)this + 28) = v2;
  *((_DWORD *)this + 34) = 1065353216;
  if ( (unsigned int)v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v5 = -1LL;
  v6 = __CFADD__(v5, 8LL);
  v7 = v5 + 8;
  if ( v6 )
    v7 = -1LL;
  v8 = (char *)operator new(v7);
  if ( v8 )
  {
    v4 = v8 + 8;
    *(_QWORD *)v8 = v2;
    `vector constructor iterator'(
      v8 + 8,
      24LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))KeyframeSequence::Keyframe::Keyframe);
  }
  result = this;
  *((_QWORD *)this + 13) = v4;
  return result;
}
