LONG_PTR __fastcall IopIoRingDispatchRead(PVOID a1, __int64 a2, __int64 a3)
{
  char PreviousMode; // r14
  int v6; // eax
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  LONG_PTR result; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15[2]; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+38h] BYREF
  PVOID VirtualAddress; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  v6 = *(_DWORD *)(a2 + 16);
  *(_OWORD *)v15 = 0LL;
  if ( (v6 & 0xFFFFFFFC) != 0 )
  {
    v7 = -1069154303;
LABEL_9:
    v15[1] = 0LL;
    v14 = *(_QWORD *)(a2 + 8);
    LODWORD(v15[0]) = v7;
    return IopCompleteIoRingEntry((__int64)a1, v14, v15, 0);
  }
  v8 = *(unsigned int *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 32);
  VirtualAddress = 0LL;
  LOBYTE(a3) = (v6 & 2) != 0;
  result = IopIoRingGetBuffer(a1, v9, a3, v8, PreviousMode, 1, &VirtualAddress, &BugCheckParameter4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    LOBYTE(v12) = PreviousMode;
    v13 = *(_QWORD *)(a2 + 24);
    LOBYTE(v11) = *(_BYTE *)(a2 + 16) & 1;
    Object = 0LL;
    result = IopIoRingReferenceFileObject((_DWORD)a1, v13, v11, v12, 0, 1, (__int64)&Object, 0LL);
    v7 = result;
    if ( (int)result >= 0 )
    {
      result = IopReadFile(
                 (struct _FILE_OBJECT *)Object,
                 0LL,
                 0LL,
                 0LL,
                 (struct _IO_STATUS_BLOCK *)v15,
                 (struct _IRP *)VirtualAddress,
                 *(_DWORD *)(a2 + 48),
                 a2 + 40,
                 (ULONG *)(a2 + 52),
                 a1,
                 *(struct _IO_STATUS_BLOCK **)(a2 + 8),
                 0x80000000,
                 (PMDL *)&BugCheckParameter4,
                 0LL);
      v7 = result;
    }
  }
  if ( BugCheckParameter4 )
    result = IopMcReleaseMdl((struct _MDL *)BugCheckParameter4, 0);
  if ( v7 != 259 )
    goto LABEL_9;
  return result;
}
