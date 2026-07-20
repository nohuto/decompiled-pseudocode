/*
 * XREFs of InitializeWow64OnBoot @ 0x14000BC80
 * Callers:
 *     SmpInit @ 0x140006E54 (SmpInit.c)
 * Callees:
 *     CreateRegistryLinksForMachine @ 0x14000D360 (CreateRegistryLinksForMachine.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x140011B5B (__chkstk_0.c)
 */

__int64 InitializeWow64OnBoot()
{
  int RegistryLinksForMachine; // ecx
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  int v5; // edx
  __int64 v6; // rdi
  int *v7; // r8
  _DWORD v9[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v10; // [rsp+38h] [rbp+8h] BYREF

  v10 = 0LL;
  RegistryLinksForMachine = NtQuerySystemInformationEx(181LL, &v10, 8LL);
  if ( RegistryLinksForMachine == -1073741789 )
  {
    v1 = v9[0] + 15LL;
    if ( v1 <= v9[0] )
      v1 = 0xFFFFFFFFFFFFFF0LL;
    v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = alloca(v2);
    v4 = alloca(v2);
    RegistryLinksForMachine = NtQuerySystemInformationEx(181LL, &v10, 8LL);
    if ( RegistryLinksForMachine >= 0 )
    {
      v5 = v9[0];
      LODWORD(v6) = 0;
      if ( LOWORD(v9[0]) )
      {
        v7 = v9;
        do
        {
          if ( (v5 & 0x60000) == 0x20000 )
          {
            RegistryLinksForMachine = CreateRegistryLinksForMachine(*(unsigned __int16 *)v7);
            if ( RegistryLinksForMachine < 0 )
              break;
          }
          v6 = (unsigned int)(v6 + 1);
          v7 = &v9[v6];
          v5 = *v7;
        }
        while ( (unsigned __int16)*v7 );
      }
    }
  }
  return (unsigned int)RegistryLinksForMachine;
}
