void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v2; // rax
  struct tagNOTIFY **v3; // rcx

  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  v2 = *a1;
  if ( (*a1)[1] != (struct tagNOTIFY *)a1 || (v3 = a1[1], *v3 != (struct tagNOTIFY *)a1) )
    __fastfail(3u);
  *v3 = (struct tagNOTIFY *)v2;
  v2[1] = (struct tagNOTIFY *)v3;
  a1[1] = (struct tagNOTIFY **)a1;
  *a1 = (struct tagNOTIFY **)a1;
  if ( !*((_DWORD *)a1 + 6) )
    HMAssignmentUnlock(a1 + 2);
  if ( a1 == (struct tagNOTIFY ***)&unk_1C03621B0 )
    dword_1C0361138 = 0;
  else
    Win32FreePool(a1);
}
