__int64 CiSchedulerQueryCurrentTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    return KeQueryInterruptTimePrecise(&v1);
  else
    return MEMORY[0xFFFFF78000000008];
}
