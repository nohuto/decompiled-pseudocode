/*
 * XREFs of SeValidSecurityDescriptor @ 0x1406ACC40
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x140202D70 (RtlNormalizeSecurityDescriptor.c)
 *     WmipSDRegistryQueryRoutine @ 0x1406ACBC0 (WmipSDRegistryQueryRoutine.c)
 *     PiSwValidateCreateData @ 0x140767820 (PiSwValidateCreateData.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140797CE4 (EtwpGetGuidSecurityDescriptor.c)
 *     SepReadAndPopulateCapes @ 0x14085D7FC (SepReadAndPopulateCapes.c)
 * Callees:
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
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
