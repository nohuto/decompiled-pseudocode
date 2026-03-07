__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  void *v10; // r13
  __int16 v11; // r12
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // edx
  bool v15; // si
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char v18; // r14
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  _OWORD *ProviderGroupFromTraits; // rax
  PFAST_MUTEX v27[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = a5;
  v10 = (void *)a5;
  v11 = 0;
  v27[0] = FastMutex;
  if ( a6 < 3 )
    goto LABEL_39;
  if ( *(unsigned __int16 *)(a5 + 28) != a6 )
    goto LABEL_39;
  v12 = (unsigned int)strnlen((const char *)(a5 + 30), a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_39;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      v14 = *(unsigned __int16 *)(v12 + a5 + 28);
      if ( v14 < 3 )
        break;
      v12 = v14 + (unsigned int)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_8;
    }
    goto LABEL_39;
  }
LABEL_8:
  if ( !v13 )
  {
LABEL_39:
    v21 = -1073741566;
    goto LABEL_30;
  }
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  v15 = 1;
  *(_DWORD *)(a5 + 24) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v17 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
      goto LABEL_19;
    v16 = a8 ^ v17;
  }
  else
  {
    v16 = *(_QWORD *)a8;
    v17 = *(_QWORD *)a8;
  }
  if ( !v16 )
  {
LABEL_19:
    v17 = 0LL;
    v18 = 0;
    goto LABEL_20;
  }
  v18 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = TraitsCompare(a5, v17);
      if ( v19 <= 0 )
      {
        if ( v19 >= 0 )
        {
          ++*(_DWORD *)(v17 + 24);
          v18 = 1;
          v8 = v17;
          goto LABEL_22;
        }
        v20 = *(_QWORD *)v17;
        if ( !*(_QWORD *)v17 )
        {
          v15 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        v20 = *(_QWORD *)(v17 + 8);
        if ( !v20 )
          goto LABEL_21;
      }
      v17 = v20;
    }
  }
LABEL_20:
  v15 = 0;
LABEL_21:
  RtlRbInsertNodeEx((unsigned __int64 *)a8, v17, v15, a5);
  v10 = 0LL;
LABEL_22:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v8, 0LL) )
  {
    if ( v18 )
    {
      --*(_DWORD *)(v8 + 24);
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, v8);
      v10 = (void *)v8;
    }
    v21 = -1073741823;
  }
  else
  {
    v21 = 0;
  }
  ExReleaseFastMutex(v27[0]);
  if ( !v21 )
  {
    if ( *(_WORD *)(v8 + 28) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v11 = 1024;
      goto LABEL_29;
    }
    if ( *(_QWORD *)(a4 + 40)
      || (*(_OWORD *)v27 = 0LL, (ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits()) == 0LL)
      || (*(_OWORD *)v27 = *ProviderGroupFromTraits, (v21 = EtwpAddRegEntryToGroup(a4, (int)v27, a1, a2, a3)) == 0) )
    {
LABEL_29:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x200);
      goto LABEL_30;
    }
    EtwpReleaseProviderTraitsReference(a4);
  }
LABEL_30:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v21;
}
