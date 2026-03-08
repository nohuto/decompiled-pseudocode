/*
 * XREFs of _PnpGetObjectList @ 0x14086A038
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14083A17C (PiDmObjectManagerPopulate.c)
 *     PiCMGetObjectList @ 0x140869E8C (PiCMGetObjectList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpGetObjectListDispatch @ 0x14086A180 (_PnpGetObjectListDispatch.c)
 */

__int64 __fastcall PnpGetObjectList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, int, __int64 *); // rdi
  int v11; // eax
  unsigned int ObjectListDispatch; // eax
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v16; // eax
  __int64 v17[10]; // [rsp+48h] [rbp-19h] BYREF

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v17, 0, sizeof(v17));
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, __int64 *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  v17[4] = a5;
  LODWORD(v17[5]) = a6;
  v17[6] = a7;
  LODWORD(v17[7]) = a8;
  if ( v10 )
  {
    v11 = v10(*(_QWORD *)&PiPnpRtlCtx, 0LL, a2, 5LL, 1, v17);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectListDispatch = PnpGetObjectListDispatch(v8, a2, v17[2], v17[3], v17[4], v17[5], v17[6], v17[7]);
  v13 = ObjectListDispatch;
  if ( !v10 )
    return v13;
  LODWORD(v17[0]) = ObjectListDispatch;
  v14 = v10(v8, 0LL, a2, 5LL, 2, v17);
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v17[0]);
  v16 = v13;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v16;
}
