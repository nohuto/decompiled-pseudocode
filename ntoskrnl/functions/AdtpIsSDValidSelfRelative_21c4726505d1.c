__int64 __fastcall AdtpIsSDValidSelfRelative(void *a1, bool *a2)
{
  int ControlSecurityDescriptor; // ebx
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  ControlSecurityDescriptor = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !RtlValidSecurityDescriptor(a1) )
    return 3221225593LL;
  if ( a2 )
  {
    v6 = 0;
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(a1, &v6, &v7);
    if ( ControlSecurityDescriptor >= 0 )
      *a2 = v6 < 0;
  }
  return (unsigned int)ControlSecurityDescriptor;
}
