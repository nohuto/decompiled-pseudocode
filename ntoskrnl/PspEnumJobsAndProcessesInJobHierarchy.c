__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(_QWORD *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // edi
  unsigned int v8; // r12d
  int v9; // r14d
  int v10; // r15d
  _QWORD *v12; // rbx
  int v13; // ebp
  __int64 NextChildJob; // rax
  _QWORD *v15; // r14

  v6 = a6;
  v8 = a6 & 0xFFFFFFFE;
  v9 = a3;
  v10 = a2;
  if ( (a6 & 8) != 0 )
    v8 = a6 | 1;
  v12 = Object;
  v13 = 0;
  if ( (a6 & 8) != 0 )
    v6 = a6 | 1;
  while ( 1 )
  {
    if ( (v6 & 2) == 0 )
    {
      v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, v10, v9, a4, a5, v6);
      if ( v13 < 0 )
        goto LABEL_20;
      v6 = v8;
    }
    NextChildJob = PspGetNextChildJob(v12, 0LL);
    if ( !NextChildJob )
      break;
LABEL_14:
    v12 = (_QWORD *)NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v10, v9, a4, a5, v6);
      return (unsigned int)v13;
    }
  }
  v15 = (_QWORD *)v12[161];
  if ( v12 == Object )
  {
LABEL_13:
    v9 = a3;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( (v6 & 2) != 0 )
    {
      v13 = PspCallJobHierarchyCallbacks((_DWORD)v12, a2, a3, a4, a5, v8);
      if ( v13 < 0 )
        break;
    }
    NextChildJob = PspGetNextChildJob(v15, v12);
    if ( !NextChildJob )
    {
      v12 = v15;
      v15 = (_QWORD *)v15[161];
      if ( v12 != Object )
        continue;
    }
    v10 = a2;
    goto LABEL_13;
  }
LABEL_20:
  if ( v12 )
  {
    while ( v12 != Object )
    {
      ObfDereferenceObjectWithTag(v12, 0x6E457350u);
      v12 = (_QWORD *)v12[161];
    }
  }
  return (unsigned int)v13;
}
