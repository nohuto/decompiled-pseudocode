unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  __int64 ThreadPointerHookData; // rcx

  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    for ( ThreadPointerHookData = *(_QWORD *)a2;
          (struct tagTHREADINPUTPOINTERLIST *)ThreadPointerHookData != a2;
          ThreadPointerHookData = *(_QWORD *)ThreadPointerHookData )
    {
      if ( *(_WORD *)(ThreadPointerHookData + 16) == a3 )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *(_DWORD *)(ThreadPointerHookData + 20);
  if ( a5 )
    *a5 = -(*(_DWORD *)(ThreadPointerHookData + 48) & 1);
  if ( a6 )
    *a6 = *(HWND *)(ThreadPointerHookData + 40);
  return *(_QWORD *)(ThreadPointerHookData + 24);
}
