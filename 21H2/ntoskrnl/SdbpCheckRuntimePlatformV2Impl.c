/*
 * XREFs of SdbpCheckRuntimePlatformV2Impl @ 0x140965AB0
 * Callers:
 *     SdbpCheckRuntimePlatformImpl @ 0x140965A78 (SdbpCheckRuntimePlatformImpl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckRuntimePlatformV2Impl(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int v12; // eax

  v3 = 0;
  if ( a3 != -1073741824 )
  {
    v6 = 0;
    while ( ((a3 >> v6) & 0x40) == 0 )
    {
LABEL_17:
      v6 += 8;
      if ( v6 >= 24 )
        goto LABEL_20;
    }
    v7 = (a3 >> v6) & 0x3F;
    if ( v7 )
    {
      v8 = v7 - 5;
      if ( !v8 )
      {
        v12 = a2 >> 3;
        goto LABEL_11;
      }
      v9 = v8 - 4;
      if ( !v9 )
        goto LABEL_10;
      v10 = v9 - 2;
      if ( !v10 || (v11 = v10 - 1) == 0 )
      {
        v12 = a2 >> 2;
        goto LABEL_11;
      }
      if ( v11 == 1 )
      {
LABEL_10:
        v12 = a2 >> 1;
LABEL_11:
        v3 = v12 & 1;
        goto LABEL_16;
      }
    }
    else if ( (a2 & 1) != 0 )
    {
      goto LABEL_19;
    }
    v3 = 0;
LABEL_16:
    if ( v3 )
      goto LABEL_20;
    goto LABEL_17;
  }
LABEL_19:
  v3 = 1;
LABEL_20:
  *a1 = v3;
  return 1LL;
}
