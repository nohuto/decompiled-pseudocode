/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029D774
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C011B194 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00039AC (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C014DD0C (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C014DD40 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C014DEE0 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ulCharsetToCodePage @ 0x1C01525CA (ulCharsetToCodePage.c)
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
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  unsigned __int8 v12; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v13; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v12 = 1;
  if ( !v1 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v10);
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v10, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v5 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 29);
        v10[0] = v5;
        v11 = 0LL;
        *v6 &= v4;
        *((_QWORD *)this + 25) &= v4;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) &= v4;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v10[1] = *v5;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v10); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v10) )
        {
          v9 = i;
          if ( !i )
            break;
          v13 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v13, &v12, 0) )
          {
            v8 = *((_DWORD *)this + 46);
            if ( !v8 )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v13 + 4) + *(int *)(*((_QWORD *)v13 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v9, 1, v12);
                return;
              }
              v8 = ++*((_DWORD *)this + 46);
            }
            if ( v8 < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v9, 1, v12);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
          **((_DWORD **)this + 29) |= (unsigned int)ulCharsetToCodePage((Gre::Base *)*(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL)) << 8;
      }
    }
  }
}
