/*
 * XREFs of DmrCheckPathMatch @ 0x14037C1AC
 * Callers:
 *     DmrFindDrhdForDeviceScope @ 0x14037BC80 (DmrFindDrhdForDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x14037BD30 (DmrEnumerateRmrrDomains.c)
 *     DmrValidateDeviceScope @ 0x14037BE8C (DmrValidateDeviceScope.c)
 * Callees:
 *     <none>
 */

char __fastcall DmrCheckPathMatch(char *a1, char *a2)
{
  char v2; // bl
  char v3; // r9
  char v6; // r11
  bool v7; // al
  unsigned int v8; // edx
  unsigned int v9; // ecx
  bool v10; // cf
  unsigned int v11; // r11d
  _BYTE *v12; // rcx
  __int64 v13; // r8

  v2 = *a1;
  v3 = 0;
  if ( (unsigned __int8)(*a1 - 1) <= 1u )
  {
    v6 = *a2;
    if ( (unsigned __int8)(*a2 - 1) <= 1u && a1[5] == a2[5] )
    {
      v7 = 0;
      if ( v2 == 1 )
        v7 = v6 == 1;
      v8 = ((unsigned int)(unsigned __int8)a1[1] - 6) >> 1;
      v9 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( !v7 || v8 == v9 )
      {
        v10 = v9 < v8;
        if ( v9 > v8 )
        {
          if ( v2 == 1 && v6 == 2 )
            return v3;
          v10 = v9 < v8;
        }
        if ( !v10 || v6 != 1 || v2 != 2 )
        {
          v11 = 0;
          if ( v8 >= v9 )
            v8 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
          if ( v8 )
          {
            v12 = a2 + 6;
            v13 = a1 - a2;
            while ( v12[v13] == *v12 && v12[v13 + 1] == v12[1] )
            {
              ++v11;
              v12 += 2;
              if ( v11 >= v8 )
                return 1;
            }
          }
          else
          {
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
