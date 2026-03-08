/*
 * XREFs of IrqPolicyGetDevicePolicy @ 0x1C009F8A4
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     OSGetRegistryValue @ 0x1C008DCAC (OSGetRegistryValue.c)
 *     IrqPolicyGetSubKey @ 0x1C009FC24 (IrqPolicyGetSubKey.c)
 *     IrqTraceAffinityPolicy @ 0x1C009FFC0 (IrqTraceAffinityPolicy.c)
 */

__int64 __fastcall IrqPolicyGetDevicePolicy(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int16 *a5,
        __int64 a6)
{
  unsigned __int64 v9; // r15
  int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  _DWORD *v13; // r8
  __int64 v14; // rdx
  int RegistryValues; // eax
  __int16 v16; // dx
  int v17; // r14d
  int v18; // eax
  int v19; // r8d
  int *v20; // rcx
  bool v21; // zf
  _BYTE *v22; // rcx
  _WORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  __int16 *v29; // [rsp+50h] [rbp-B0h]
  int *v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  _QWORD v32[36]; // [rsp+70h] [rbp-90h] BYREF

  v29 = a5;
  v31 = a6;
  v30 = a4;
  memset(v32, 0, 0x118uLL);
  v23[0] = IrqMachinePolicy;
  v24 = 0;
  v26 = 2;
  v25 = 0;
  Handle = 0LL;
  v9 = 0LL;
  LOWORD(v10) = 0;
  v11 = 0LL;
  result = IrqPolicyGetSubKey(Pdo, L"Affinity Policy", 0LL, &Handle);
  if ( (int)result < 0 )
    return result;
  P = 0LL;
  if ( OSGetRegistryValue(Handle, L"AssignmentSetOverride", &P) >= 0 )
  {
    v13 = P;
    switch ( *(_DWORD *)P )
    {
      case 3:
        LODWORD(v14) = *((_DWORD *)P + 1);
        if ( (unsigned int)(v14 - 1) <= 7 )
        {
          do
          {
            v14 = (unsigned int)(v14 - 1);
            v13[1] = v14;
            v11 = *((unsigned __int8 *)v13 + v14 + 8) | (v11 << 8);
          }
          while ( (_DWORD)v14 );
        }
        break;
      case 4:
        v11 = *((unsigned int *)P + 2);
        break;
      case 0xB:
        v11 = *((_QWORD *)P + 1);
        break;
    }
    ExFreePoolWithTag(v13, 0);
  }
  LODWORD(v32[6]) = 0;
  LODWORD(v32[4]) = 67108868;
  LODWORD(v32[1]) = 288;
  v32[2] = L"GroupOverride";
  LODWORD(v32[8]) = 288;
  v32[3] = &v24;
  LODWORD(v32[11]) = 67108868;
  v32[5] = &v24;
  v32[9] = L"DevicePolicy";
  v32[10] = v23;
  v32[12] = v23;
  v32[16] = L"DevicePriority";
  v32[17] = &v26;
  v32[19] = &v26;
  v32[23] = L"GroupPolicy";
  v32[24] = &v25;
  LODWORD(v32[15]) = 288;
  LODWORD(v32[18]) = 67108868;
  LODWORD(v32[22]) = 288;
  LODWORD(v32[25]) = 67108868;
  v32[26] = &v25;
  LODWORD(v32[13]) = 0;
  LODWORD(v32[20]) = 0;
  LODWORD(v32[27]) = 0;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v32, 0LL, 0LL);
  v16 = v23[0];
  v17 = RegistryValues;
  if ( RegistryValues >= 0 )
  {
    if ( (unsigned __int16)(v23[0] - 5) <= 1u )
    {
      v16 = 0;
      v23[0] = 0;
    }
    if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
    {
      v18 = *(_DWORD *)(a2 + 20);
      v19 = *(unsigned __int16 *)(a2 + 18);
      v11 = *(_QWORD *)(a2 + 24);
      v23[0] = *(_WORD *)(a2 + 16);
      v16 = v23[0];
      v26 = v18;
      if ( v23[0] == 4 )
      {
        v10 = v19;
        if ( v19 == 0xFFFF )
          v10 = 0;
        v24 = v10;
      }
      else
      {
        v10 = 0;
        v11 = 0LL;
        v24 = 0;
        v25 = (_WORD)v19 == 0xFFFF;
      }
    }
    else
    {
      v10 = v24;
    }
    if ( v16 == 4 )
    {
      if ( !InitSafeBootMode && v10 != 0xFFFF && v11 )
      {
        v25 = 0;
        v9 = v11;
        IrqTraceAffinityPolicy(Pdo);
        v16 = v23[0];
        goto LABEL_32;
      }
    }
    else
    {
      if ( v16 == 2 )
      {
        IrqTraceAffinityPolicy(Pdo);
        v16 = v23[0];
        LOWORD(v10) = v24;
      }
      if ( v16 )
        goto LABEL_31;
    }
    v16 = IrqMachinePolicy;
    v23[0] = IrqMachinePolicy;
LABEL_31:
    v9 = v11;
    v17 = 0;
  }
LABEL_32:
  if ( Handle )
  {
    ZwClose(Handle);
    v16 = v23[0];
  }
  if ( v17 >= 0 )
  {
    v20 = v30;
    v21 = !v25;
    *v29 = v16;
    *v20 = v26;
    v22 = (_BYTE *)v31;
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v10;
    *(_QWORD *)a3 = v9;
    *v22 = !v21;
  }
  return (unsigned int)v17;
}
