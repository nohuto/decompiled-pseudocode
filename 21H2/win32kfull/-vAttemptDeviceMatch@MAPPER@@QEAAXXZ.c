/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0291D74
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C000F69C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001D8F0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C016EEB6 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x1C0170DBA (ulCharsetToCodePage.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0291D34 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C029206C (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  bool v1; // zf
  struct PFF *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _DWORD *v6; // rax
  struct PFE *i; // rax
  unsigned int v8; // eax
  struct PFE *v9; // rdi
  int v10; // eax
  int v11; // r8d
  int *v12; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h]
  unsigned __int8 v15; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v16; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v15 = 1;
  if ( !v1 )
  {
    v16 = gpPFTDevice;
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v16, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v5 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 29);
        v13[0] = v5;
        v14 = 0LL;
        *v6 &= v4;
        *((_QWORD *)this + 25) &= v4;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) &= v4;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v13[1] = *v5;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v13); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v13) )
        {
          v9 = i;
          if ( !i )
            break;
          v16 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v16, &v15, 0) )
          {
            v8 = *((_DWORD *)this + 46);
            if ( !v8 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v16 + 4) + *(int *)(*((_QWORD *)v16 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v9, 1, v15);
                return;
              }
              v8 = ++*((_DWORD *)this + 46);
            }
            if ( v8 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v9, 1, v15);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
        {
          v10 = ulCharsetToCodePage(HIBYTE(**((_DWORD **)this + 29)));
          *v12 = v11 | (v10 << 8);
        }
      }
    }
  }
}
