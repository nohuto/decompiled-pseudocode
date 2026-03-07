__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int a3)
{
  int v3; // ebx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  size_t v8; // r8
  void *Src; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v6 = *((_QWORD *)this + 3);
  v7 = a3 - 1;
  if ( a3 <= v6 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 4) * v7 + *(_QWORD *)this) )
      return (unsigned int)-1073741790;
    goto LABEL_4;
  }
  v3 = DirectComposition::CDCompDynamicArrayBase::Grow(this, a3 - v6, 0x746C4344u);
  if ( v3 >= 0 )
  {
LABEL_4:
    v8 = *((_QWORD *)this + 4);
    Src = a2;
    memmove((void *)(*(_QWORD *)this + v8 * v7), &Src, v8);
    ++*((_QWORD *)this + 5);
  }
  return (unsigned int)v3;
}
