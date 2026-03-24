/*
 * XREFs of DxgkCheckGpuVirtualizationCaps @ 0x1C0217DB8
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C018B6B8 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCheckGpuVirtualizationCaps(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax

  *a3 = 0;
  if ( (a1[642] & 4) != 0 )
  {
    if ( (a1[515] & 0x400) == 0 && !(_BYTE)a2 )
    {
      v3 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v3 + 24) = 1397LL;
LABEL_5:
      WdLogEvent5_WdError(v3);
      return 3221225485LL;
    }
    if ( a1[362] )
    {
      v3 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v3 + 24) = 1402LL;
      goto LABEL_5;
    }
    *a3 = 1;
  }
  if ( (_BYTE)a2 )
  {
    if ( g_VirtualGpuOnly )
    {
      a1[642] |= 4u;
      *a3 = 1;
    }
  }
  return 0LL;
}
