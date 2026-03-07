_QWORD *__fastcall CCursorState::FindMonitorData(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 i; // r10

  v4 = *(_QWORD *)(a1 + 80);
  for ( i = *(_QWORD *)(a1 + 88); v4 != i; v4 += 144LL )
  {
    if ( *(_DWORD *)v4 == (_DWORD)a3 && *(_QWORD *)(v4 + 4) == __PAIR64__(a4, HIDWORD(a3)) )
      break;
  }
  *a2 = v4;
  return a2;
}
