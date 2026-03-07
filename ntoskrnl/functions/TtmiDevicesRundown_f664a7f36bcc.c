__int64 __fastcall TtmiDevicesRundown(int *a1)
{
  int v1; // esi
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-10h]

  if ( a1 )
  {
    v1 = *a1;
    v2 = (__int64 *)(a1 + 24);
    v3 = (__int64 *)*((_QWORD *)a1 + 12);
    result = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    while ( v3 != v2 )
    {
      v5 = *((_DWORD *)v3 + 150);
      if ( (v5 & 8) == 0 )
      {
        DWORD1(v7) = *((_DWORD *)v3 + 149);
        DWORD2(v7) = *((_DWORD *)v3 + 4);
        *((_QWORD *)&v8 + 1) = v3[3];
        HIDWORD(v7) = *((_DWORD *)v3 + 8);
        LODWORD(v8) = *((_DWORD *)v3 + 18);
        v6 = v3[76];
        DWORD1(v8) = v5;
        v9 = v6;
        LODWORD(v7) = v1;
        result = TtmiLogDeviceRundown(&v7);
      }
      v3 = (__int64 *)*v3;
    }
  }
  return result;
}
