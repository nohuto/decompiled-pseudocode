/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x140A9C6A0
 * Callers:
 *     KiStartSavingSupervisorState @ 0x140A9C620 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // ebp
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  _QWORD *Pool2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r13d
  _QWORD *v6; // r14
  void *v7; // rax
  PVOID *v8; // r14
  __int128 Context; // [rsp+20h] [rbp-38h] BYREF

  v0 = KeNumberProcessors_0;
  Context = 0LL;
  v1 = 8LL * (unsigned int)KeNumberProcessors_0;
  if ( v1 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)v1, 1701344088LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + KiIptSaveAreaLength + 127;
  if ( !v0 )
  {
LABEL_11:
    *(_QWORD *)&Context = Pool2;
    DWORD2(Context) = v0;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
    goto LABEL_12;
  }
  v6 = Pool2;
  while ( *(_QWORD *)(*(_QWORD *)((char *)v6 + (char *)KiProcessorBlock - (char *)Pool2) + 1728LL) )
  {
    *v6 = 0LL;
LABEL_10:
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= v0 )
      goto LABEL_11;
  }
  v7 = (void *)ExAllocatePool2(64LL, v5, 1701868883LL);
  *v6 = v7;
  if ( v7 )
  {
    memset(v7, 0, v5);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 )
  {
    v8 = (PVOID *)Pool2;
    do
    {
      if ( *v8 )
        ExFreePoolWithTag(*v8, 0);
      ++v8;
      --v4;
    }
    while ( v4 );
  }
  v2 = -1073741670;
LABEL_12:
  ExFreePoolWithTag(Pool2, 0);
  return v2;
}
