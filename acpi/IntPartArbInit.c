__int64 __fastcall IntPartArbInit(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edi
  _BYTE *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r10
  unsigned __int8 v7; // r11
  __int64 v8; // r9
  unsigned int v9; // r8d
  int v10; // eax
  _BYTE *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v1 = IntpReconstructPartitionGroupFromKernel(a1, &v11);
  v2 = v1;
  if ( v1 == 259 )
    return v2;
  v3 = v11;
  if ( v1 < 0 )
    goto LABEL_5;
  v4 = (_QWORD *)IntPartAllocateAndZeroMemory((unsigned __int8)v11[2] + 8LL);
  v5 = (__int64)v4;
  if ( !v4 )
  {
    v2 = -1073741670;
LABEL_5:
    if ( v3 )
      IntPartFree(v3);
    return v2;
  }
  v7 = 1;
  for ( *v4 = v3; v7 < v3[2]; *(_BYTE *)(v8 + 8) = ((unsigned int)*(unsigned __int8 *)(v8 + 8) + v10) % v9 )
  {
    v8 = v7 + v5;
    v9 = (unsigned __int8)v3[16 * v7 + 9];
    v10 = v7++;
  }
  ProcessorpDefaultIntPartitionArtiber = v5;
  return v2;
}
