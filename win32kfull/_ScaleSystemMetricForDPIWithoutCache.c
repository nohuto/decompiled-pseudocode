__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, __int64 a2)
{
  unsigned int v2; // esi
  int v4; // ebp
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax
  INT v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  INT DpiDependentMetric; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // edi
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  __int64 v36; // rcx
  __int64 DPIMETRICSForDpi; // rax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax

  v2 = a2;
  if ( (unsigned int)a1 <= 0x1D )
  {
    v4 = 0;
    if ( (int)a2 > 0 )
    {
      if ( a1 <= 16 )
      {
        if ( a1 != 16 )
        {
          v5 = a1 - 2;
          if ( v5 )
          {
            v6 = v5 - 5;
            if ( !v6 || (v7 = v6 - 1) == 0 )
            {
              if ( (unsigned int)a2 >= 0x90 )
              {
                if ( (unsigned int)a2 >= 0xC0 )
                {
                  if ( (unsigned int)a2 >= 0x120 )
                    v4 = 4 - ((unsigned int)a2 < 0x180);
                  else
                    v4 = 2;
                }
                else
                {
                  v4 = 1;
                }
              }
              return (unsigned int)GetCursorSizeFromIndex(v4);
            }
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( (unsigned int)(v8 - 5) <= 1 )
              {
                v9 = Get96DpiServerInfo();
                return (unsigned int)(EngMulDiv(*(_DWORD *)(v9 + 4), v2, 96) + 3);
              }
              goto LABEL_27;
            }
            v11 = 26LL;
          }
          else
          {
            v11 = 13LL;
          }
LABEL_12:
          v12 = ScaleSystemMetricForDPIWithoutCache(v11, a2);
          v13 = 1;
          return (unsigned int)(v12 + v13);
        }
        v15 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi(a2) + 16);
        v16 = ScaleSystemMetricForDPIWithoutCache(29LL, v2) + v15;
        v17 = 2 * (ScaleSystemMetricForDPIWithoutCache(14LL, v2) + v16);
        v18 = ScaleSystemMetricForDPIWithoutCache(12LL, v2);
        v19 = 13LL;
        v13 = v18 + 4 + v17 + 2 * v18;
LABEL_72:
        v12 = ScaleSystemMetricForDPIWithoutCache(v19, v2);
        return (unsigned int)(v12 + v13);
      }
      v20 = a1 - 17;
      if ( !v20 )
      {
        v45 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
        v46 = ScaleSystemMetricForDPIWithoutCache(15LL, v2);
        v19 = 2LL;
        v13 = 2 * (v46 + v45);
        goto LABEL_72;
      }
      v21 = v20 - 3;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( (unsigned int)(v23 - 5) < 2 )
            {
              DPIMETRICSForDpi = GetDPIMETRICSForDpi();
              return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                                  - 1);
            }
LABEL_27:
            DpiDependentMetric = GetDpiDependentMetric(a1, 96);
            v10 = EngMulDiv(DpiDependentMetric, v2, 96);
            if ( a1 <= 13 )
            {
              if ( a1 != 13 )
              {
                if ( a1 )
                {
                  v25 = a1 - 1;
                  if ( v25 )
                  {
                    v26 = v25 - 2;
                    if ( v26 )
                    {
                      v27 = v26 - 1;
                      if ( v27 )
                      {
                        v28 = v27 - 6;
                        if ( v28 )
                        {
                          if ( (unsigned int)(v28 - 1) > 1 )
                            return (unsigned int)v10;
                        }
                      }
                    }
                  }
                }
                goto LABEL_35;
              }
              if ( v10 > *(_DWORD *)(GetDPIServerInfoForDpi(v2) + 20) + 2 )
                return (unsigned int)v10;
              v29 = *(_DWORD *)(GetDPIServerInfoForDpi(v2) + 20);
              return (unsigned int)(v29 + 2);
            }
            v30 = a1 - 18;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                v32 = v31 - 4;
                if ( v32 )
                {
                  v33 = v32 - 1;
                  if ( !v33 )
                  {
                    if ( v10 > *(_DWORD *)(GetDPIMETRICSForDpi() + 44) + 2 )
                      return (unsigned int)v10;
                    v29 = *(_DWORD *)(GetDPIMETRICSForDpi() + 44);
                    return (unsigned int)(v29 + 2);
                  }
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    v35 = v34 - 1;
                    if ( v35 )
                    {
                      if ( v35 == 3 )
                      {
                        if ( v10 >= 100 )
                        {
                          return 100;
                        }
                        else if ( v10 <= 0 )
                        {
                          return 0;
                        }
                      }
                    }
                    else if ( v10 <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
                    {
                      return *(unsigned int *)(GetDPIMETRICSForDpi() + 28);
                    }
                    return (unsigned int)v10;
                  }
                }
LABEL_35:
                if ( v10 <= 8 )
                  return 8;
                return (unsigned int)v10;
              }
              if ( v10 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v2) )
                return (unsigned int)v10;
              v36 = 6LL;
            }
            else
            {
              if ( v10 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v2) )
                return (unsigned int)v10;
              v36 = 5LL;
            }
            return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v36, v2);
          }
          v11 = 24LL;
          goto LABEL_12;
        }
        v38 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
        v39 = ScaleSystemMetricForDPIWithoutCache(6LL, v2);
        v40 = v2;
        if ( v38 < v39 / 2 )
        {
          v41 = 13LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v41, v40) - 2);
        }
        v42 = 6LL;
      }
      else
      {
        v43 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
        v44 = ScaleSystemMetricForDPIWithoutCache(5LL, v2);
        v40 = v2;
        if ( v43 < v44 / 2 )
        {
          v41 = 12LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v41, v40) - 2);
        }
        v42 = 5LL;
      }
      return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v42, v40) / 2);
    }
  }
  UserSetLastError(87);
  return 0LL;
}
