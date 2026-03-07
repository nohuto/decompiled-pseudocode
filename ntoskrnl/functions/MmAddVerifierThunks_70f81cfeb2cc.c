NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // edi
  ULONG v6; // ebx
  unsigned __int64 *v7; // rsi
  struct _KTHREAD *Lock; // rbp
  PVOID *v9; // rax
  PVOID *v10; // r8
  PVOID v11; // r10
  int v12; // edx
  PVOID *v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  NTSTATUS v16; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = ThunkBufferSize >> 4;
  v7 = (unsigned __int64 *)ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  VfNumberOfClassDriverThunks += v6;
  Lock = MmAcquireLoadLock();
  v9 = (PVOID *)MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = v9[6];
    v12 = 0;
    v13 = (PVOID *)PsLoadedModuleList;
    v14 = (unsigned __int64)v11 + *((unsigned int *)v9 + 16);
    while ( 1 )
    {
      if ( v13 == &PsLoadedModuleList )
        goto LABEL_11;
      if ( v9 == v13 )
        break;
      if ( (unsigned int)++v12 >= 2 )
      {
LABEL_11:
        while ( *v7 >= (unsigned __int64)v11 )
        {
          if ( *v7 >= v14 )
            break;
          v15 = v7[1];
          if ( v15 < (unsigned __int64)v11 || v15 >= v14 )
            break;
          v7 += 2;
          if ( ++v5 >= v6 )
          {
            v16 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize, v10, v14);
            MmReleaseLoadLock((__int64)Lock);
            return v16;
          }
        }
        break;
      }
      v13 = (PVOID *)*v13;
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741584;
}
