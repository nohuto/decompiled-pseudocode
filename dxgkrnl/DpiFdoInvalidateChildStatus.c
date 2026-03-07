__int64 __fastcall DpiFdoInvalidateChildStatus(
        __int64 a1,
        int a2,
        char a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rbp
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v7 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 3320), 1u);
  v14[1] = a7;
  v15 = a4;
  BYTE1(v15) = a3;
  v14[0] = a2 & 0xFFFFFF | (a5 != 0 ? 285212672 : 0x1000000);
  BYTE2(v15) = a6;
  v11 = DpiDxgkDdiDisplayDetectControl(v7, *(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), (unsigned int *)v14);
  v12 = v11;
  if ( v11 < 0 )
    WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v7 + 40) + 1128LL), v11);
  ExReleaseResourceLite((PERESOURCE)(v7 + 3320));
  KeLeaveCriticalRegion();
  return v12;
}
