__int64 __fastcall MiPfCompletePrefetchIos(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  unsigned int v8; // eax

  v3 = 0;
  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  while ( 1 )
  {
    v6 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v6[1] != a1 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    v7[1] = a1;
    if ( (v6[24] & 0x800000) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073740748 )
      v3 = v8;
  }
  return v3;
}
