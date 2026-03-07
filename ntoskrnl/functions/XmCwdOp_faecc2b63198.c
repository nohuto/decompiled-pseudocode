_WORD *__fastcall XmCwdOp(__int64 a1)
{
  bool v1; // zf
  int v2; // edx

  v1 = *(_BYTE *)(a1 + 138) == 0;
  *(_QWORD *)(a1 + 88) = a1 + 32;
  if ( v1 )
  {
    v2 = (unsigned __int16)(*(__int16 *)(a1 + 24) >> 15);
    *(_DWORD *)(a1 + 120) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 3;
    v2 = *(int *)(a1 + 24) >> 31;
  }
  return XmStoreResult(a1, v2);
}
