__int64 __fastcall PnpGetObjectPropertyLocales(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v13; // eax
  unsigned int ObjectPropertyLocalesWorker; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[10]; // [rsp+58h] [rbp-31h] BYREF

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v20, 0, sizeof(v20));
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  LODWORD(v20[7]) = 0;
  v20[3] = a5;
  v20[4] = a6;
  LODWORD(v20[5]) = a7;
  v20[6] = a8;
  v20[2] = a4;
  if ( v12 )
  {
    v13 = v12(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 7LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyLocalesWorker = PnpGetObjectPropertyLocalesWorker(
                                  v8,
                                  a2,
                                  a3,
                                  v20[2],
                                  v20[3],
                                  v20[4],
                                  v20[5],
                                  v20[6],
                                  v20[7]);
  v15 = ObjectPropertyLocalesWorker;
  if ( !v12 )
    return v15;
  LODWORD(v20[0]) = ObjectPropertyLocalesWorker;
  v17 = v12(v8, a2, a3, 7LL, 2, v20);
  v18 = v17;
  if ( v17 == -1073741822 )
    return v15;
  if ( v17 == -1073741536 )
    return LODWORD(v20[0]);
  v19 = v15;
  if ( v18 )
    return (unsigned int)-1073741595;
  return v19;
}
