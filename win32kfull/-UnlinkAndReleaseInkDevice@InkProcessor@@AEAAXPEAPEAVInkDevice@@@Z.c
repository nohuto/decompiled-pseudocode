void __fastcall InkProcessor::UnlinkAndReleaseInkDevice(InkProcessor *this, struct InkDevice **a2)
{
  InkDevice *v2; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx

  v2 = *a2;
  v4 = (_QWORD *)((char *)*a2 + 88);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)*((_QWORD *)*a2 + 12), (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  v4[1] = 0LL;
  *v4 = 0LL;
  if ( v2 )
    InkDevice::`vector deleting destructor'(v2, 1);
  *a2 = 0LL;
}
