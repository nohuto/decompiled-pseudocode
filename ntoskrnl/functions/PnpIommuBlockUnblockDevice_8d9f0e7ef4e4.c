__int64 __fastcall PnpIommuBlockUnblockDevice(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  if ( a2 != 16 )
    return 3221225476LL;
  PpDevNodeLockTree(1);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_QWORD *)(v6 + 720) )
    {
      v7 = PiIommuUnblockDevice(v6, *(_DWORD *)a1);
LABEL_14:
      v2 = v7;
    }
  }
  else
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = -1073741637;
      goto LABEL_16;
    }
    v8 = *(_QWORD *)(v6 + 720);
    if ( v8 )
    {
      v7 = PiIommuBlockDevice(v8);
      goto LABEL_14;
    }
  }
LABEL_16:
  PpDevNodeUnlockTree(1);
  return v2;
}
