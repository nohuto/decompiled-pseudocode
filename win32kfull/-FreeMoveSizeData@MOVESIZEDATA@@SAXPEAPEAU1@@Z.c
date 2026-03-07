void __fastcall MOVESIZEDATA::FreeMoveSizeData(struct MOVESIZEDATA **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx

  v2 = *(_QWORD **)(gptiCurrent + 672LL);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 672LL) + 16LL);
  Win32FreePool(*(void **)(gptiCurrent + 672LL));
  *(_QWORD *)(gptiCurrent + 672LL) = 0LL;
  *a1 = 0LL;
}
