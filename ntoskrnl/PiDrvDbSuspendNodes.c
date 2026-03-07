__int64 __fastcall PiDrvDbSuspendNodes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // di
  int v5; // edx

  v3 = PiDrvDbNodeList;
  v4 = a1;
  v5 = 0;
  while ( (__int64 *)v3 != &PiDrvDbNodeList )
  {
    if ( (*(_DWORD *)(v3 + 64) & 2) == 0 )
    {
      LOBYTE(a3) = v4;
      v5 = DrvDbSuspendDatabase(a1, *(_QWORD *)(v3 + 24), a3);
      if ( v5 < 0 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  return (unsigned int)v5;
}
