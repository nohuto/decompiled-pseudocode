void __fastcall FreeQEntry(struct tagQMSG *a1)
{
  __int64 v2; // rax

  if ( (*((_DWORD *)a1 + 25) & 8) != 0
    && !*((_DWORD *)a1 + 24)
    && (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    FreePointerMessageParams(a1);
  }
  v2 = SGDGetUserSessionState(a1);
  Win32FreeToPagedLookasideList(*(_QWORD *)(v2 + 16872), a1);
}
