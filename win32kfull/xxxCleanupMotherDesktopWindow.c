void __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx

  v1 = a1 + 8;
  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    SetVisible(*(struct tagWND **)(a1 + 8), 0);
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2);
  }
}
