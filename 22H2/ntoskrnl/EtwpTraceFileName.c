/*
 * XREFs of EtwpTraceFileName @ 0x1403B8880
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14025A0AC (EtwTraceSiloKernelEvent.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 */

void __fastcall EtwpTraceFileName(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        __int16 a6)
{
  __int64 ThreadServerSilo; // rdi
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int16 v13; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v16; // [rsp+68h] [rbp-1h]
  unsigned int v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+74h] [rbp+Bh]
  __int16 *v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]

  v14[1] = 0LL;
  v13 = 0;
  if ( a1 )
  {
    ThreadServerSilo = *(_QWORD *)(a1 + 2160);
  }
  else if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
  {
    ThreadServerSilo = 0LL;
  }
  else
  {
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  }
  v10 = *a3;
  v14[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v17 = v10;
  UserData.Ptr = (ULONGLONG)v14;
  v16 = *((_QWORD *)a3 + 1);
  v19 = &v13;
  v18 = 0;
  v20 = 2LL;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x200) != 0 )
  {
    if ( a6 == 1056 )
    {
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameCreate, 0LL, 0, 0LL, 0LL, 3u, &UserData);
LABEL_12:
      EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&UserData, 3, 0x200u, a6, 4200450);
      return;
    }
    if ( a6 == 1059 )
      EtwWriteEx(EtwpFileProvRegHandle, &KFileEvt_NameDelete, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( a6 != 1060 )
    goto LABEL_12;
  if ( a4 )
  {
    if ( a4 != ThreadServerSilo )
      return;
    v11 = *(_QWORD **)(a4 + 1272);
  }
  else
  {
    v11 = &PspHostSiloGlobals;
  }
  v12 = v11[108];
  if ( v12 )
    EtwpLogKernelEvent((__int64)&UserData, v12, a5, 3u, 0x424u, 0x401802u);
}
