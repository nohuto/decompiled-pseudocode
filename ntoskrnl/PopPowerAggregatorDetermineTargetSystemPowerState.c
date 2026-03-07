__int64 __fastcall PopPowerAggregatorDetermineTargetSystemPowerState(int a1, char a2, int *a3)
{
  _DWORD *v6; // r10
  int v7; // r9d
  unsigned int v8; // r8d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  bool v12; // zf
  _BYTE v14[80]; // [rsp+20h] [rbp-58h] BYREF

  memset(v14, 0, 0x4CuLL);
  PopFilterCapabilities(&PopCapabilities, (__int64)v14);
  v6 = PopPolicy;
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          switch ( v7 )
          {
            case 1:
LABEL_25:
              *a3 = v7;
              return v8;
            case 2:
            case 3:
            case 4:
              if ( v14[3] != (_BYTE)v8 || v14[4] != (_BYTE)v8 || v14[5] != (_BYTE)v8 )
              {
                if ( !a2 )
                  goto LABEL_25;
                v12 = v6[15] == v8;
                goto LABEL_29;
              }
              break;
            case 5:
              if ( PopIsHibernateSupported(v14) )
              {
                if ( !a2 )
                  goto LABEL_25;
                v12 = v6[22] == v8;
LABEL_29:
                if ( !v12 )
                  goto LABEL_25;
                goto LABEL_9;
              }
              break;
            case 6:
              goto LABEL_25;
          }
          if ( !a2 )
            return (unsigned int)-1073741637;
LABEL_9:
          if ( !a1 )
            break;
          v7 = 1;
        }
        if ( v7 )
          break;
        v7 = 4;
      }
      v9 = v7 - 2;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
            break;
        }
      }
      v7 = 5;
    }
    if ( v11 != 1 )
      return (unsigned int)-1073741811;
    v7 = PopPromoteHibernateToShutdown != 0 ? 6 : 1;
  }
}
