/*
 * XREFs of ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z @ 0x1C0091CA0
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C00917C4 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

NTSTATUS __fastcall CActivationObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4,
        HWND a5,
        unsigned __int64 a6,
        struct CActivationObject **a7)
{
  NTSTATUS result; // eax
  __int64 v8; // rcx
  NTSTATUS Object; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _LUID Luid; // [rsp+50h] [rbp-10h] BYREF

  Luid = 0LL;
  *a7 = 0LL;
  result = ZwAllocateLocallyUniqueId(&Luid);
  if ( result >= 0 )
  {
    LOBYTE(v8) = 1;
    Object = ObCreateObject(v8, ExActivationObjectType, 0LL);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x50uLL);
      MEMORY[0] = gSessionId;
      MEMORY[0x18] = PsGetCurrentProcess(0LL, v10, v11, v12);
      MEMORY[0x20] = KeGetCurrentThread();
      Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, 0LL);
      if ( Object >= 0 )
      {
        MEMORY[0x30] = a6;
        MEMORY[0x48] = a5;
        MEMORY[0x28] = Luid;
        MEMORY[0x38] = 1;
        *a7 = 0LL;
      }
    }
    return Object;
  }
  return result;
}
