/*
 * XREFs of _wchartodigit @ 0x1403D8124
 * Callers:
 *     wcstoxlX @ 0x1403D60F0 (wcstoxlX.c)
 *     wcstoxq @ 0x1403D653C (wcstoxq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wchartodigit(unsigned __int16 a1)
{
  int v1; // edx

  v1 = 48;
  if ( a1 >= 0x30u )
  {
    if ( a1 < 0x3Au )
      return (unsigned int)a1 - v1;
    v1 = 65296;
    if ( a1 >= 0xFF10u )
    {
      if ( a1 < 0xFF1Au )
        return (unsigned int)a1 - v1;
    }
    else
    {
      v1 = 1632;
      if ( a1 >= 0x660u )
      {
        if ( a1 < 0x66Au )
          return (unsigned int)a1 - v1;
        v1 = 1776;
        if ( a1 >= 0x6F0u )
        {
          if ( a1 < 0x6FAu )
            return (unsigned int)a1 - v1;
          v1 = 2406;
          if ( a1 >= 0x966u )
          {
            if ( a1 < 0x970u )
              return (unsigned int)a1 - v1;
            v1 = 2534;
            if ( a1 >= 0x9E6u )
            {
              if ( a1 < 0x9F0u )
                return (unsigned int)a1 - v1;
              v1 = 2662;
              if ( a1 >= 0xA66u )
              {
                if ( a1 < 0xA70u )
                  return (unsigned int)a1 - v1;
                v1 = 2790;
                if ( a1 >= 0xAE6u )
                {
                  if ( a1 < 0xAF0u )
                    return (unsigned int)a1 - v1;
                  v1 = 2918;
                  if ( a1 >= 0xB66u )
                  {
                    if ( a1 < 0xB70u )
                      return (unsigned int)a1 - v1;
                    v1 = 3174;
                    if ( a1 >= 0xC66u )
                    {
                      if ( a1 < 0xC70u )
                        return (unsigned int)a1 - v1;
                      v1 = 3302;
                      if ( a1 >= 0xCE6u )
                      {
                        if ( a1 < 0xCF0u )
                          return (unsigned int)a1 - v1;
                        v1 = 3430;
                        if ( a1 >= 0xD66u )
                        {
                          if ( a1 < 0xD70u )
                            return (unsigned int)a1 - v1;
                          v1 = 3664;
                          if ( a1 >= 0xE50u )
                          {
                            if ( a1 < 0xE5Au )
                              return (unsigned int)a1 - v1;
                            v1 = 3792;
                            if ( a1 >= 0xED0u )
                            {
                              if ( a1 < 0xEDAu )
                                return (unsigned int)a1 - v1;
                              v1 = 3872;
                              if ( a1 >= 0xF20u )
                              {
                                if ( a1 < 0xF2Au )
                                  return (unsigned int)a1 - v1;
                                v1 = 4160;
                                if ( a1 >= 0x1040u )
                                {
                                  if ( a1 < 0x104Au )
                                    return (unsigned int)a1 - v1;
                                  v1 = 6112;
                                  if ( a1 >= 0x17E0u )
                                  {
                                    if ( a1 < 0x17EAu )
                                      return (unsigned int)a1 - v1;
                                    v1 = 6160;
                                    if ( (unsigned __int16)(a1 - 6160) <= 9u )
                                      return (unsigned int)a1 - v1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
