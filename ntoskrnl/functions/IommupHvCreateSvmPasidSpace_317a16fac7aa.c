__int64 __fastcall IommupHvCreateSvmPasidSpace(int a1)
{
  int v1; // ebx

  v1 = 0;
  if ( !IommupHvSvmEnabled )
    return 3221225659LL;
  if ( IommupHvSvmPasidSpaceCreated )
    return a1 != IommupHvSvmDomain ? 0xC00000BB : 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommupHvGlobalPushLock, 0LL);
  if ( IommupHvSvmPasidSpaceCreated )
  {
    if ( IommupHvSvmDomain != a1 )
      v1 = -1073741637;
    goto LABEL_11;
  }
  if ( IommupHvPasidSpaceCreated )
    goto LABEL_10;
  v1 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62208)(0LL, (unsigned int)IommupHvMaximumAsids);
  if ( v1 >= 0 )
  {
    IommupHvPasidSpaceCreated = 1;
LABEL_10:
    IommupHvSvmDomain = a1;
    IommupHvSvmPasidSpaceCreated = 1;
  }
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  return (unsigned int)v1;
}
