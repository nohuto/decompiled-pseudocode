__int64 __fastcall IoWriteDeferredLiveDumpData(char *P)
{
  __int64 MillisecondCounter; // rbx
  int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  __int64 *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = IopLiveDumpWriteDumpFile((__int64)P);
  v4 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  IopLiveDumpTraceDumpFileWriteEnd((__int64)P, v4, 1LL, v3);
  if ( v3 >= 0 && (P[80] & 2) != 0 )
    v3 = 261;
  IopLiveDumpTraceInterfaceEnd((__int64)P, 1LL, v3, v4);
  if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    v12 = &v8;
    v5 = *((_QWORD *)P + 70);
    v13 = 8LL;
    v15 = 8LL;
    v10 = v4;
    v6 = *(_QWORD *)(v5 + 4000);
    v14 = &v9;
    v16 = &v10;
    v9 = v6;
    v17 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06280,
      (unsigned __int8 *)byte_14002B873,
      (const GUID *)(P + 968),
      (const GUID *)(P + 952),
      5u,
      &v11);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 952));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return (unsigned int)v3;
}
