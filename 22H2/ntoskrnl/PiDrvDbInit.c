/*
 * XREFs of PiDrvDbInit @ 0x140813944
 * Callers:
 *     PiPnpRtlInit @ 0x140813794 (PiPnpRtlInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140367128 (CmIsStateSeparationEnabled.c)
 *     PiDrvDbSuspendNodes @ 0x140813A3C (PiDrvDbSuspendNodes.c)
 *     PiDrvDbSetupNodes @ 0x140813B38 (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     DrvDbOpenContext @ 0x140814FC0 (DrvDbOpenContext.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1408153D0 (PiDrvDbEnumDriverStoreNodes.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int v1; // edx
  int v3; // edi
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      v1 = PiDrvDbSetupNodes(a1, 0LL);
      if ( v1 >= 0 )
        return (unsigned int)PiDrvDbSuspendNodes(0LL);
    }
  }
  else
  {
    qword_140C5B058 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext();
    if ( v1 >= 0 )
    {
      v3 = 0;
      for ( i = &qword_140008878; ; i += 4 )
      {
        LODWORD(v5) = *((_DWORD *)i - 4);
        if ( ((v5 & 4) == 0 || !CmIsStateSeparationEnabled()) && ((v5 & 0x80u) == 0LL || CmIsStateSeparationEnabled()) )
        {
          v1 = PiDrvDbRegisterNode((PCWSTR)*(i - 3), *i);
          if ( v1 < 0 )
            break;
        }
        if ( (unsigned int)++v3 >= 3 )
        {
          if ( v1 >= 0 )
          {
            v1 = PiDrvDbEnumDriverStoreNodes(v5, &v9);
            if ( v1 >= 0 )
            {
              v1 = v9;
              if ( v9 >= 0 )
              {
                LOBYTE(v6) = 1;
                v7 = PiDrvDbSuspendNodes(v6);
                v1 = v7;
                if ( v7 >= 0 )
                  return (unsigned int)PiDrvDbSetupNodes(0LL, (unsigned int)v7);
              }
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
