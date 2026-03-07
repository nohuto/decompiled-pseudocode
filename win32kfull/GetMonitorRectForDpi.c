__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned __int16 v7; // si
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned __int16 *)(v3 + 62);
  v7 = *(_WORD *)(v3 + 60);
  *(_OWORD *)a1 = *(_OWORD *)(v3 + 28);
  if ( a3 )
  {
    v9 = ExpandMonitorSpaceVertex(a3, v6, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, v7, v9, *a1);
  }
  return a1;
}
