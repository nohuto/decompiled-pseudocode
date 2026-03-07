__int64 __fastcall CmpCreateLayerLink(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx

  if ( *(__int16 *)(BugCheckParameter2 + 66) >= 127 )
    return 3221225485LL;
  result = ((__int64 (*)(void))CmpAllocateLayerInfoForKcb)();
  if ( (int)result >= 0 )
  {
    result = CmpAllocateLayerInfoForKcb(a2);
    if ( (int)result >= 0 )
    {
      CmpReferenceKeyControlBlock(BugCheckParameter2);
      v5 = *(_QWORD **)(a2 + 192);
      *(_WORD *)(a2 + 66) = *(_WORD *)(BugCheckParameter2 + 66) + 1;
      v6 = *(_QWORD *)(BugCheckParameter2 + 192);
      v5[3] = v6;
      v7 = v6 + 32;
      v8 = *(_QWORD **)(v7 + 8);
      if ( *v8 != v7 )
        __fastfail(3u);
      *v5 = v7;
      v5[1] = v8;
      *v8 = v5;
      *(_QWORD *)(v7 + 8) = v5;
      return 0LL;
    }
  }
  return result;
}
