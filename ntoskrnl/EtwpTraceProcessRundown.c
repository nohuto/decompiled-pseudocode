__int64 __fastcall EtwpTraceProcessRundown(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  char v8; // r8
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v12[2]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+74h] [rbp-8Ch]
  PVOID v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h] BYREF
  STRING AnsiString; // [rsp+88h] [rbp-78h] BYREF
  int v17[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int v20[104]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21[18]; // [rsp+260h] [rbp+160h] BYREF

  v13 = 0;
  LODWORD(v10) = 0;
  P = 0LL;
  AnsiString = 0LL;
  memset(v20, 0, 0x198uLL);
  v8 = *(_BYTE *)(a4 + 65);
  v15 = 0LL;
  v19 = 0LL;
  v14 = *(PVOID *)(a4 + 16);
  v12[1] = *(_WORD *)(a4 + 24);
  *(_OWORD *)v17 = 0LL;
  v12[0] = 0;
  v18 = 0LL;
  EtwpBuildProcessEvent(a1, a3, v8, (__int64)v17, &v15, (__int64)v21, (unsigned int *)&v10, v20, &AnsiString, v12, &P);
  EtwpLogKernelEvent((__int64)v21, *(_QWORD *)(a2 + 1096), *(_DWORD *)a2, v10, a3, 5249029 - (a3 != 807));
  if ( v14 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v14, 0);
  RtlFreeAnsiString(&AnsiString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
