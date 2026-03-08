/*
 * XREFs of PopQueryMostRecentWakeSourceAttributes @ 0x140984574
 * Callers:
 *     PopPotsLogPowerTransitionReliability @ 0x14099DA40 (PopPotsLogPowerTransitionReliability.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x14058C140 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058C3B8 (PopWakeInfoDereference.c)
 */

void __fastcall PopQueryMostRecentWakeSourceAttributes(_DWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 MostRecentWakeInfo; // rax
  bool v9; // zf
  __int64 *i; // rcx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx

  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  if ( MostRecentWakeInfo )
  {
    v9 = *(_DWORD *)(MostRecentWakeInfo + 40) == 0;
    *a4 = *(_DWORD *)(MostRecentWakeInfo + 84);
    if ( v9 )
    {
      *a1 |= 0x4000000u;
    }
    else
    {
      for ( i = *(__int64 **)(MostRecentWakeInfo + 24); i != (__int64 *)(MostRecentWakeInfo + 24); i = (__int64 *)*i )
      {
        v11 = *((_DWORD *)i + 4);
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                {
                  v15 = *((_DWORD *)i + 6);
                  if ( v15 )
                  {
                    v16 = v15 - 1;
                    if ( v16 )
                    {
                      if ( v16 == 1 )
                        *a1 |= 0x2000000u;
                    }
                    else
                    {
                      *a1 |= 0x100000u;
                    }
                  }
                  else
                  {
                    *a1 |= 0x10000u;
                  }
                }
              }
              else
              {
                *a1 |= 0x40000u;
              }
            }
            else
            {
              *a1 |= 0x2000u;
            }
          }
          else if ( *((_DWORD *)i + 6) == 1 || *((_DWORD *)i + 6) == 2 )
          {
            *a1 |= 0x800u;
          }
        }
        else
        {
          *a1 |= 0x1000u;
          if ( a2 && a3 )
          {
            *a2 = i + 12;
            *a3 = i + 5;
          }
        }
      }
    }
    PopWakeInfoDereference(MostRecentWakeInfo);
  }
  else
  {
    *a1 |= 0x4000000u;
  }
}
