void __fastcall CTouchProcessor::CommitInputFrame(CTouchProcessor *this, struct CPointerInputFrame *a2)
{
  char *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  CTouchProcessor::SetPointerRawDataListFrameId(this, *((_DWORD *)a2 + 10), *((struct CPointerRawData **)a2 + 29));
  v4 = (char *)this + 56;
  v5 = (_QWORD *)((char *)a2 + 8);
  v6 = *(_QWORD *)v4;
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *v5 = v6;
  v5[1] = v4;
  *(_QWORD *)(v6 + 8) = v5;
  *(_QWORD *)v4 = v5;
}
