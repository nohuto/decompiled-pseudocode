__int64 __fastcall CleanUpDHI(HSEMAPHORE *pv)
{
  HSEMAPHORE v2; // rcx
  HSEMAPHORE v3; // rbp
  HSEMAPHORE v4; // rcx
  int v5; // edi
  PVOID *v6; // rsi

  EngAcquireSemaphore(pv[6]);
  v2 = pv[27];
  v3 = pv[6];
  if ( v2 && ((_BYTE)pv[25] & 1) == 0 )
    EngFreeMem(v2);
  v4 = pv[888];
  if ( v4 )
    EngFreeMem(v4);
  v5 = 2;
  v6 = (PVOID *)(pv + 113);
  do
  {
    v6 -= 3;
    --v5;
    if ( *v6 )
      EngFreeMem(*v6);
  }
  while ( v5 );
  EngFreeMem(pv);
  EngReleaseSemaphore(v3);
  EngDeleteSemaphore(v3);
  return 1LL;
}
