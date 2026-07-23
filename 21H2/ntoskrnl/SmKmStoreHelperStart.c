/*
 * XREFs of SmKmStoreHelperStart @ 0x140293F1C
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140293AF8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmKmStoreHelperStart(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = PsCreateSystemThread(&Handle, 0x1FFFFFu, 0LL, a2, 0LL, (PKSTART_ROUTINE)SmKmStoreHelperWorker, a1);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    v3 = v4;
    *a1 = Object;
    ObCloseHandle(v5, 0);
  }
  return (unsigned int)v3;
}
