__int64 __fastcall ACPIProcessorContainerComputeIoctlPayloadSize(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r11d
  int v11; // ecx
  PVOID P[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_QWORD *)*a1;
  *(_OWORD *)P = 0LL;
  if ( v2 == a1 )
    return 0LL;
  while ( 1 )
  {
    result = ACPIProcessorContainerComputeIoctlPayloadSize(v2 + 2, a2);
    if ( (int)result < 0 )
      break;
    v6 = 0;
    v7 = (_QWORD *)v2[4];
    while ( v7 != v2 + 4 )
    {
      v7 = (_QWORD *)*v7;
      ++v6;
    }
    v8 = v2[72];
    *a2 = ((*a2 + 3) & 0xFFFFFFFC) + 4 * v6;
    result = ACPIAmliBuildObjectPathnameUnicode(v8, (__int64)P, 1);
    if ( (int)result < 0 )
      break;
    ExFreePoolWithTag(P[1], 0);
    v9 = v2[6];
    *a2 = WORD1(P[0]) + ((*a2 + 1) & 0xFFFFFFFE);
    if ( v9 )
    {
      v13 = 0;
      v14 = 0;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v9, &v13, &v14, 0, 1);
      if ( (int)result < 0 )
        return result;
      v11 = v13 + 12;
      if ( (unsigned int)(v13 + 12) < 0x14 )
        v11 = 20;
      *a2 = v11 + ((v10 + 3) & 0xFFFFFFFC);
    }
    v2 = (_QWORD *)*v2;
    if ( v2 == a1 )
      return 0LL;
  }
  return result;
}
