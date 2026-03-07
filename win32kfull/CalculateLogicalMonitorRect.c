__int64 *__fastcall CalculateLogicalMonitorRect(
        __int64 *a1,
        _OWORD *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  __int64 v9; // rax

  *(_OWORD *)a1 = *a2;
  if ( a4 )
  {
    v9 = ExpandMonitorSpaceVertex(a4, a5, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a4, a3, v9, *a1);
  }
  return a1;
}
