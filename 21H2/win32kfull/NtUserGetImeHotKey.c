/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01F48A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C010371C (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(__int64 a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  int v7; // ebx
  _DWORD *v8; // rcx
  const struct _tagIMEHOTKEYOBJ *v9; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  __int64 v13; // rdx
  struct _tagIMEHOTKEYOBJ *v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // edx
  struct _tagIMEHOTKEYOBJ **v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+28h] [rbp-20h] BYREF

  v7 = a1;
  v20 = 0LL;
  v19 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v9 = (const struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
  v10 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  if ( a4 )
  {
    v9 = (const struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
    v11 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v19 = (struct _tagIMEHOTKEYOBJ **)&v20;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v9, v7);
  v14 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v15 = 1419LL;
LABEL_11:
    UserSetLastError(v15, v13);
    v16 = 0;
    goto LABEL_18;
  }
  v13 = (__int64)v19;
  if ( v19 )
  {
    *v19 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v15 = 87LL;
    goto LABEL_11;
  }
  v17 = *((_DWORD *)ImeHotKeyByID + 3);
  v16 = 1;
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v17;
  if ( a4 )
  {
    v14 = *v19;
    *a4 = *v19;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v14);
  return v16;
}
