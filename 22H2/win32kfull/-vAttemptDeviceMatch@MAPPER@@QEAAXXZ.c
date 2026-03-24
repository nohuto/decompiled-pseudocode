/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0293D2C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C005F890 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0060050 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00BAC10 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0293CB4 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0293CEC (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C0294028 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ulCharsetToCodePage @ 0x1C02DC9F8 (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  bool v1; // zf
  struct PFF *v3; // rax
  _QWORD *v4; // rcx
  _DWORD *v5; // rax
  struct PFE *i; // rax
  unsigned int v7; // eax
  struct PFE *v8; // rdi
  int v9; // eax
  int v10; // r8d
  int *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h]
  unsigned __int8 v14; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v15; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v14 = 1;
  if ( !v1 )
  {
    v15 = gpPFTDevice;
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v15, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v4 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v5 = (_DWORD *)*((_QWORD *)this + 29);
        v12[0] = v4;
        v13 = 0LL;
        *v5 = 0;
        *((_QWORD *)this + 25) = 0LL;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) = 0;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v12[1] = *v4;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v12); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v12) )
        {
          v8 = i;
          if ( !i )
            break;
          v15 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v15, &v14, 0) )
          {
            v7 = *((_DWORD *)this + 46);
            if ( !v7 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v15 + 4) + *(int *)(*((_QWORD *)v15 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v8, 1, v14);
                return;
              }
              v7 = ++*((_DWORD *)this + 46);
            }
            if ( v7 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v8, 1, v14);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
        {
          v9 = ulCharsetToCodePage(HIBYTE(**((_DWORD **)this + 29)));
          *v11 = v10 | (v9 << 8);
        }
      }
    }
  }
}
