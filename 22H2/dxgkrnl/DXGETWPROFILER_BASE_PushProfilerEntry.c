/*
 * XREFs of DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0014290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *__fastcall DXGETWPROFILER_BASE_PushProfilerEntry(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct DXGTHREAD *result; // rax
  int v5; // ecx
  __int64 v6; // rax

  v2 = a2;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 336LL;
    WdLogEvent5_WdAssertion(v6);
  }
  result = (struct DXGTHREAD *)KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    result = DXGTHREAD::GetCurrent();
    *(_QWORD *)(a1 + 8) = result;
    if ( result )
    {
      v5 = *((_DWORD *)result + 9);
      if ( !v5 )
        *((_DWORD *)result + 10) = v2;
      *((_DWORD *)result + 9) = v5 + 1;
    }
  }
  return result;
}
