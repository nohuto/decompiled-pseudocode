void __fastcall lambda_a958981e61cb814173376795bd306db4_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  GreAcquireSemaphore(a2);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8624LL) == a3 )
    GreSetPointer(0LL, 0, 0, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
