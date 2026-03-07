void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, _DWORD *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // r14
  _DWORD *v7; // rdi
  void *v9; // rsi
  struct _FONTOBJ *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rbx
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  void *v16; // [rsp+68h] [rbp+20h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v7 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v7;
  v16 = 0LL;
  v9 = 0LL;
  v15 = 0;
  v10 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    v15 = *((_DWORD *)v6 + 93);
    v9 = (void *)*((_QWORD *)v6 + 45);
    if ( !v9 )
    {
      v9 = FONTOBJ_pvTrueTypeFontFileUMPD(v10, &v15, &v16);
      if ( v9 )
      {
        v14 = v16;
        *((_QWORD *)v6 + 47) = PsGetCurrentProcess(v12, v11, v13);
        *((_QWORD *)v6 + 45) = v9;
        *((_QWORD *)v6 + 44) = v14;
        *((_DWORD *)v6 + 93) = v15;
      }
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v9 != 0LL ? v15 : 0;
  }
  --*v7;
  return v9;
}
