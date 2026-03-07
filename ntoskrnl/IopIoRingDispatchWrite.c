__int64 __fastcall IopIoRingDispatchWrite(__int64 a1, __int64 a2, __int64 a3)
{
  char PreviousMode; // r14
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 result; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // [rsp+80h] [rbp+17h] BYREF
  __int64 v17[2]; // [rsp+88h] [rbp+1Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+7Fh] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  v6 = *(_DWORD *)(a2 + 16);
  *(_OWORD *)v17 = 0LL;
  if ( (v6 & 0xFFFFFFFC) != 0 )
  {
    v7 = -1069154303;
LABEL_11:
    v17[1] = 0LL;
    v15 = *(_QWORD *)(a2 + 8);
    LODWORD(v17[0]) = v7;
    return IopCompleteIoRingEntry(a1, v15, v17, 0);
  }
  v8 = *(unsigned int *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 32);
  v16 = 0LL;
  LOBYTE(a3) = (v6 & 2) != 0;
  result = IopIoRingGetBuffer(a1, v9, a3, v8, PreviousMode, 0, &v16, &BugCheckParameter4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    LOBYTE(v11) = *(_BYTE *)(a2 + 16) & 1;
    Object = 0LL;
    LOBYTE(v12) = PreviousMode;
    v20 = 0LL;
    result = IopIoRingReferenceFileObject(a1, v13, v11, v12, 1, 0, (__int64)&Object, (__int64)&v20);
    v7 = result;
    if ( (int)result >= 0 )
    {
      v14 = Object;
      if ( IopFileObjectRevoked((__int64)Object) )
      {
        result = ObfDereferenceObject(v14);
        v7 = -1073739504;
      }
      else
      {
        *(_BYTE *)(a2 + 23) = 0;
        result = IopWriteFile(
                   v14,
                   0LL,
                   0LL,
                   0LL,
                   v17,
                   v16,
                   *(_DWORD *)(a2 + 48),
                   (struct _KTHREAD **)(a2 + 40),
                   a2 + 52,
                   SBYTE4(v20),
                   a1,
                   *(_QWORD *)(a2 + 8),
                   *(_DWORD *)(a2 + 20) | 0x80000000,
                   (__int64)&BugCheckParameter4);
        v7 = result;
      }
    }
  }
  if ( BugCheckParameter4 )
    result = IopMcReleaseMdl((struct _MDL *)BugCheckParameter4, 0);
  if ( v7 != 259 )
    goto LABEL_11;
  return result;
}
