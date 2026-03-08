/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x140B579BC
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140B57734 (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     PnpDoPolicyCheck @ 0x140B5910C (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140B5916C (PnpNotifyEarlyLaunchImageLoad.c)
 */

__int64 __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // zf
  _QWORD v11[14]; // [rsp+28h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+C8h] [rbp+67h] BYREF

  result = (__int64)memset(v11, 0, 0x68uLL);
  v12 = 0;
  v5 = (_QWORD *)(a2 + 16);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    if ( (*(_DWORD *)(v7 + 104) & 0x4000000) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 228);
      if ( !a1 )
      {
        v10 = (v8 & 1) == 0;
        goto LABEL_10;
      }
      if ( a1 != 1 )
      {
        if ( a1 != 2 || (v8 & 3) != 0 )
          continue;
LABEL_9:
        v12 = 0;
        memset(v11, 0, 0x68uLL);
        *(_OWORD *)&v11[1] = *(_OWORD *)(v7 + 72);
        HIDWORD(v11[0]) = *(_DWORD *)(v7 + 224) & 1;
        LODWORD(v11[11]) = *(_DWORD *)(v7 + 208);
        LODWORD(v11[12]) = *(_DWORD *)(v7 + 216);
        v11[9] = *(_QWORD *)(v7 + 192);
        HIDWORD(v11[11]) = *(_DWORD *)(v7 + 212);
        HIDWORD(v11[12]) = *(_DWORD *)(v7 + 220);
        v11[10] = *(_QWORD *)(v7 + 200);
        v11[4] = &word_140B74130;
        LODWORD(v11[3]) = 0x20000;
        *(_OWORD *)&v11[7] = *(_OWORD *)(v7 + 176);
        *(_OWORD *)&v11[5] = *(_OWORD *)(v7 + 160);
        PnpNotifyEarlyLaunchImageLoad(v11, &v12);
        LOBYTE(v9) = a1 != 1;
        result = PnpDoPolicyCheck(v12, v9);
        v10 = (_BYTE)result == 0;
LABEL_10:
        if ( !v10 )
          result = MmCallDllInitialize(v7, (__int64)v5);
        continue;
      }
      if ( (v8 & 2) != 0 )
        goto LABEL_9;
    }
  }
  return result;
}
