/*
 * XREFs of RIMValidatePTPButtons @ 0x1C0181CDC
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C015D9D0 (RIMGetDeviceButtons.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMValidatePTPButtons(__int64 a1, unsigned int a2)
{
  int v2; // edi
  int v3; // r10d
  int v4; // r9d
  int v5; // r8d
  unsigned int v6; // ebx
  __int16 *v7; // rcx
  __int64 v8; // r11
  __int16 v9; // ax
  __int16 v10; // ax

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = -1073741668;
  if ( !a2 )
    goto LABEL_18;
  v7 = (__int16 *)(a1 + 56);
  v8 = a2;
  do
  {
    v9 = *(v7 - 28);
    if ( v9 == 13 )
    {
      if ( *v7 != 71 )
        goto LABEL_13;
      v2 = 1;
    }
    if ( v9 == 9 )
    {
      v10 = *v7;
      if ( *v7 == 1 )
        v3 = 1;
      if ( v10 == 2 )
        v4 = 1;
      if ( v10 == 3 )
        v5 = 1;
    }
LABEL_13:
    v7 += 36;
    --v8;
  }
  while ( v8 );
  if ( !v2 )
  {
LABEL_18:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 11, (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids);
    }
    return v6;
  }
  if ( !v3 )
  {
    if ( !v4 )
      goto LABEL_18;
LABEL_21:
    if ( !v5 )
      goto LABEL_18;
    return 0;
  }
  if ( v4 )
    goto LABEL_21;
  if ( v5 )
    goto LABEL_18;
  return 0;
}
