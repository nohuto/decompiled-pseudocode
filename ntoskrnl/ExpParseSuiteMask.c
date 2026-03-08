/*
 * XREFs of ExpParseSuiteMask @ 0x140810B5C
 * Callers:
 *     ExGetSuiteMask @ 0x140810AB8 (ExGetSuiteMask.c)
 * Callees:
 *     <none>
 */

int __fastcall ExpParseSuiteMask(char *a1)
{
  char *v1; // r10
  int result; // eax
  unsigned __int16 *v3; // rcx
  int v4; // r8d
  int v5; // edx
  unsigned __int16 *v6; // rcx
  int v7; // r8d
  int v8; // edx
  unsigned __int16 *v9; // rcx
  int v10; // r8d
  int v11; // edx
  unsigned __int16 *v12; // rcx
  int v13; // r8d
  int v14; // edx
  unsigned __int16 *v15; // rcx
  int v16; // r8d
  int v17; // edx
  unsigned __int16 *v18; // rcx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rcx
  int v23; // r8d
  int v24; // edx
  unsigned __int16 *v25; // rcx
  int v26; // r8d
  int v27; // edx
  unsigned __int16 *v28; // rcx
  int v29; // r8d
  int v30; // edx
  unsigned __int16 *v31; // rcx
  int v32; // r8d
  int v33; // edx
  unsigned __int16 *v34; // rcx
  int v35; // r8d
  int v36; // edx
  unsigned __int16 *v37; // rcx
  int v38; // r8d
  int v39; // edx
  unsigned __int16 *v40; // rcx
  int v41; // r8d
  int v42; // edx
  unsigned __int16 *v43; // rcx
  int v44; // r8d
  int v45; // edx
  unsigned __int16 *v46; // rcx
  int v47; // r8d
  int v48; // edx
  unsigned __int16 *v49; // rcx
  int v50; // r8d
  int v51; // edx

  v1 = a1;
  for ( result = 0; *(_WORD *)v1; v1 += 2 * v21 + 2 )
  {
    v3 = (unsigned __int16 *)v1;
    do
    {
      v4 = *(unsigned __int16 *)((char *)v3 + (char *)L"Small Business" - v1);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( v5 )
    {
      v6 = (unsigned __int16 *)v1;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v6 + (char *)L"Small Business(Restricted)" - v1);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( v8 )
      {
        v9 = (unsigned __int16 *)v1;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v9 + (char *)L"Enterprise" - v1);
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        if ( v11 )
        {
          v12 = (unsigned __int16 *)v1;
          do
          {
            v13 = *(unsigned __int16 *)((char *)v12 + (char *)L"CommunicationServer" - v1);
            v14 = *v12 - v13;
            if ( v14 )
              break;
            ++v12;
          }
          while ( v13 );
          if ( v14 )
          {
            v15 = (unsigned __int16 *)v1;
            do
            {
              v16 = *(unsigned __int16 *)((char *)v15 + (char *)L"BackOffice" - v1);
              v17 = *v15 - v16;
              if ( v17 )
                break;
              ++v15;
            }
            while ( v16 );
            if ( v17 )
            {
              v18 = (unsigned __int16 *)v1;
              do
              {
                v19 = *(unsigned __int16 *)((char *)v18 + (char *)L"Terminal Server" - v1);
                v20 = *v18 - v19;
                if ( v20 )
                  break;
                ++v18;
              }
              while ( v19 );
              if ( v20 )
              {
                v22 = (unsigned __int16 *)v1;
                do
                {
                  v23 = *(unsigned __int16 *)((char *)v22 + (char *)L"EmbeddedNT" - v1);
                  v24 = *v22 - v23;
                  if ( v24 )
                    break;
                  ++v22;
                }
                while ( v23 );
                if ( v24 )
                {
                  v25 = (unsigned __int16 *)v1;
                  do
                  {
                    v26 = *(unsigned __int16 *)((char *)v25 + (char *)L"DataCenter" - v1);
                    v27 = *v25 - v26;
                    if ( v27 )
                      break;
                    ++v25;
                  }
                  while ( v26 );
                  if ( v27 )
                  {
                    v28 = (unsigned __int16 *)v1;
                    do
                    {
                      v29 = *(unsigned __int16 *)((char *)v28 + (char *)L"Personal" - v1);
                      v30 = *v28 - v29;
                      if ( v30 )
                        break;
                      ++v28;
                    }
                    while ( v29 );
                    if ( v30 )
                    {
                      v31 = (unsigned __int16 *)v1;
                      do
                      {
                        v32 = *(unsigned __int16 *)((char *)v31 + (char *)L"Blade" - v1);
                        v33 = *v31 - v32;
                        if ( v33 )
                          break;
                        ++v31;
                      }
                      while ( v32 );
                      if ( v33 )
                      {
                        v34 = (unsigned __int16 *)v1;
                        do
                        {
                          v35 = *(unsigned __int16 *)((char *)v34 + (char *)L"Embedded(Restricted)" - v1);
                          v36 = *v34 - v35;
                          if ( v36 )
                            break;
                          ++v34;
                        }
                        while ( v35 );
                        if ( v36 )
                        {
                          v37 = (unsigned __int16 *)v1;
                          do
                          {
                            v38 = *(unsigned __int16 *)((char *)v37 + (char *)L"Security Appliance" - v1);
                            v39 = *v37 - v38;
                            if ( v39 )
                              break;
                            ++v37;
                          }
                          while ( v38 );
                          if ( v39 )
                          {
                            v40 = (unsigned __int16 *)v1;
                            do
                            {
                              v41 = *(unsigned __int16 *)((char *)v40 + (char *)L"Storage Server" - v1);
                              v42 = *v40 - v41;
                              if ( v42 )
                                break;
                              ++v40;
                            }
                            while ( v41 );
                            if ( v42 )
                            {
                              v43 = (unsigned __int16 *)v1;
                              do
                              {
                                v44 = *(unsigned __int16 *)((char *)v43 + (char *)L"Compute Server" - v1);
                                v45 = *v43 - v44;
                                if ( v45 )
                                  break;
                                ++v43;
                              }
                              while ( v44 );
                              if ( v45 )
                              {
                                v46 = (unsigned __int16 *)v1;
                                do
                                {
                                  v47 = *(unsigned __int16 *)((char *)v46 + (char *)L"WH Server" - v1);
                                  v48 = *v46 - v47;
                                  if ( v48 )
                                    break;
                                  ++v46;
                                }
                                while ( v47 );
                                if ( v48 )
                                {
                                  v49 = (unsigned __int16 *)v1;
                                  do
                                  {
                                    v50 = *(unsigned __int16 *)((char *)v49 + (char *)L"PhoneNT" - v1);
                                    v51 = *v49 - v50;
                                    if ( v51 )
                                      break;
                                    ++v49;
                                  }
                                  while ( v50 );
                                  if ( !v51 )
                                    result |= 0x10000u;
                                }
                                else
                                {
                                  result |= 0x8000u;
                                }
                              }
                              else
                              {
                                result |= 0x4000u;
                              }
                            }
                            else
                            {
                              result |= 0x2000u;
                            }
                          }
                          else
                          {
                            result |= 0x1000u;
                          }
                        }
                        else
                        {
                          result |= 0x800u;
                        }
                      }
                      else
                      {
                        result |= 0x400u;
                      }
                    }
                    else
                    {
                      result |= 0x200u;
                    }
                  }
                  else
                  {
                    result |= 0x80u;
                  }
                }
                else
                {
                  result |= 0x40u;
                }
              }
              else
              {
                result |= 0x10u;
              }
            }
            else
            {
              result |= 4u;
            }
          }
          else
          {
            result |= 8u;
          }
        }
        else
        {
          result |= 2u;
        }
      }
      else
      {
        result |= 0x20u;
      }
    }
    else
    {
      result |= 1u;
    }
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)&v1[2 * v21] );
  }
  return result;
}
