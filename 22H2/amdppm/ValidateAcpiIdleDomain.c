/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C002AE48
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C002A0EC (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C00096C8 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00097B8 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, __int64 i)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  unsigned int *v5; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]

  v2 = *a1;
  v3 = 0;
  v4 = 0;
  v5 = (unsigned int *)i;
  while ( 1 )
  {
    if ( v4 >= v2 )
      return v3;
    if ( a1[6 * v4 + 1] != 6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 20;
      goto LABEL_25;
    }
    if ( a1[6 * v4 + 4] != 254 )
      break;
    v7 = a1[6 * v4 + 5];
    if ( v7 > 0x500 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 22;
LABEL_25:
      WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, 0LL, v9, v11);
      return (unsigned int)-1073741823;
    }
    if ( !v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 23;
        goto LABEL_25;
      }
      return (unsigned int)-1073741823;
    }
    v8 = *v5;
    if ( a1[6 * v4 + 6] >= (unsigned int)v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, 0LL, (__int64)a1, v11);
      return (unsigned int)-1073741823;
    }
    for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
    {
      if ( v4 != (_DWORD)i && a1[6 * v4 + 6] == a1[6 * (unsigned int)i + 6] )
        return (unsigned int)-1073741637;
    }
    ++v4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, 0LL, 0x15u, v11);
  return (unsigned int)-1073741637;
}
