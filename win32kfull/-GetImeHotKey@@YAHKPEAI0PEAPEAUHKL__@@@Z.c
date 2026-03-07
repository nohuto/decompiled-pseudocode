__int64 __fastcall GetImeHotKey(__int64 a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  int v10; // ecx

  v7 = a1;
  v8 = SGDGetUserSessionState(a1);
  ImeHotKeyByID = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v8 + 12728), v7);
  if ( !ImeHotKeyByID )
  {
    v10 = 1419;
LABEL_3:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( a4 )
  {
    *a4 = (HKL)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v10 = 87;
    goto LABEL_3;
  }
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = *((_DWORD *)ImeHotKeyByID + 3);
  return 1LL;
}
