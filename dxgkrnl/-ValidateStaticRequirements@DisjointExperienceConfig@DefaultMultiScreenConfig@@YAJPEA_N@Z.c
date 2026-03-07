__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  unsigned int *v3; // rdx
  NTSTATUS SoCName; // ebx
  unsigned int v5; // edi
  unsigned __int16 *v6; // rdx
  unsigned int *v7; // r9
  SIZE_T v8; // r15
  wchar_t **v9; // rdi
  unsigned int v10; // esi
  unsigned int v12[4]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR String1[264]; // [rsp+88h] [rbp-80h] BYREF

  *(_BYTE *)this = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  SoCName = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( SoCName >= 0 )
  {
    v12[0] = 0;
    v5 = (((unsigned int)(SystemInformation[3] * SystemInformation[2]) >> 20) + 256) >> 10;
    if ( (int)DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
                (DefaultMultiScreenConfig::DisjointExperienceConfig *)v12,
                v3) >= 0
      && v12[0] )
    {
      *(_BYTE *)this = 1;
    }
    if ( v5 >= 2 )
    {
      v12[0] = 0;
      SoCName = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(
                  (DefaultMultiScreenConfig::DisjointExperienceConfig *)String1,
                  v6,
                  v12,
                  v7);
      if ( SoCName >= 0 )
      {
        v8 = (int)v12[0];
        v9 = &off_1C008DD40;
        v10 = 0;
        while ( RtlCompareUnicodeStrings(String1, v8, *v9, *((int *)v9 + 2), 1u) )
        {
          ++v10;
          v9 += 2;
          if ( v10 >= 8 )
            return (unsigned int)SoCName;
        }
        *(_BYTE *)this = 1;
      }
    }
  }
  return (unsigned int)SoCName;
}
