__int64 __fastcall UnlockSubMenu(__int64 a1, _QWORD *a2)
{
  if ( !a2[2] )
    return 0LL;
  RemoveParentMenu();
  *(_QWORD *)(*a2 + 16LL) = 0LL;
  return HMAssignmentUnlock(a2 + 2);
}
