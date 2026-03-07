__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(IaLpssCmdStatus, *a1);
  return 0LL;
}
