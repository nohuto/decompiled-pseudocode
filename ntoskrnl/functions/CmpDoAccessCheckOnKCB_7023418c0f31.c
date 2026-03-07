char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, int a3, char a4)
{
  char v6; // si
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *v10; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PVOID v12; // rcx
  char v13; // bl
  __int64 v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v17[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[28]; // [rsp+100h] [rbp+0h] BYREF

  LODWORD(v15) = a3;
  memset(v17, 0, sizeof(v17));
  memset(v18, 0, sizeof(v18));
  v6 = 0;
  Object = 0LL;
  if ( (int)ObCreateObjectEx(a4, CmKeyObjectType, 0LL, a4, v14, 112, 0, 0, &Object, 0LL) < 0 )
    return 0;
  v8 = Object;
  *((_QWORD *)Object + 7) = 0LL;
  v8[8] = 0LL;
  *(_DWORD *)v8 = 1803104306;
  v8[1] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[10] = v8 + 9;
  v8[9] = v8 + 9;
  CurrentThread = KeGetCurrentThread();
  v10 = (_DWORD *)CmKeyObjectType + 19;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  LODWORD(v15) = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, v17, v18, v15, v10);
  if ( (int)v15 >= 0 )
  {
    v12 = Object;
    v8[1] = a1;
    v13 = CmpCheckKeyBodyAccess(v12, (__int64)&v15);
    SepDeleteAccessState((__int64)v17);
    SeReleaseSubjectContext(&v17[1]);
    v8[1] = 0LL;
    v6 = v13;
  }
  ObfDereferenceObject(Object);
  return v6;
}
