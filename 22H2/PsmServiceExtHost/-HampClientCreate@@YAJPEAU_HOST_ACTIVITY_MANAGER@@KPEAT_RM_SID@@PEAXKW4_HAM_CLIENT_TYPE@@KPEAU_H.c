/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000954C
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800093B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180041228 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180008734 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180009648 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18000977C (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAT_HAM_STATE_CHANGE_FLAGS@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800098CC (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALL.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        unsigned int a2,
        union _RM_SID *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        struct _HAM_CLIENT_CONTEXT **a11)
{
  struct _HAM_CLIENT_CONTEXT *Heap; // rax
  struct _HAM_CLIENT_CONTEXT *v16; // rbx
  int State; // edi

  Heap = (struct _HAM_CLIENT_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v16 = Heap;
  if ( Heap )
  {
    HampClientInitialize(a1, a2, a5, a6, a7, a8, a9, a10, Heap);
    State = HampClientAllocateState(v16, a3, a4);
    if ( State >= 0 )
    {
      HampClientInsert(v16);
      *a11 = v16;
      v16 = 0LL;
      State = 0;
    }
    if ( v16 )
      HampClientDestroy(v16);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
