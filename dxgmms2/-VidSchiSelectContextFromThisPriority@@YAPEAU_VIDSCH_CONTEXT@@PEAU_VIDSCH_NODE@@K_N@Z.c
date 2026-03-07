struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  char v4; // r12
  int v6; // eax
  bool v7; // di
  __int64 v8; // r15
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _VIDSCH_CONTEXT *v17; // [rsp+80h] [rbp+8h] BYREF
  char v18; // [rsp+88h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v17 = 0LL;
  v6 = *(_DWORD *)(v3 + 2536) & 4;
  v7 = v6 && a3;
  v8 = 2LL * a2;
  v9 = (_QWORD *)*((_QWORD *)a1 + 2 * a2 + 257);
  v10 = v9 - 1;
  v11 = *((_QWORD *)a1 + 2 * a2 + 258) - 8LL;
  if ( v9 - 1 == (_QWORD *)v11 )
  {
    if ( !v7 )
    {
      if ( !v6 || gulPriorityToYieldPriorityBand[*((unsigned int *)v10 + 101)] )
      {
        *((_BYTE *)v10 + 640) = 1;
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
      else
      {
        v15 = v10[12];
        v18 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v15 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          v9 - 1,
          *(unsigned int *)(*(_QWORD *)(v15 + 24) + 32LL),
          &v18);
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
    }
    if ( !(unsigned int)VidSchiIsQuantumLeft((__int64)(v9 - 1), &v17) )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        v14 = v10[7];
        if ( !v14 || (v10[14] & 0x40) != 0 )
          LODWORD(v14) = (_DWORD)v9 - 8;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v14,
          v10[56],
          v10[58],
          *((unsigned __int16 *)a1 + 2),
          v14,
          v10[59],
          v10[55],
          v10[58],
          v10[56]);
      }
      return 0LL;
    }
    return v17;
  }
  do
  {
    v13 = (__int64)(v9 - 1);
    v9 = (_QWORD *)*v9;
    if ( (unsigned int)VidSchiIsQuantumLeft(v13, &v17) )
      break;
    if ( v7 )
    {
      v4 = 0;
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        v16 = *(_QWORD *)(v13 + 56);
        if ( !v16 || (*(_DWORD *)(v13 + 112) & 0x40) != 0 )
          LODWORD(v16) = v13;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v16,
          *(_QWORD *)(v13 + 448),
          *(_QWORD *)(v13 + 464),
          *((unsigned __int16 *)a1 + 2),
          v16,
          *(_QWORD *)(v13 + 472),
          *(_QWORD *)(v13 + 440),
          *(_QWORD *)(v13 + 464),
          *(_QWORD *)(v13 + 448));
      }
    }
    else
    {
      v4 = 1;
    }
  }
  while ( v13 != v11 );
  if ( !v4 )
    return v17;
  result = v17;
  if ( !v17 )
    return (struct _VIDSCH_CONTEXT *)(*((_QWORD *)a1 + v8 + 257) - 8LL);
  return result;
}
