struct tagHOTKEY *__fastcall FindHotKey(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        struct tagHOTKEY **a6)
{
  struct tagHOTKEY *v10; // rbx
  struct tagHOTKEY *v11; // rdi
  __int64 i; // r9
  struct tagHOTKEY *result; // rax

  v10 = 0LL;
  v11 = 0LL;
  *a6 = 0LL;
  for ( i = *(_QWORD *)(SGDGetUserSessionState(a1) + 8LL * (a5 & 0x7F) + 12736); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(struct tagTHREADINFO **)i == a1 && *(struct tagWND **)(i + 16) == a2 && *(_DWORD *)(i + 40) == a3 )
      v11 = (struct tagHOTKEY *)i;
    if ( *(_WORD *)(i + 32) == a4 && *(_DWORD *)(i + 36) == a5 )
      v10 = (struct tagHOTKEY *)i;
    if ( v11 && v10 )
      break;
  }
  result = v10;
  *a6 = v11;
  return result;
}
