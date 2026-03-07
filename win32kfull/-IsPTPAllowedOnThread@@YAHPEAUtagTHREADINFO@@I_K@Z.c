__int64 __fastcall IsPTPAllowedOnThread(struct tagTHREADINFO *a1, int a2, __int16 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v6 = *((_WORD *)a1 + 637) & 1;
  if ( !v6 && IsPointerMessageTouchpad(a1, 0LL, a3) && IsTouchpadPointerInputMessage(a2) )
  {
    v6 = 0;
    if ( FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 1128), a3) )
    {
      v8 = GetPTPShellListener() ? *(_QWORD *)GetPTPShellListener() : 0LL;
      if ( *(_QWORD *)(v7 + 40) == v8 )
        return 1;
    }
  }
  return v6;
}
