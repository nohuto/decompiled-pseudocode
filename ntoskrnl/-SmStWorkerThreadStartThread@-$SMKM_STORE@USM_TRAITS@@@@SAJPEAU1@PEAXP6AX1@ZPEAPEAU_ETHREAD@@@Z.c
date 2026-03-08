/*
 * XREFs of ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403595E8
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140359180 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
        __int64 a1,
        void *a2,
        KSTART_ROUTINE *a3,
        PVOID *a4)
{
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp-8h]
  int v14; // [rsp+6Ch] [rbp-4h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  v14 = 0;
  v11[1] = 0;
  v13 = -1;
  v12[1] = v12;
  v12[0] = v12;
  v10 = a1;
  v11[0] = 393216;
  v5 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, a2, 0LL, a3, &v10);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v7 = ThreadHandle;
    v5 = v6;
    *a4 = Object;
    ObCloseHandle(v7, 0);
    ThreadHandle = 0LL;
    KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
    if ( v13 < 0 )
      v5 = v13;
  }
  if ( ThreadHandle )
    ObCloseHandle(ThreadHandle, 0);
  return (unsigned int)v5;
}
