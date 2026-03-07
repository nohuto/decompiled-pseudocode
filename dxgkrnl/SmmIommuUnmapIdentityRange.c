__int64 __fastcall SmmIommuUnmapIdentityRange(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+30h] [rbp-18h]

  if ( (unsigned int)(dword_1C013BBF8 - 2) <= 1 )
  {
    v4[1] = 0;
    v5 = a2 + 12;
    v2 = (unsigned int)a2[10];
    a2 = v4;
    v6 = v2 >> 12;
    v4[0] = 2;
  }
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD))qword_1C013BC50)(a1, a2, (unsigned int)dword_1C013BBF8);
}
