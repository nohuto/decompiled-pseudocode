__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned __int16 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned __int16 *v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  LocalCommandReuse(a1, a1 + 944);
  v10 = *(_QWORD *)(a1 + 1040);
  v11 = 2 * a3 + 2;
  NVMeAllocateDmaBuffer(a1, v11);
  if ( !v17 )
    return 3238002691LL;
  NVMeZeroMemory(v17, v11);
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v10, 0LL, v11) )
    goto LABEL_13;
  *(_BYTE *)(v10 + 4253) |= 7u;
  *(_DWORD *)(v10 + 4100) = a2;
  *(_DWORD *)(v10 + 4136) = (v11 >> 2) - 1;
  *(_QWORD *)(v10 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v10 + 4096) = 26;
  *(_WORD *)(v10 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 952);
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 955) == 1 )
  {
    v13 = v17;
    v14 = *v17;
    *a4 = v14;
    if ( a3 < v14 )
    {
      v16 = -1056964604;
    }
    else
    {
      v15 = 0LL;
      if ( v14 )
      {
        do
        {
          *(_DWORD *)(v9 + 4 * v15) = v13[v15 + 1];
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *v13 );
      }
      v16 = 0;
    }
  }
  else
  {
LABEL_13:
    v13 = v17;
    v16 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, v11, (__int64 *)&v17, 0LL);
  return v16;
}
