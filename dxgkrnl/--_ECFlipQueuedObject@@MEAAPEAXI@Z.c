_QWORD *__fastcall CFlipQueuedObject::`vector deleting destructor'(_QWORD *P, char a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax

  *P = &CFlipPresentCancel::`vftable';
  v3 = (_QWORD *)((unsigned __int64)(P + 1) & -(__int64)(P != 0LL));
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
