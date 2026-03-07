char __fastcall CcMapDataCommon(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, _QWORD *a5, __int64 *a6)
{
  __int64 VirtualAddress; // rcx
  char result; // al
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v9 = 0LL;
  __incgsdword(4 * (a4 & 1) + 33868);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  if ( (a4 & 1) != 0 )
  {
    VirtualAddress = CcGetVirtualAddress(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL), *a2, &v9, &v10, (a4 >> 6) & 1, 0);
    *a6 = VirtualAddress;
LABEL_3:
    result = 1;
    *a5 = v9;
    return result;
  }
  result = CcPinFileData(a1, a2, a3, 1, 0, a4, (ULONG_PTR *)&v9, a6, v8);
  if ( result )
    goto LABEL_3;
  __incgsdword(0x848Cu);
  return result;
}
