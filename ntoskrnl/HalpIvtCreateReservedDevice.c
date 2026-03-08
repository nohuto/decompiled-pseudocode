/*
 * XREFs of HalpIvtCreateReservedDevice @ 0x14037C6C0
 * Callers:
 *     IvtEnumerateRmrrDevices @ 0x14037C620 (IvtEnumerateRmrrDevices.c)
 * Callees:
 *     DmrConvertDeviceScope @ 0x14037C78C (DmrConvertDeviceScope.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 */

__int64 __fastcall HalpIvtCreateReservedDevice(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rsi
  _QWORD *v4; // rax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // r9
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v2 = (_QWORD **)(a2 + 16);
  v4 = *(_QWORD **)(a2 + 16);
  v5 = 0;
  while ( v4 != v2 )
  {
    v4 = (_QWORD *)*v4;
    ++v5;
  }
  v14 = 0LL;
  v6 = ExtEnvAllocateMemory(a1, (unsigned int)(24 * v5 + 32), &v14);
  v8 = v14;
  if ( v6 >= 0 )
    *(_DWORD *)(v14 + 24) = v5;
  if ( v8 )
  {
    v9 = *v2;
    v10 = 0LL;
    while ( v9 != v2 )
    {
      v11 = v9;
      v9 = (_QWORD *)*v9;
      if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 24) )
        goto LABEL_13;
      v7 = 3 * v10;
      *(_QWORD *)(v8 + 8 * v7 + 32) = v11[2];
      v10 = (unsigned int)(v10 + 1);
      *(_QWORD *)(v8 + 8 * v7 + 40) = v11[3];
    }
    v12 = DmrConvertDeviceScope(*(unsigned __int16 *)(a2 + 32), a2 + 34, v10);
    *(_QWORD *)v8 = v12;
    if ( v12 )
      return v8;
LABEL_13:
    if ( *(_QWORD *)v8 )
    {
      ExtEnvFreeMemory(v7, *(_QWORD *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    ExtEnvFreeMemory(v7, v8);
    return 0LL;
  }
  return v8;
}
