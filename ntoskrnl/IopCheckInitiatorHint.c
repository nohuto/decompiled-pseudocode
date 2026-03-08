/*
 * XREFs of IopCheckInitiatorHint @ 0x14035E260
 * Callers:
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopSetFileObjectExtensionFlag @ 0x140294D78 (IopSetFileObjectExtensionFlag.c)
 *     IoGetInitiatorProcess @ 0x1403026B0 (IoGetInitiatorProcess.c)
 *     RtlIsSandboxedToken @ 0x140741410 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *Teb; // rbx
  __int64 v6; // rcx
  char v7; // bl
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v6 = Teb[251];
    v7 = v6;
    Object = 0LL;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v6 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      v12 = 0LL;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v12, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObject(Object);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v12 + 8) = Object;
          if ( (v7 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
