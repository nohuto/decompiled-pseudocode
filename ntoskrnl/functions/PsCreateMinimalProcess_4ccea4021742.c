__int64 __fastcall PsCreateMinimalProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        char a7,
        __int64 a8,
        ULONG_PTR a9,
        __int64 a10,
        _QWORD *a11)
{
  ULONG_PTR v11; // r15
  unsigned int v14; // ebx
  int v15; // r12d
  int MemoryPartitionContext; // eax
  PVOID v17; // r14
  signed int inserted; // esi
  PVOID v19; // rax
  char *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  PVOID v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _QWORD *v33; // [rsp+C0h] [rbp-40h]
  _BYTE v34[400]; // [rsp+D0h] [rbp-30h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v35; // [rsp+260h] [rbp+160h] BYREF

  v11 = a9;
  v30 = a10;
  v32 = a3;
  v31 = a2;
  v33 = a11;
  v28 = a5;
  v27 = a9;
  v29 = 0LL;
  memset(&v35, 0, sizeof(v35));
  memset(v34, 0, sizeof(v34));
  v26 = 0LL;
  v14 = 0;
  Object = 0LL;
  if ( a5 )
    v14 = 1;
  else
    v28 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v15 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext(a1, a6 | 0x800u, (__int64)&v27, a9 != 0, &v26);
  v17 = v26;
  inserted = MemoryPartitionContext;
  if ( MemoryPartitionContext >= 0 )
  {
    v19 = (PVOID)v30;
    if ( v26 )
      v19 = v26;
    inserted = PspAllocateProcess(a1, 0, 0LL, a4, 0, 0, 0LL, v28, v15, a7, 0LL, v14, v19, (__int64)&v29, &Object);
    if ( inserted < 0 )
    {
      Object = 0LL;
    }
    else
    {
      if ( a8 )
        *((_QWORD *)Object + 280) = a8;
      v20 = (char *)Object;
      if ( (*((_DWORD *)Object + 543) & 1) != 0 && !*((_QWORD *)Object + 280) && (unsigned int)KeKvaShadowingActive() )
      {
        v20[912] = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 543, 0xEu) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v35);
          if ( Object != PsInitialSystemProcess )
            MiDeleteProcessShadow((__int64)Object, 1LL, v21, v22);
          KiUnstackDetachProcess(&v35);
        }
        v11 = v27;
        v20 = (char *)Object;
        v17 = v26;
      }
      if ( v31 )
      {
        PspSetMinimalProcessName(v20, v31);
        v20 = (char *)Object;
      }
      memset(v34, 0, sizeof(v34));
      v23 = 1;
      if ( (_DWORD)v29 )
        v23 = 3;
      inserted = PspInsertProcess(v20, a1, 0x2000000, v15, 0LL, v23, v32, (PACCESS_STATE)v34);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((PRKPROCESS)Object, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v11 || (inserted = PsAssignProcessToJobObject(v11, (PEPROCESS)Object, 0LL), inserted >= 0) )
        {
          DbgkCreateMinimalProcess(Object);
          v14 |= 2u;
          *(_DWORD *)&v34[384] |= 0x200u;
          inserted = PspCreateObjectHandle(Object, (__int64)v34, (struct _OBJECT_TYPE *)PsProcessType);
          if ( inserted >= 0 )
          {
            v14 &= ~4u;
            *v33 = *(_QWORD *)&v34[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)v34);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v34[32]);
  }
  if ( Object )
  {
    if ( v14 >= 4 )
      PsTerminateProcess((struct _KPROCESS *)Object, inserted);
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  }
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x624A7350u);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v28);
  return (unsigned int)inserted;
}
