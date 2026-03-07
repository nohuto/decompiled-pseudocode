__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  _KPROCESS *v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  __int64 ProcessPartition; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-58h]
  PVOID v15; // [rsp+50h] [rbp-48h]
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+58h] [rbp-40h] BYREF

  memset(&v16, 0, sizeof(v16));
  v13 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
  *(_OWORD *)Handle = 0LL;
  if ( a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v6 = a1;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 15) = *(_BYTE *)(v6 + 15);
    }
    *(_OWORD *)Handle = *(_OWORD *)a1;
    if ( LOBYTE(Handle[0]) == 1 )
    {
      if ( ((__int64)Handle[0] & 0xFFFFFC00) != 0 )
      {
        v7 = -1073741811;
      }
      else if ( ((__int64)Handle[0] & 0x100) != 0 )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(Handle[1], 0x2000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
        v4 = (_KPROCESS *)Object;
        if ( v7 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x40000u);
          if ( ((__int64)Handle[0] & 0x200) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process != v4 )
            {
              v5 = 1;
              KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v16);
            }
            ProcessPartition = SmpGetProcessPartition((__int64)Object);
            v13 = v10;
            v11 = SmpKeyedStoreEntryGet(ProcessPartition + 2072, &v13, 0, 0);
            if ( v11 )
              *(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex(ProcessPartition, *(_WORD *)(v11 + 16) & 0x3FF) + 6023LL) = 1;
            else
              v7 = -1073741632;
          }
          else
          {
            v7 = 0;
          }
        }
      }
      else
      {
        v7 = -1073741637;
      }
    }
    else
    {
      v7 = -1073741735;
    }
  }
  else
  {
    v7 = -1073741306;
  }
  if ( v5 )
    KiUnstackDetachProcess(&v16);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v7;
}
