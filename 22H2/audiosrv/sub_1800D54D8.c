/*
 * XREFs of sub_1800D54D8 @ 0x1800D54D8
 * Callers:
 *     sub_1800D88DC @ 0x1800D88DC (sub_1800D88DC.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180051960 @ 0x180051960 (sub_180051960.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 */

__int64 __fastcall sub_1800D54D8(HKEY hKey, PSID pSid, _QWORD *a3, _DWORD *a4)
{
  int KeySecurity; // ebx
  void *v9; // rax
  void *v10; // rdi
  signed int v11; // eax
  unsigned int v12; // r8d
  DWORD v14; // [rsp+20h] [rbp-20h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+24h] [rbp-1Ch] BYREF
  WINBOOL bSaclPresent; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  struct _ACL *v18; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+80h] [rbp+40h] BYREF

  pSacl = 0LL;
  v18 = 0LL;
  cbSecurityDescriptor = 0;
  KeySecurity = 87;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( pSid )
      {
        *a3 = 0LL;
        *a4 = 0;
        KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
        if ( KeySecurity == 122 )
        {
          v9 = sub_18006A1B0(cbSecurityDescriptor);
          v10 = v9;
          if ( v9 )
          {
            KeySecurity = RegGetKeySecurity(hKey, 0x10u, v9, &cbSecurityDescriptor);
            if ( !KeySecurity )
            {
              if ( GetSecurityDescriptorSacl(v10, &bSaclPresent, &pSacl, &bSaclDefaulted) )
              {
                v14 = 0;
                KeySecurity = sub_180051960(pSid, pSacl, &v18, &v14);
                if ( !KeySecurity )
                {
                  *a3 = v18;
                  *a4 = v14;
                }
              }
              else
              {
                KeySecurity = GetLastError();
              }
            }
            sub_180033A70(v10);
          }
          else
          {
            KeySecurity = 122;
          }
        }
      }
    }
  }
  v11 = KeySecurity;
  if ( KeySecurity > 0 )
    v11 = (unsigned __int16)KeySecurity | 0x80070000;
  if ( v11 < 0 )
  {
    v12 = KeySecurity;
    if ( KeySecurity > 0 )
      v12 = (unsigned __int16)KeySecurity | 0x80070000;
    sub_18005E8F8((__int64)"AddSidToSACL", 347, v12);
  }
  return (unsigned int)KeySecurity;
}
