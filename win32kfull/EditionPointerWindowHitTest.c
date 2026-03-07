_DWORD *__fastcall EditionPointerWindowHitTest(
        _DWORD *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        __int64 a7,
        struct tagPOINT a8,
        int *a9,
        unsigned int a10,
        struct tagPOINTEREVENTINT *a11,
        unsigned __int64 a12,
        struct tagPOINT *a13)
{
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rax
  __int128 v23; // [rsp+60h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp-18h]

  v23 = 0LL;
  v24 = 0LL;
  if ( a4 )
  {
    v16 = *(struct tagWND **)(a3 + 80);
  }
  else
  {
    v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v23 = *((_QWORD *)a2 + 52);
    *((_QWORD *)a2 + 52) = &v23;
    *((_QWORD *)&v23 + 1) = v16;
    if ( v16 )
      HMLockObject(v16);
  }
  v19 = (unsigned int)xxxPointerWindowHitTest(a2, v16, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v18, v17, v20);
  v21 = HMValidateHandleNoSecure(v19, 1);
  INPUTDEST_FROM_PWND(a1, v21);
  return a1;
}
