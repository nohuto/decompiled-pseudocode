char __fastcall CWatermarkStack<CBspNode *,64,2,10>::Pop(int *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v5; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0;
  v5 = (unsigned int)(v3 - 1);
  *a1 = v5;
  if ( a2 )
    *a2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v5);
  return 1;
}
