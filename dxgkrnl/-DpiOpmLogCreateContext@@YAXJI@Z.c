/*
 * XREFs of ?DpiOpmLogCreateContext@@YAXJI@Z @ 0x1C0062FC8
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0041D64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 */

void __fastcall DpiOpmLogCreateContext(int a1, int a2)
{
  __int64 CurrentProcess; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  const CHAR *v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000100000LL) )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(CurrentProcess);
      v11 = a1;
      v8 = ProcessImageFileName;
      v12 = a2;
      v9 = 33556480LL;
      v10[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v6,
        byte_1C00A05F1,
        v7,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v12,
        (__int64)&v11,
        &v8);
    }
  }
}
