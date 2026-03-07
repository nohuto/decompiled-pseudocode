_QWORD *__fastcall CmpRemoveLayerLinkForDiscardedKcb(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx

  result = *(_QWORD **)(a1 + 192);
  if ( result )
  {
    v3 = result[3];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      result[3] = 0LL;
      *(_WORD *)(a1 + 66) = 0;
      CmpDelayDerefKeyControlBlock(v4);
      v5 = *(_QWORD **)(a1 + 192);
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (result = (_QWORD *)v5[1], (_QWORD *)*result != v5) )
        __fastfail(3u);
      *result = v6;
      *(_QWORD *)(v6 + 8) = result;
    }
  }
  return result;
}
