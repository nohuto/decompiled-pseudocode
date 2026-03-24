/*
 * XREFs of SeValidSecurityDescriptor @ 0x140676E80
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1402024F0 (RtlNormalizeSecurityDescriptor.c)
 *     WmipSDRegistryQueryRoutine @ 0x140676E00 (WmipSDRegistryQueryRoutine.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1406BD23C (EtwpGetGuidSecurityDescriptor.c)
 *     PiSwValidateCreateData @ 0x14074D70C (PiSwValidateCreateData.c)
 *     SepReadAndPopulateCapes @ 0x1407CDD7C (SepReadAndPopulateCapes.c)
 * Callees:
 *     RtlValidAcl @ 0x1406D5380 (RtlValidAcl.c)
 */

BOOLEAN __stdcall SeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  BOOLEAN result; // al
  unsigned int v11; // edi

  result = 0;
  if ( Length >= 0x14 && *(_BYTE *)SecurityDescriptor == 1 && *((__int16 *)SecurityDescriptor + 1) < 0 )
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v4 )
    {
      if ( ((v4 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v4
        && (unsigned int)v4 <= Length
        && Length - (unsigned int)v4 >= 0xC
        && *((_BYTE *)SecurityDescriptor + v4) == 1 )
      {
        v5 = *((unsigned __int8 *)SecurityDescriptor + v4 + 1);
        if ( (unsigned __int8)v5 <= 0xFu && Length - (unsigned int)v4 >= 4 * v5 + 8 )
        {
          v6 = *((unsigned int *)SecurityDescriptor + 2);
          if ( !(_DWORD)v6
            || ((v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v6
            && (unsigned int)v6 <= Length
            && Length - (unsigned int)v6 >= 0xC
            && *((_BYTE *)SecurityDescriptor + v6) == 1
            && (v7 = *((unsigned __int8 *)SecurityDescriptor + v6 + 1), (unsigned __int8)v7 <= 0xFu)
            && Length - (unsigned int)v6 >= 4 * v7 + 8 )
          {
            v8 = *((unsigned int *)SecurityDescriptor + 4);
            if ( !(_DWORD)v8
              || ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v8
              && (unsigned int)v8 <= Length
              && Length - (unsigned int)v8 >= 8
              && Length - (unsigned int)v8 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v8 + 2)
              && (unsigned __int8)RtlValidAcl() )
            {
              v9 = *((unsigned int *)SecurityDescriptor + 3);
              if ( !(_DWORD)v9 )
                return 1;
              if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v9 && (unsigned int)v9 <= Length )
              {
                v11 = Length - v9;
                if ( v11 >= 8
                  && v11 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v9 + 2)
                  && (unsigned __int8)RtlValidAcl() )
                {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
