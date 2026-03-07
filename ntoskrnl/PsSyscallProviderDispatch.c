__int64 __fastcall PsSyscallProviderDispatch(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  PEPROCESS v4; // rax
  int v5; // r8d
  unsigned int v6; // edi
  __int64 v7; // rcx
  _QWORD *v8; // r15
  unsigned int *v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 4) != 0 )
  {
    v16 = a1;
    ((void (__fastcall *)(__int64 *))qword_140C37D28)(&v16);
    return 0LL;
  }
  v4 = IoThreadToProcess(CurrentThread);
  v6 = *(_DWORD *)(a1 + 48) & 0xFFFF9FFF;
  v7 = *(unsigned int *)&v4[2].IdealProcessor[28];
  if ( (unsigned int)v7 >= 0x20 )
    KeBugCheckEx(0x1E0u, 1uLL, (unsigned int)v7, *(_QWORD *)&v4[2].IdealProcessor[14], 0LL);
  v8 = (_QWORD *)((char *)&PspServiceDescriptorGroupTable + 24 * v7);
  v9 = (unsigned int *)v8[((v6 >> 12) & 7) + 1];
  if ( !v9 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFu) >= *v9 )
  {
    *(_QWORD *)(a1 + 48) = 3221225500LL;
    return 0LL;
  }
  v10 = *(_WORD *)(a1 + 48) & 0xFFF;
  v11 = v9[v10 + 1];
  if ( !(_DWORD)v11 )
    return 1LL;
  if ( (_DWORD)v11 != 1 )
  {
    if ( (*(_WORD *)(a1 + 48) & 0x1000) == 0x1000
      && (v12 = PspEnsureGuiThreadAndBatchFlush(CurrentThread), v13 = v12, v12 < 0) )
    {
      if ( v12 == -1073741823 )
      {
        v13 = *(char *)(v10 + 4LL * (unsigned int)xmmword_140D1F170 + xmmword_140D1F160);
        if ( v13 == 1 )
          v13 = -1073741796;
      }
      v14 = v13;
    }
    else
    {
      v15 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(*v8 + ((v11 >> 4) & 0xFFFFFFFFFFFFFF0LL));
      if ( (v11 & 0x10) != 0 )
      {
        LOBYTE(v5) = v11 & 0xF;
        result = PspSyscallProviderServiceDispatchGeneric(a1, (_DWORD)v15, v5, v6, (__int64)&v17);
        if ( (_DWORD)result )
          return result;
        v14 = v17;
        goto LABEL_22;
      }
      v14 = PspSyscallProviderServiceDispatch((_QWORD *)a1, v15, v11 & 0xF);
    }
    result = 0LL;
LABEL_22:
    *(_QWORD *)(a1 + 48) = v14;
    return result;
  }
  return 2LL;
}
