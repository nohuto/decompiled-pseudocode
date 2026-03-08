/*
 * XREFs of SdbpCheckUptoStringVersion @ 0x140A50900
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14066B804 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x1407A0F7C (SdbpCheckAttribute.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x1404117B8 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 */

_BOOL8 __fastcall SdbpCheckUptoStringVersion(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // ebp
  BOOL v5; // edi
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8

  v4 = 0;
  v5 = 1;
  if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
  {
    while ( *a1 )
    {
      v6 = *a2;
      if ( !*a2 )
        break;
      v7 = *a1;
      v8 = 0LL;
      v9 = 0LL;
      v4 = 0;
      if ( *a1 == 42 )
      {
        v4 = 1;
        ++a1;
      }
      else
      {
        while ( v7 >= 0x30u && v7 <= 0x39u )
        {
          ++a1;
          v8 = v7 + 2 * (5 * v8 - 24);
          v7 = *a1;
        }
      }
      while ( v6 >= 0x30u && v6 <= 0x39u )
      {
        if ( !v4 )
          v9 = v6 + 2 * (5 * v9 - 24);
        v6 = *++a2;
      }
      if ( !v4 && v8 != v9 )
      {
        v5 = v8 > v9;
        break;
      }
      if ( *a1 )
      {
        if ( *a2 && *a1 != *a2 )
        {
          v5 = 0;
          break;
        }
        ++a1;
      }
      if ( *a2 )
        ++a2;
    }
    if ( (*a1 || *a2) && (!v5 || *a1 || !v4) )
      return 0;
  }
  return v5;
}
