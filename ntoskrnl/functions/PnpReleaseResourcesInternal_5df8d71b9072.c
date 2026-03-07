__int64 __fastcall PnpReleaseResourcesInternal(_QWORD *a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // r11
  unsigned int v4; // esi
  unsigned int *v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  int v9; // ecx
  _QWORD *v10; // rax
  _QWORD *i; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 LegacyBusDeviceNode; // rax
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD v21[18]; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+D0h] [rbp+67h]
  unsigned int v23; // [rsp+D8h] [rbp+6Fh]
  unsigned int v24; // [rsp+E0h] [rbp+77h]

  memset(v21, 0, 0x60uLL);
  v2 = (unsigned int *)a1[52];
  v3 = 0LL;
  v21[1] = v21;
  LODWORD(v21[2]) = 0;
  v21[0] = v21;
  v21[4] = a1[4];
  v21[3] = 0LL;
  v21[5] = 4LL;
  v21[6] = 0LL;
  v21[9] = 0LL;
  if ( (v2 || (v2 = (unsigned int *)a1[68]) != 0LL) && (v4 = *v2) != 0 )
  {
    v5 = v2 + 1;
  }
  else
  {
    v4 = 1;
    v2 = 0LL;
    v5 = 0LL;
  }
  v23 = 0;
  do
  {
    if ( !v2 )
    {
      v7 = v3;
      v24 = v3;
LABEL_28:
      v6 = 1;
      goto LABEL_8;
    }
    v6 = *v5;
    v7 = v5[1];
    v24 = v7;
    if ( *v5 == -1 )
      goto LABEL_28;
LABEL_8:
    if ( a1 == IopRootDeviceNode )
      v8 = a1;
    else
      v8 = (_QWORD *)a1[2];
    v9 = 1;
    v22 = 1;
    while ( v8 )
    {
      if ( v8 == IopRootDeviceNode && v9 )
      {
        LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(v6, v7);
        v8 = (_QWORD *)LegacyBusDeviceNode;
        if ( LegacyBusDeviceNode == v16 && !v6 )
          v8 = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
        v22 = v3;
      }
      v10 = v8 + 61;
      for ( i = (_QWORD *)v8[61]; i != v10; i = (_QWORD *)*i )
      {
        if ( i[3] != v3 )
        {
          v22 = v3;
          v21[0] = i + 5;
          v21[1] = i + 5;
          i[5] = v21;
          i[6] = v21;
          IopCallArbiter(i, 0LL);
          IopCallArbiter(i, 2LL);
          v12 = v21[0];
          v13 = v21[1];
          if ( *(_QWORD **)(v21[0] + 8LL) != v21 || *(_QWORD **)v21[1] != v21 )
            __fastfail(3u);
          *(_QWORD *)v21[1] = v21[0];
          v3 = 0LL;
          *(_QWORD *)(v12 + 8) = v13;
          v21[1] = v21;
          v21[0] = v21;
          v10 = v8 + 61;
        }
      }
      v8 = (_QWORD *)v8[2];
      v9 = v22;
      v7 = v24;
    }
    if ( v4 > 1 )
    {
      v17 = v5[3];
      v18 = v5 + 4;
      if ( v17 )
      {
        v19 = v17;
        do
        {
          v20 = (unsigned int)v3;
          if ( *(_BYTE *)v18 == 5 )
            v20 = v18[1];
          v18 = (unsigned int *)((char *)v18 + v20 + 20);
          --v19;
        }
        while ( v19 );
      }
      v5 = v18;
    }
    ++v23;
  }
  while ( v23 < v4 );
  return IopWriteAllocatedResourcesToRegistry((__int64)a1, 0LL, 0);
}
