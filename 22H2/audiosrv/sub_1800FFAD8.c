/*
 * XREFs of sub_1800FFAD8 @ 0x1800FFAD8
 * Callers:
 *     sub_1800F9ED0 @ 0x1800F9ED0 (sub_1800F9ED0.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_18006E450 @ 0x18006E450 (sub_18006E450.c)
 *     sub_1800FF510 @ 0x1800FF510 (sub_1800FF510.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800FFAD8(__int64 a1, _BYTE *a2)
{
  char *pvData; // rbx
  void **v5; // rsi
  LPVOID *v6; // rsi
  void *v7; // rcx
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF
  char *v9; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  pcbData = 0;
  pvData = 0LL;
  v9 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
          L"RoutedAudioDevice",
          2u,
          0LL,
          0LL,
          &pcbData) )
  {
    pcbData += 2;
    v5 = (void **)sub_18006E450(&pv, 0LL, pcbData);
    if ( &v9 != (char **)v5 )
    {
      sub_18002A504((void **)&v9, *v5);
      *v5 = 0LL;
      pvData = v9;
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( pvData )
    {
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
              L"RoutedAudioDevice",
              2u,
              0LL,
              pvData,
              &pcbData) )
      {
        v6 = (LPVOID *)(a1 + 344);
        if ( (unsigned int)o__wcsicmp(pvData, *(_QWORD *)(a1 + 344)) )
        {
          sub_18005FD7C(&pv, pvData, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v6 == &pv )
          {
            v7 = pv;
          }
          else
          {
            sub_18002A504((void **)(a1 + 344), pv);
            v7 = 0LL;
          }
          if ( v7 )
            CoTaskMemFree(v7);
          sub_1800FF510(a1, (__int64)*v6);
          if ( a2 )
            *a2 = 1;
        }
      }
    }
  }
  if ( pvData )
    CoTaskMemFree(pvData);
}
