/*
 * XREFs of ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C00BA838
 * Callers:
 *     InitializeScripts @ 0x1C03B68E8 (InitializeScripts.c)
 * Callees:
 *     ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x1C00DD128 (-pvFindResource@@YAPEAXPEAX0HHPEAK@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall LOADSTRING(void *a1, unsigned int a2, unsigned __int16 *a3, int a4)
{
  char v6; // di
  unsigned __int16 *Resource; // rdx
  __int64 v8; // rbx
  int v9; // edi
  unsigned __int16 *v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v6 = a2;
  Resource = (unsigned __int16 *)pvFindResource(a1, (void *)0xFFFFFFFFFFFFFFFFLL, (a2 >> 4) + 1, 6, &v13);
  LODWORD(v8) = 0;
  if ( Resource )
  {
    v9 = v6 & 0xF;
    v10 = &Resource[(unsigned __int64)v13 >> 1];
    while ( Resource < v10 )
    {
      v8 = *Resource;
      v11 = v9;
      ++Resource;
      --v9;
      if ( !v11 )
        break;
      Resource += v8;
    }
    if ( a3 )
    {
      if ( Resource >= v10 )
      {
        LODWORD(v8) = 0;
      }
      else
      {
        if ( a4 - 1 <= (int)v8 )
          LODWORD(v8) = a4 - 1;
        memmove(a3, Resource, 2LL * (int)v8);
      }
      goto LABEL_12;
    }
  }
  else if ( a3 )
  {
LABEL_12:
    a3[(int)v8] = 0;
  }
  return (unsigned int)v8;
}
