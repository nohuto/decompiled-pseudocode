__int64 __fastcall KiRemoveSystemWorkPriorityKick(__int64 a1)
{
  int *v1; // r8
  int v3; // r11d
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rdx
  _DWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(int **)(a1 + 35000);
  v3 = *v1;
  result = (unsigned int)v1[5];
  if ( (*v1 & 0x280000) != 0 )
    return result;
  if ( (_DWORD)result )
    return result;
  if ( v1[7] )
    return result;
  if ( v1[8] )
    return result;
  if ( *((_QWORD *)v1 + 5) != *((_QWORD *)v1 + 6) )
    return result;
  result = *(_QWORD *)(a1 + 56);
  if ( !result || *(_BYTE *)(a1 + 33381) )
    return result;
  v5 = *(_BYTE *)result & 0x7F;
  if ( (*(_BYTE *)result & 0x7F) == 0 )
  {
    result = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 24);
    if ( result == v6 || *(_QWORD *)(a1 + 8) == v6 && !result )
      v5 = KiVpThreadSystemWorkPriority;
LABEL_13:
    if ( v5 >= 16 )
      return result;
    goto LABEL_14;
  }
  if ( v5 != 63 )
    goto LABEL_13;
  v5 = 0;
LABEL_14:
  result = (unsigned int)(unsigned __int8)v3 - 1;
  if ( (unsigned int)result <= 0x1E && (unsigned __int8)v3 > v5 && (unsigned __int8)v3 >= KiVpThreadSystemWorkPriority )
  {
    v1[3] = 3;
    if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 && !KeGetPcr()->Prcb.CombinedNmiMceActive )
    {
      *(_BYTE *)(a1 + 33381) = 1;
      v7[1] = 3;
      v7[0] = *(_DWORD *)(a1 + 36);
      v8[1] = 8LL;
      v8[0] = v7;
      EtwTraceKernelEvent((__int64)v8, 1u, 0xA0000020, 0xF75u, 0x400A02u);
      *(_BYTE *)(a1 + 33381) = 0;
    }
    return HvlpSetRegister64(589851LL, 4294967294LL);
  }
  return result;
}
