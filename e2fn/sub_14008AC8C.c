__int64 __fastcall sub_14008AC8C(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // r9d
  __int64 v3; // rcx
  const wchar_t *v4; // rax

  result = 0LL;
  if ( a1[2] )
  {
    if ( a1[4] )
    {
      if ( a1[6] )
      {
        if ( a1[8] )
        {
          if ( a1[10] )
          {
            if ( a1[12] )
            {
              if ( a1[16] )
              {
                if ( a1[14] )
                  return result;
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v2 = 17;
                  v3 = *((_QWORD *)P + 1);
                  v4 = L"m_d0EntryFlowsFactory";
                  goto LABEL_25;
                }
              }
              else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v2 = 16;
                v3 = *((_QWORD *)P + 1);
                v4 = L"m_d0ExitFlowsFactory";
                goto LABEL_25;
              }
            }
            else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v2 = 15;
              v3 = *((_QWORD *)P + 1);
              v4 = L"m_linkFactory";
              goto LABEL_25;
            }
          }
          else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v2 = 14;
            v3 = *((_QWORD *)P + 1);
            v4 = L"m_registryTables";
            goto LABEL_25;
          }
        }
        else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v2 = 13;
          v3 = *((_QWORD *)P + 1);
          v4 = L"m_netAdapterFactory";
          goto LABEL_25;
        }
      }
      else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 = 12;
        v3 = *((_QWORD *)P + 1);
        v4 = L"m_hardwareAbstractionFactory";
        goto LABEL_25;
      }
    }
    else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v2 = 11;
      v3 = *((_QWORD *)P + 1);
      v4 = L"m_osResourcesFactory";
      goto LABEL_25;
    }
  }
  else if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v2 = 10;
    v3 = *((_QWORD *)P + 1);
    v4 = L"m_osServicesFactory";
LABEL_25:
    sub_1400A3054(*(_QWORD *)(v3 + 16), 2, 8, v2, (__int64)&unk_1400D99B8, (__int64)v4);
  }
  return 3221225485LL;
}
