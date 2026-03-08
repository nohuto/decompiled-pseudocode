/*
 * XREFs of UmfdQueryFont @ 0x1C011EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     UmfdDrvFreeInternal @ 0x1C0307E40 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFont(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  void **v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+38h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-29h]
  __int64 v12; // [rsp+48h] [rbp-21h]
  char v13; // [rsp+50h] [rbp-19h]
  __int64 v14; // [rsp+58h] [rbp-11h]
  __int64 v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]
  _QWORD *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  __int128 v19; // [rsp+80h] [rbp+17h]
  __int128 ThreadInformation; // [rsp+90h] [rbp+27h] BYREF

  *a4 = 0LL;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v12 = ThreadInformation;
    v13 = 1;
  }
  v18 = 0LL;
  v9 = &QueryFontRequest::`vftable';
  v19 = 0LL;
  v14 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a2 + 8), &v9) < 0 )
    return 0LL;
  result = v18;
  if ( !v18 )
  {
    if ( *((_QWORD *)&v19 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v19 + 1), *v17, *(unsigned int *)(v15 + 8));
    return 0LL;
  }
  return result;
}
