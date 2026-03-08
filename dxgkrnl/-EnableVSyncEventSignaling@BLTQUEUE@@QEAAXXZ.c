/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C01C69E8
 * Callers:
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01C68E8 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02B69E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C006CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  const CHAR *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rax
  const CHAR *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_BYTE *)this + 571) = 1;
  *((LARGE_INTEGER *)this + 105) = PerformanceCounter;
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  if ( *((_DWORD *)this + 34) == 3 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    if ( Current )
    {
      if ( !*((_BYTE *)Current + 601) )
      {
        *((_BYTE *)Current + 601) = 1;
        if ( (unsigned int)dword_1C013A8A8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
          {
            v9 = *(_QWORD *)(v8 + 64);
            if ( v9 )
              v7 = *(const CHAR **)(v9 + 96);
            v10 = v7;
            v11 = 33556480LL;
            v12 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
              v5,
              byte_1C00A1C42,
              v6,
              (__int64)&v12,
              (__int64)&v11,
              &v10);
          }
        }
      }
    }
  }
}
