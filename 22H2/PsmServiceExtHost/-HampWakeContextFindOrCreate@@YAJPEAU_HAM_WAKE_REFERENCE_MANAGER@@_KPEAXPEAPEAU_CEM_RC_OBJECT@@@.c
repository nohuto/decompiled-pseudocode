/*
 * XREFs of ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180006F24
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CB3C (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180006DB4 (-HampWakeContextInitialize@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KKPEAU_HAM_HOST_WAKE_CONTEXT@@@.c)
 *     ?HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z @ 0x180006E94 (-HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z.c)
 *     ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180007060 (-HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180007108 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180007EDC (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x1800320F0 (CemRcTableFindOrInsertEx.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextFindOrCreate(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2,
        void *a3,
        struct _CEM_RC_OBJECT **a4)
{
  struct _HAM_HOST_WAKE_CONTEXT *Heap; // rdi
  unsigned int v9; // r15d
  NTSTATUS State; // ebx
  int ReturnLength; // [rsp+20h] [rbp-98h]
  ULONG v13; // [rsp+30h] [rbp-88h] BYREF
  struct _CEM_RC_OBJECT *v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-70h]
  _BYTE JobInformation[32]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+70h] [rbp-48h]

  Heap = (struct _HAM_HOST_WAKE_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &v13);
  v9 = v18;
  HampWakeContextInitialize(a1, a2, v18, Heap);
  State = HampWakeContextAllocateState((void **)Heap, a3);
  if ( State < 0 )
    goto LABEL_11;
  HampWakeManagerAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
  {
    State = -1073741077;
    HampWakeManagerReleaseLockShared(a1);
    goto LABEL_11;
  }
  v15 = a2;
  v16 = v9;
  CemRcTableFindOrInsertEx(
    (_DWORD)a1 + 32,
    (unsigned int)&v15,
    (unsigned int)HampWakeContextTreeCompareByHostId,
    (_DWORD)Heap,
    ReturnLength,
    (__int64)&v14);
  HampWakeManagerReleaseLockShared(a1);
  if ( v14 != Heap )
  {
    *a4 = v14;
    State = 0;
    goto LABEL_11;
  }
  State = HampWakeContextStart(Heap);
  if ( State < 0 )
  {
LABEL_11:
    CemRcObjectDereference(Heap);
    return (unsigned int)State;
  }
  *a4 = Heap;
  return 0;
}
