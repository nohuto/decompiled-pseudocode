/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x18007D010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A0110 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A27A0 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int v3; // r14d
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  int v11; // eax
  int v12; // r8d
  _DWORD v14[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v15; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a1;
  v15 = 0LL;
  v5 = NtQuerySystemInformationEx(181LL, &v15, 8LL, 0LL, 0, v14);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = v14[0] + 15LL;
    if ( v7 <= v14[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = NtQuerySystemInformationEx(181LL, &v15, 8LL, v14, v14[0], v14);
    if ( v6 >= 0 )
    {
      v11 = v14[0];
      v12 = 0;
      while ( (_WORD)v11 )
      {
        if ( (unsigned __int16)v11 == v3 && (v11 & 0x60000) == 0x20000 )
        {
          v2 = 1;
          break;
        }
        v11 = v14[++v12];
      }
      *a2 = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
