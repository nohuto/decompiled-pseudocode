struct tagNOTIFY *__fastcall CreateNotify(
        struct tagEVENTHOOK *a1,
        int a2,
        struct tagWND *a3,
        int a4,
        int a5,
        PETHREAD *a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  struct tagNOTIFY *v12; // rbx
  __int64 v13; // rax
  struct tagNOTIFY *result; // rax
  unsigned int ThreadId; // eax
  int v16; // eax
  int v17; // r8d
  struct tagNOTIFY **v18; // rdx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  if ( dword_1C0361138 )
  {
    result = (struct tagNOTIFY *)Win32AllocPoolZInit(72LL, 2037281621LL);
    v12 = result;
    if ( !result )
      return result;
  }
  else
  {
    dword_1C0361138 = 1;
    v12 = (struct tagNOTIFY *)&unk_1C03621B0;
  }
  *((_QWORD *)v12 + 2) = 0LL;
  if ( !a8 )
  {
    v19[0] = (char *)v12 + 16;
    v19[1] = a1;
    HMAssignmentLock(v19, 0LL);
  }
  if ( a3 )
    v13 = *(_QWORD *)a3;
  else
    v13 = 0LL;
  *((_QWORD *)v12 + 4) = v13;
  *((_DWORD *)v12 + 7) = a2;
  *((_DWORD *)v12 + 10) = a4;
  *((_DWORD *)v12 + 11) = a5;
  ThreadId = (unsigned int)PsGetThreadId(*a6);
  *((_DWORD *)v12 + 14) = 0;
  *((_DWORD *)v12 + 12) = ThreadId;
  *((_DWORD *)v12 + 13) = a7;
  *((_DWORD *)v12 + 6) = a8;
  if ( a8 )
    v16 = 0;
  else
    v16 = ~(*((_DWORD *)a1 + 10) >> 1) & 4;
  *((_QWORD *)v12 + 8) = 0LL;
  *((_DWORD *)v12 + 14) = v16;
  *((_QWORD *)v12 + 1) = v12;
  *(_QWORD *)v12 = v12;
  if ( !a8 && (*((_DWORD *)a1 + 10) & 8) != 0 && (unsigned int)(a2 + 2147483646) <= 3 )
  {
    v17 = *((_DWORD *)v12 + 14);
    if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      v17 = 4;
    *((_DWORD *)v12 + 14) = v17;
  }
  v18 = (struct tagNOTIFY **)gPendingNotifiesList[1];
  if ( *v18 != (struct tagNOTIFY *)gPendingNotifiesList[0] )
    __fastfail(3u);
  *(_QWORD *)v12 = gPendingNotifiesList[0];
  *((_QWORD *)v12 + 1) = v18;
  *v18 = v12;
  gPendingNotifiesList[1] = v12;
  return v12;
}
