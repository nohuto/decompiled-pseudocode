/*
 * XREFs of ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00CF7F8
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00CF6F0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::AddElement(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // eax
  unsigned __int64 v7; // rdi
  char *Pool2; // rax
  char *v9; // r14
  __int64 v10; // rsi
  __int64 i; // rax

  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == v3 )
  {
    if ( v3 )
    {
      v7 = 2LL * *(unsigned int *)(a1 + 12);
      if ( v7 > 0xFFFFFFFF )
        return 3221225621LL;
    }
    else
    {
      LODWORD(v7) = 16;
    }
    Pool2 = (char *)ExAllocatePool2(258LL, 8LL * (unsigned int)v7);
    v9 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v10 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v10 )
      memmove(Pool2, *(const void **)a1, 8 * v10);
    if ( (unsigned int)v10 < (unsigned int)v7 )
      memset(&v9[8 * v10], 0, 8LL * (unsigned int)(v7 - v10));
    if ( *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x4D504F47u);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 12) = v7;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = a2;
      *a3 = i;
      break;
    }
  }
  ++*(_DWORD *)(a1 + 8);
  return 0LL;
}
