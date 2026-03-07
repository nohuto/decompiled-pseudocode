__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  int v6; // r12d
  BOOL v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  int *v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&stru_140C64FF0);
    if ( !dword_140C64FE8 )
      break;
    dword_140C64FE8 = 0;
    ExReleaseFastMutex(&stru_140C64FF0);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C64EA0);
  }
  v7 = dword_140C64FD8 < (unsigned int)dword_140C64FDC;
  v8 = 0;
  while ( 1 )
  {
    v9 = qword_140C64FB8;
    if ( !v8 )
      v9 = qword_140C64FC8;
    v10 = &dword_140C64FE0;
    if ( v8 )
      v10 = &dword_140C64FD8;
    v11 = &qword_140C64FC8;
    if ( v8 )
      v11 = &qword_140C64FB8;
    if ( (__int64 *)v9 != v11 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_17;
  }
  v4 = *v11;
  v5 = *(_DWORD *)(*v11 + 24) + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_22;
  }
  v12 = *(_QWORD *)v4;
  if ( *(__int64 **)(v4 + 8) != v11 || *(_QWORD *)(v12 + 8) != v4 )
    __fastfail(3u);
  *v11 = v12;
  *(_QWORD *)(v12 + 8) = v11;
  --*v10;
LABEL_17:
  if ( !v7 && dword_140C64FD8 < (unsigned int)dword_140C64FDC )
  {
    PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 2LL);
    KeSetEvent(&Event, 0, 0);
  }
  ExReleaseFastMutex(&stru_140C64FF0);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *(_OWORD *)a1 = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140C64D38)) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140C64D38) >> 24);
    memmove(a1 + 2, (const void *)(v4 + 16), *(unsigned int *)(v4 + 24));
    *a4 = v5;
    PfTFreeTraceDump((_DWORD *)v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_22:
  if ( v6 )
    ExReleaseFastMutex(&stru_140C64FF0);
  return v13;
}
