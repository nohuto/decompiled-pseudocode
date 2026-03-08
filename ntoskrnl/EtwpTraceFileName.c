/*
 * XREFs of EtwpTraceFileName @ 0x14035E5C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceFileName(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        __int16 a6)
{
  __int64 CurrentServerSilo; // r14
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  __int16 v14; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h]
  unsigned int v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+74h] [rbp+Bh]
  __int16 *v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]

  v15[1] = 0LL;
  v14 = 0;
  if ( a1 )
    CurrentServerSilo = *(_QWORD *)(a1 + 2160);
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a3;
  v15[0] = a2;
  if ( v10 > 0x2000 )
    v10 = 0x2000;
  *(_QWORD *)&UserData.Size = 8LL;
  v18 = v10;
  UserData.Ptr = (ULONGLONG)v15;
  v17 = *((_QWORD *)a3 + 1);
  v20 = &v14;
  v19 = 0;
  v21 = 2LL;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x200) != 0 )
  {
    if ( a6 == 1056 )
    {
      v13 = (const EVENT_DESCRIPTOR *)KFileEvt_NameCreate;
    }
    else
    {
      if ( a6 != 1059 )
        goto LABEL_7;
      v13 = &KFileEvt_NameDelete;
    }
    EtwWriteEx(EtwpFileProvRegHandle, v13, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    goto LABEL_8;
  }
LABEL_7:
  if ( a6 != 1060 )
  {
LABEL_8:
    EtwTraceSiloKernelEvent(CurrentServerSilo, (unsigned int)&UserData, 3, 512, a6, 4200450);
    return;
  }
  if ( a4 )
  {
    if ( a4 != CurrentServerSilo )
      return;
    v11 = *(_QWORD **)(a4 + 1488);
  }
  else
  {
    v11 = &PspHostSiloGlobals;
  }
  v12 = v11[108];
  if ( v12 )
    EtwpLogKernelEvent((__int64)&UserData, v12, a5, 3u, 0x424u, 0x401802u);
}
