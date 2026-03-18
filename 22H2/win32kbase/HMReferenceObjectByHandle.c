/*
 * XREFs of HMReferenceObjectByHandle @ 0x1C004ED80
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00DE4F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMReferenceObjectByHandle(int a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // r9d^2
  unsigned int v5; // ecx
  char *v6; // rbx
  char *v7; // rsi
  __int16 v8; // r9
  __int64 v9; // rcx

  *a3 = 0LL;
  v3 = HIWORD(a1);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 3221225480LL;
  v5 = dword_1C028FE70 * (unsigned __int16)a1;
  v6 = (char *)qword_1C028FE68 + v5;
  v7 = (char *)gpKernelHandleTable + 24 * ((__int64)v5 >> 5);
  v8 = v3 & 0x7FFF;
  if ( (v3 & 0x7FFF) != *((_WORD *)v6 + 13) && v8 != 0x7FFF && (v8 || !PsGetCurrentProcessWow64Process()) )
    return 3221225480LL;
  if ( v6[24] != 1 )
    return 3221225508LL;
  if ( (v6[25] & 1) != 0 )
    return 3221225480LL;
  v9 = *(_QWORD *)v7;
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 8LL));
  *a3 = v9;
  return 0LL;
}
