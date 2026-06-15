/*
 * XREFs of sub_18001D800 @ 0x18001D800
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A438 (_Init_thread_header.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180121A98 @ 0x180121A98 (sub_180121A98.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D800(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  LPVOID pv; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-20h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( dword_18019EDFC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019EDFC);
    if ( dword_18019EDFC == -1 )
    {
      xmmword_18019E4A0 = xmmword_18015B730;
      dword_18019E4B0 = 0;
      Init_thread_footer(&dword_18019EDFC);
    }
  }
  v4 = xmmword_18019E4A0;
  if ( !(_QWORD)xmmword_18019E4A0 )
    v4 = *((_QWORD *)&xmmword_18019E4A0 + 1);
  if ( !v4 )
  {
    xmmword_18019E4A0 = xmmword_180160C48;
    dword_18019E4B0 = 2;
  }
  if ( dword_18019D844 == -1 )
  {
    dword_18019D844 = 1;
    if ( !(unsigned __int8)sub_18006C4AC() || (unsigned int)IsSpatialSpeakerProtectionCheckRequired() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_18019D844,
        &pcbData);
    }
  }
  if ( dword_18019D844 )
    return 0LL;
  v5 = *(_QWORD *)a2 - xmmword_18019E4A0;
  if ( *(_QWORD *)a2 == (_QWORD)xmmword_18019E4A0 )
    v5 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&xmmword_18019E4A0 + 1);
  if ( v5 || *(_DWORD *)(a2 + 16) != dword_18019E4B0 )
    return 0LL;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84(
      retaddr,
      564LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (unsigned int)v7);
  }
  else
  {
    v9 = sub_18005DEF0(v15);
    v10 = v9 - 1;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v8 = 0;
    }
    else
    {
      v11 = sub_18005E238(v10, v15, v17);
      v8 = v11;
      if ( v11 < 0 )
      {
        sub_18004BD84(
          retaddr,
          574LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
          (unsigned int)v11);
      }
      else
      {
        v12 = v17[0];
        if ( !v17[0] )
          v12 = v17[1] + 1LL;
        if ( v12 )
        {
          v8 = 0;
        }
        else
        {
          pv = 0LL;
          sub_18002A504(&pv, 0LL);
          v13 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
          v8 = v13;
          if ( v13 >= 0 )
          {
            sub_180121A98(v9, pv);
            v8 = 0;
          }
          else
          {
            sub_18004BD84(
              retaddr,
              583LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (unsigned int)v13);
          }
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v8;
}
