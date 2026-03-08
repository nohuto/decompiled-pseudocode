/*
 * XREFs of _PnpCreateObject @ 0x140A61DB4
 * Callers:
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x140965C20 (PiCMCreateObject.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpCreateObjectDispatch @ 0x140A61F24 (_PnpCreateObjectDispatch.c)
 */

__int64 __fastcall PnpCreateObject(__int64 a1, __int64 a2, unsigned int a3, int a4, HANDLE *a5)
{
  __int64 v5; // r14
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, __int64, int, HANDLE *); // rsi
  int v10; // eax
  int ObjectDispatch; // eax
  int v12; // ebx
  int v13; // eax
  HANDLE v15[10]; // [rsp+48h] [rbp-21h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v15, 0, sizeof(v15));
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, HANDLE *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  if ( a4 || (LODWORD(v15[2]) = 1, a5) )
    LODWORD(v15[2]) = a4;
  HIDWORD(v15[4]) = 0;
  if ( v9 )
  {
    v10 = v9(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 3LL, 1, v15);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        goto LABEL_17;
    }
  }
  ObjectDispatch = PnpCreateObjectDispatch(v5, a2, a3, v15[2], (__int64)&v15[3], (__int64)&v15[4], HIDWORD(v15[4]));
  v12 = ObjectDispatch;
  if ( v9 )
  {
    LODWORD(v15[0]) = ObjectDispatch;
    v13 = v9(v5, a2, a3, 3LL, 2, v15);
    if ( v13 != -1073741822 )
    {
      if ( v13 != -1073741536 )
      {
        if ( !v13 )
          goto LABEL_11;
LABEL_17:
        v12 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v12 = (int)v15[0];
    }
  }
LABEL_11:
  if ( v12 >= 0 && a5 )
  {
    *a5 = v15[3];
    return (unsigned int)v12;
  }
LABEL_18:
  if ( v15[3] )
    ZwClose(v15[3]);
  return (unsigned int)v12;
}
