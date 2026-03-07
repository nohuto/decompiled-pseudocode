DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v2 )
    return (DRIVEROBJ *)(v2 + 24);
  return v1;
}
