/*
 * XREFs of _PnpCreateObject @ 0x14073249C
 * Callers:
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x1408AFD04 (PiCMCreateObject.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpCreateObjectDispatch @ 0x1407325AC (_PnpCreateObjectDispatch.c)
 */

__int64 __fastcall PnpCreateObject(__int64 a1, __int64 a2, unsigned int a3, int a4, HANDLE *a5)
{
  __int64 v5; // r14
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, __int64, int, HANDLE *); // rsi
  int v10; // eax
  int ObjectDispatch; // eax
  int v12; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  HANDLE v17[10]; // [rsp+48h] [rbp-21h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v17, 0, sizeof(v17));
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, HANDLE *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  if ( a4 || (LODWORD(v17[2]) = 1, a5) )
    LODWORD(v17[2]) = a4;
  HIDWORD(v17[4]) = 0;
  if ( v9 )
  {
    v10 = v9(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 3LL, 1, v17);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_18;
      if ( v10 )
      {
        v12 = -1073741595;
        goto LABEL_16;
      }
    }
  }
  ObjectDispatch = PnpCreateObjectDispatch(v5, a2, a3, v17[2], (__int64)&v17[3], (__int64)&v17[4], HIDWORD(v17[4]));
  v12 = ObjectDispatch;
  if ( !v9 )
    goto LABEL_7;
  LODWORD(v17[0]) = ObjectDispatch;
  v14 = v9(v5, a2, a3, 3LL, 2, v17);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_7;
  if ( v14 == -1073741536 )
  {
LABEL_18:
    v12 = (int)v17[0];
    goto LABEL_7;
  }
  v16 = v12;
  if ( v15 )
    v16 = -1073741595;
  v12 = v16;
LABEL_7:
  if ( v12 >= 0 && a5 )
  {
    *a5 = v17[3];
    return (unsigned int)v12;
  }
LABEL_16:
  if ( v17[3] )
    ZwClose(v17[3]);
  return (unsigned int)v12;
}
