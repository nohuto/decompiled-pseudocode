void __fastcall IopCopyAbortCopyReadRequest(__int64 a1)
{
  IopCopyCompleteReadRequest(a1, a1 + 48, a1 + 56, (ULONG_PTR *)(a1 + 64));
}
