__int64 __fastcall ExGetHeapFromType(int a1, unsigned int a2, int a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v4 = &qword_140C74680[1048 * (a2 < dword_140C74660 ? a2 : 0)];
  if ( a1 < 0 )
  {
    if ( a3 )
      return qword_140CF7698;
    else
      return v4[3];
  }
  else
  {
    if ( (a1 & 1) != 0 )
      v5 = 2LL;
    else
      v5 = (a1 & 0x200) != 0;
    if ( a3 )
      v4 = qword_140CF7680;
    return v4[v5];
  }
}
