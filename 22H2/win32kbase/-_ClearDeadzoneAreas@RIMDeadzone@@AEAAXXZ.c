/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C016E6F8
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C016E1B4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016E410 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C016E63C (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 i; // rdi
  __int64 v5; // rcx

  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v2 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      {
        v3 = *((_QWORD *)this + 3);
        v5 = *(_QWORD *)(v3 + 24 * i + 8);
        if ( v5 )
        {
          Win32FreePool(v5);
          v3 = *((_QWORD *)this + 3);
        }
      }
      Win32FreePool(v3);
    }
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
