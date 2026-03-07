__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(__int64 a1, int a2, int a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  if ( !gpqForeground || (unsigned __int8)CheckAccess(&v6, gpqForeground + 432LL) )
    return 1LL;
  if ( a2 )
    MSGLUA_GPQFOREGROUND();
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
