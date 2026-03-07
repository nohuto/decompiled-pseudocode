KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rbp
  KeyframeSequence::Keyframe *v9; // rsi
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  memset_0(this, 0, 0x40uLL);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 18;
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 140) &= ~0x10u;
  *((_DWORD *)this + 28) = v2;
  *((_DWORD *)this + 34) = 1065353216;
  if ( (unsigned int)v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)DefaultHeap::Alloc(v6);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v7 = v2;
  v8 = v7 + 1;
  v9 = (KeyframeSequence::Keyframe *)(v7 + 1);
  do
  {
    KeyframeSequence::Keyframe::Keyframe(v9);
    v9 = (KeyframeSequence::Keyframe *)((char *)v9 + 24);
    --v2;
  }
  while ( v2 );
  result = this;
  *((_QWORD *)this + 13) = v8;
  return result;
}
