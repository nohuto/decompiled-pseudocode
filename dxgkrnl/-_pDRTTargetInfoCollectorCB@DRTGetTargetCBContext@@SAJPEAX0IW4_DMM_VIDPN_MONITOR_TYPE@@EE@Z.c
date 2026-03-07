__int64 __fastcall DRTGetTargetCBContext::_pDRTTargetInfoCollectorCB(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  int v6; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v6 = 0;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( a3 == -1 )
    WdLogSingleEntry0(1LL);
  v10 = *(_QWORD *)a2;
  v11 = a2[2];
  if ( (unsigned int)v11 < *(_DWORD *)(*(_QWORD *)a2 + 16LL) )
  {
    v12 = 3 * v11;
    *(_DWORD *)(v10 + 4 * v12 + 20) = a3;
    LOBYTE(v6) = a5 != 0;
    *(_DWORD *)(v10 + 4 * v12 + 24) = a4;
    *(_DWORD *)(v10 + 4 * v12 + 28) = (a6 != 0 ? 2 : 0) | v6;
  }
  ++a2[2];
  return 0LL;
}
