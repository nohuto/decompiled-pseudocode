/*
 * XREFs of PfGetCompletedTrace @ 0x14062FD1C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406CD5D0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x14026E76C (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x14026E8B0 (PfFbBufferListFlushStandby.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // edx
  int v8; // eax
  int *v9; // r12
  _QWORD *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&stru_140C4FDF0);
    if ( !dword_140C4FDE8 )
      break;
    dword_140C4FDE8 = 0;
    KeReleaseGuardedMutex(&stru_140C4FDF0);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C4FCA0);
  }
  v7 = dword_140C4FDD8 < (unsigned int)dword_140C4FDDC;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_140C4FDE0;
    if ( v8 )
      v9 = &dword_140C4FDD8;
    v10 = &unk_140C4FDC8;
    if ( v8 )
      v10 = &unk_140C4FDB8;
    v11 = (_DWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = (_DWORD *)*v10;
  v5 = v11[6] + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)v11;
  if ( *((_QWORD **)v11 + 1) != v10 || *(_DWORD **)(v12 + 8) != v11 )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_140C4FDD8 < (unsigned int)dword_140C4FDDC )
  {
    PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 2LL);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&stru_140C4FDF0);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *(_OWORD *)a1 = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140C503E8)) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140C503E8) >> 24);
    memmove(a1 + 2, v4 + 4, (unsigned int)v4[6]);
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&stru_140C4FDF0);
  return v13;
}
