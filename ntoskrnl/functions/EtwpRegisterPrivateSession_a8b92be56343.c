__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  unsigned __int64 *v4; // r13
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rdi
  bool v10; // si
  int v11; // eax
  __int64 *v12; // rax
  unsigned __int64 Pool2; // rax
  __int64 *v14; // rbx
  unsigned int inserted; // edi
  __int64 *v16; // r14
  __int64 *i; // rsi
  char *v18; // r12
  _WORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v27; // [rsp+80h] [rbp-11h] BYREF
  __int128 v28; // [rsp+90h] [rbp-1h]
  __int128 v29; // [rsp+A0h] [rbp+Fh]

  v4 = (unsigned __int64 *)(a1 + 4080);
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  v24 = 0LL;
  Object = 0LL;
  v25 = 0LL;
  v6 = KeGetCurrentThread()->PreviousMode == 1;
  v27 = 0LL;
  v28 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v4 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 2), 0LL);
  v9 = (__int64 *)*v4;
  v10 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      v11 = PidNodeCompare(&CurrentThreadProcessId, v9);
      if ( v11 <= 0 )
      {
        if ( v11 >= 0 )
        {
          v14 = v9;
LABEL_15:
          v16 = v14 + 4;
          for ( i = (__int64 *)v14[4]; i != v16; i = (__int64 *)*i )
          {
            if ( *((_WORD *)i + 8) == a2 )
            {
              inserted = -1073741811;
              goto LABEL_24;
            }
            if ( *((_WORD *)i + 8) > a2 )
              break;
          }
          LODWORD(v27) = 48;
          *((_QWORD *)&v27 + 1) = 0LL;
          DWORD2(v28) = 64;
          *(_QWORD *)&v28 = 0LL;
          v29 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (__int64)&v27, 1, v21, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v18 = (char *)Object;
            v19 = Object;
            *((_WORD *)Object + 8) = a2;
            v19[10] = ++*(_WORD *)(a1 + 4104);
            *((_QWORD *)v19 + 3) = v14;
            v20 = (_QWORD *)i[1];
            i[1] = (__int64)v19;
            *v20 = v19;
            *((_QWORD *)v19 + 1) = v20;
            *(_QWORD *)v19 = i;
            ObReferenceObjectByPointer(v19, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v18, 0LL, 0, 0, 0, (__int64)&v25, &v24);
            if ( !inserted )
            {
              *a3 = *((_WORD *)v18 + 10);
              *a4 = v24;
              goto LABEL_27;
            }
          }
LABEL_24:
          if ( v14 && (__int64 *)*v16 == v16 )
          {
            RtlRbRemoveNode(v4, (unsigned __int64)v14);
            ExFreePoolWithTag(v14, 0);
          }
          goto LABEL_27;
        }
        v12 = (__int64 *)*v9;
        if ( !*v9 )
          break;
      }
      else
      {
        v12 = (__int64 *)v9[1];
        if ( !v12 )
        {
          v10 = 1;
          break;
        }
      }
      v9 = v12;
    }
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 1215788101LL);
  v14 = (__int64 *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = CurrentThreadProcessId;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx(v4, (unsigned __int64)v9, v10, Pool2);
    goto LABEL_15;
  }
  inserted = -1073741801;
LABEL_27:
  ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
