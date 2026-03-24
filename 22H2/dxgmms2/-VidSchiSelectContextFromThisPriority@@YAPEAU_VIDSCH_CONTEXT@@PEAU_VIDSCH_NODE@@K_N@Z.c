/*
 * XREFs of ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000C910
 * Callers:
 *     VidSchiSelectContext @ 0x1C000B3E0 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiIsQuantumLeft @ 0x1C0014A18 (VidSchiIsQuantumLeft.c)
 *     McTemplateK0qpiixi_EtwWriteTransfer @ 0x1C002E984 (McTemplateK0qpiixi_EtwWriteTransfer.c)
 */

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
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  struct _VIDSCH_CONTEXT *result; // rax
  _QWORD *v13; // rbx
  int v14; // edx
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // [rsp+80h] [rbp+8h] BYREF
  char v21; // [rsp+88h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v20 = 0LL;
  v6 = *(_DWORD *)(v3 + 2448) & 4;
  v7 = v6 && a3;
  v8 = 2 * (a2 + 128LL);
  v9 = (_QWORD *)*((_QWORD *)a1 + 2 * a2 + 256);
  v10 = *((_QWORD *)a1 + 2 * a2 + 257) - 8LL;
  v11 = v9 - 1;
  if ( v9 - 1 == (_QWORD *)v10 )
  {
    if ( !v7 )
    {
      if ( !v6 || gulPriorityToYieldPriorityBand[*((unsigned int *)v11 + 101)] )
      {
        *((_BYTE *)v11 + 640) = 1;
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
      else
      {
        v18 = v11[12];
        v21 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v18 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          v9 - 1,
          *(unsigned int *)(*(_QWORD *)(v18 + 24) + 32LL),
          &v21);
        return (struct _VIDSCH_CONTEXT *)(v9 - 1);
      }
    }
    if ( !(unsigned int)VidSchiIsQuantumLeft(v9 - 1, &v20) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v17 = v11[7];
        if ( !v17 || (v11[14] & 0x40) != 0 )
          LODWORD(v17) = (_DWORD)v9 - 8;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v11[59],
          v17,
          v16,
          *((unsigned __int16 *)a1 + 2),
          v17,
          v11[59],
          v11[55],
          v11[58],
          v11[56]);
      }
      return 0LL;
    }
    return v20;
  }
  do
  {
    v13 = v9 - 1;
    v9 = (_QWORD *)*v9;
    if ( (unsigned int)VidSchiIsQuantumLeft(v13, &v20) )
      break;
    if ( v7 )
    {
      v4 = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v19 = v13[7];
        if ( !v19 || (v13[14] & 0x40) != 0 )
          LODWORD(v19) = (_DWORD)v13;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v19,
          v14,
          v15,
          *((unsigned __int16 *)a1 + 2),
          v19,
          v13[59],
          v13[55],
          v13[58],
          v13[56]);
      }
    }
    else
    {
      v4 = 1;
    }
  }
  while ( v13 != (_QWORD *)v10 );
  if ( !v4 )
    return v20;
  result = v20;
  if ( !v20 )
    return (struct _VIDSCH_CONTEXT *)(*((_QWORD *)a1 + v8) - 8LL);
  return result;
}
