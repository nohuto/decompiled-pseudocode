/*
 * XREFs of PortSrbTranslateFirmwareIoctlStatusToNtStatus @ 0x1C002ACB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateFirmwareIoctlStatusToNtStatus(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  if ( a1 > 0x20 )
  {
    v9 = a1 - 64;
    if ( v9 )
    {
      v10 = v9 - 64;
      if ( !v10 )
        return 3221225535LL;
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
          return 2147483676LL;
        v13 = v12 - 1;
        if ( !v13 )
          return 3221225793LL;
        v14 = v13 - 1;
        if ( !v14 )
          return 2147483680LL;
        v15 = v14 - 1;
        if ( !v15 )
          return 3222601766LL;
        v16 = v15 - 1;
        if ( !v16 )
          return 2147483678LL;
        if ( v16 != 1 )
          return 3221225473LL;
      }
    }
    return 3221226627LL;
  }
  else if ( a1 == 32 )
  {
    return 2147483697LL;
  }
  else
  {
    result = 0LL;
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( !v3 )
          return 3221225501LL;
        v4 = v3 - 1;
        if ( !v4 )
          return 3221225485LL;
        v5 = v4 - 1;
        if ( !v5 )
          return 3221225990LL;
        v6 = v5 - 1;
        if ( !v6 )
          return 2147483653LL;
        v7 = v6 - 1;
        if ( !v7 )
          return 3221226628LL;
        v8 = v7 - 1;
        if ( !v8 )
          return 3221226629LL;
        if ( v8 == 9 )
          return 3221225666LL;
      }
      return 3221225473LL;
    }
  }
  return result;
}
