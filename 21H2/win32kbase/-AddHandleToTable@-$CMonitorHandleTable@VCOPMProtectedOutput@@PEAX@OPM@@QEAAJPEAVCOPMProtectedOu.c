/*
 * XREFs of ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C00BFEAC
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00BFDA0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::AddHandleToTable(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  __int64 v8; // rax
  char v9; // cl
  unsigned __int64 v11; // rdi
  _QWORD *PoolWithTag; // rsi
  unsigned int v13; // edx
  __int64 i; // r8

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v11 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v11 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v11) = 16;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v11, 0x4D504F47u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v13 = *(_DWORD *)(a1 + 12);
    for ( i = 0LL; (unsigned int)i < v13; v13 = *(_DWORD *)(a1 + 12) )
    {
      PoolWithTag[i] = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      i = (unsigned int)(i + 1);
    }
    if ( v13 < (unsigned int)v11 )
      memset(&PoolWithTag[v13], 0, 8LL * ((unsigned int)v11 - v13));
    if ( *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
    *(_QWORD *)a1 = PoolWithTag;
    *(_DWORD *)(a1 + 12) = v11;
  }
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 12) )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v8) )
    {
      v9 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = a2;
      v4 = v8;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  while ( !v9 );
  ++*(_DWORD *)(a1 + 8);
  *a3 = v4;
  return 0LL;
}
