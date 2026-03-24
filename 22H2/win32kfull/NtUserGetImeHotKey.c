/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01F98E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C0117208 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  int v8; // ebx
  _DWORD *v9; // rdx
  const struct _tagIMEHOTKEYOBJ *v10; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _tagIMEHOTKEYOBJ *v16; // rcx
  __int64 v17; // rcx
  int v18; // edx
  struct _tagIMEHOTKEYOBJ **v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+28h] [rbp-20h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v8 = 1;
  EnterSharedCrit(0LL, 1LL);
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = *v9;
  v10 = (const struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
  v11 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  if ( a4 )
  {
    v10 = (const struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v20 = (struct _tagIMEHOTKEYOBJ **)&v21;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v10, a1);
  v16 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v17 = 1419LL;
LABEL_11:
    UserSetLastError(v17, v14, v15);
    v8 = 0;
    goto LABEL_18;
  }
  v14 = (__int64)v20;
  if ( v20 )
  {
    *v20 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v17 = 87LL;
    goto LABEL_11;
  }
  v18 = *((_DWORD *)ImeHotKeyByID + 3);
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v18;
  if ( a4 )
  {
    v16 = *v20;
    *a4 = *v20;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v16);
  return v8;
}
