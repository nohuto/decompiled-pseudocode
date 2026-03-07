void __fastcall IopAbortRequest(__int64 a1)
{
  IopCompleteRequest((char **)a1, a1 + 48, (_QWORD *)(a1 + 56), (ULONG_PTR *)(a1 + 64), (_QWORD *)(a1 + 72));
}
