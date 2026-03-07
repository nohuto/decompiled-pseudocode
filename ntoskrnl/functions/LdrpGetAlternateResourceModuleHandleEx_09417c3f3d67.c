__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  signed int j; // edi
  __int64 v11; // rax
  __int16 v12; // cx
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  struct _KMUTANT *v16; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v16 = &MuiMutex;
  RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &v16, 0LL);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v15 )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 1) == a1
            && LdrpGetMappingFromCacheEntry(j, a3, &v15, &v14) )
          {
            v7 = j;
            goto LABEL_12;
          }
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v15 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      v14 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
    }
  }
LABEL_12:
  if ( v7 == AlternateResourceModuleCount )
  {
    v15 = 0LL;
  }
  else
  {
    if ( !v14 )
    {
      v11 = RtlImageNtHeader(v15 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v11 )
      {
        v12 = *(_WORD *)(v11 + 24);
        if ( v12 == 267 || v12 == 523 )
          v14 = *(unsigned int *)(v11 + 80);
        else
          v14 = 0LL;
      }
    }
    *a4 = v14;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v15;
}
