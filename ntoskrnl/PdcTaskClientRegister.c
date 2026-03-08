/*
 * XREFs of PdcTaskClientRegister @ 0x14080F930
 * Callers:
 *     PopDiagInitialize @ 0x140B442C4 (PopDiagInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140B46CF0 (PopUserShutdownScenarioInitialize.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PdcPortOpenCommon @ 0x140852DF8 (PdcPortOpenCommon.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PdcTaskClientRegister(int a1, _QWORD *a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 64LL, 1667458128LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x40uLL);
    v11 = 0LL;
    *v5 = 1667458128;
    v5[8] = a1;
    v6 = PdcPortOpenCommon(a1, 4, (int)v5, (int)&v11, v8, v9, 0LL, v10, (__int64)(v5 + 10));
    if ( v6 )
      ExFreePoolWithTag(v5, 0);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
