/*
 * XREFs of EtwpValidateFlagExtension @ 0x1407F8470
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 * Callees:
 *     Feature_3190095162__private_IsEnabledDeviceUsage @ 0x140411798 (Feature_3190095162__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // ebx
  unsigned __int64 v4; // r9
  bool v5; // cf
  unsigned __int16 *v6; // r8
  unsigned __int16 v7; // r10
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // dx
  __int16 v10; // r9
  __int64 v11; // rax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( (unsigned int)Feature_3190095162__private_IsEnabledDeviceUsage() )
  {
    if ( BYTE2(v1) != 0xFF || (unsigned __int16)v1 < 0xB0u )
      return 3221225485LL;
    LODWORD(v4) = *a1;
    v5 = *a1 < (unsigned __int64)(unsigned __int16)v1 + 4;
  }
  else
  {
    if ( BYTE2(v1) != 0xFF || !(_WORD)v1 )
      return 3221225485LL;
    v4 = *a1;
    v5 = v4 < (unsigned __int64)(unsigned __int16)v1 + 4;
  }
  if ( v5 )
    return 3221225485LL;
  v6 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( *v6 && 4 * (unsigned __int64)*v6 <= (unsigned int)v4 - (unsigned __int16)v1 )
    {
      v7 = v6[1];
      v8 = v6 + 2;
      v9 = *v6 - 1;
      v10 = 0;
      if ( v7 )
      {
        while ( ((unsigned __int8)v8 & 1) == 0 )
        {
          if ( !v9 )
            return 3221225485LL;
          v11 = *v8;
          if ( v9 < (unsigned __int16)v11 )
            return 3221225485LL;
          v9 -= v11;
          v8 += 2 * v11;
          if ( (unsigned __int16)++v10 >= v7 )
            goto LABEL_19;
        }
        return 3221226181LL;
      }
LABEL_19:
      if ( !v9 )
        return 0LL;
    }
    return 3221225485LL;
  }
  return 3221226181LL;
}
