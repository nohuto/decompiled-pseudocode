/*
 * XREFs of KdpSanitizeContextFlags @ 0x140AAE938
 * Callers:
 *     KdpSetContextEx @ 0x140392008 (KdpSetContextEx.c)
 *     KdpSetContext @ 0x140AB1BA8 (KdpSetContext.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall KdpSanitizeContextFlags(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // edi
  int *v4; // r9
  struct _KPRCB *result; // rax
  unsigned int v7; // r11d
  int v8; // edx
  int v9; // ecx
  int v10; // r11d
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // r10d
  int v14; // edx
  int v15; // ecx
  signed int v16; // r10d
  int v17; // r11d
  int v18; // ecx
  int v19; // edx

  v3 = a1[12];
  v4 = a1 + 308;
  result = KeGetCurrentPrcb();
  *a3 = v3 & 0x10001F;
  if ( (v3 & result->ContextFlagsInit & 0x100040) == 0x100040 )
  {
    v7 = a1[309];
    if ( a2 < v7 )
      return result;
    v8 = *v4;
    v9 = a1[310];
    if ( *v4 > v9 )
      return result;
    v10 = v8 + v7;
    result = (struct _KPRCB *)(unsigned int)(v9 + v4[3]);
    if ( (int)result > v10 )
      return result;
    if ( v9 > (int)result )
      return result;
    v11 = v4[4];
    if ( v8 > v11 )
      return result;
    v12 = v11 + v4[5];
    if ( v12 > v10 || v11 > v12 )
      return result;
    *a3 = v3 & 0x1F | 0x100040;
  }
  result = KeGetCurrentPrcb();
  if ( (v3 & result->ContextFlagsInit & 0x100080) == 0x100080 )
  {
    v13 = v4[1];
    if ( a2 >= v13 )
    {
      v14 = *v4;
      v15 = v4[2];
      if ( *v4 <= v15 )
      {
        v16 = v14 + v13;
        v17 = v15 + v4[3];
        if ( v17 <= v16 && v15 <= v17 )
        {
          v18 = v4[6];
          if ( v14 <= v18 )
          {
            v19 = v18 + v4[7];
            if ( v19 <= v16 && v18 <= v19 )
              *a3 |= 0x100080u;
          }
        }
      }
    }
  }
  return result;
}
