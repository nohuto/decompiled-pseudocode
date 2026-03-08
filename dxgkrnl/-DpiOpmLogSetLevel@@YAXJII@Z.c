/*
 * XREFs of ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x1C0063090
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0062C48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWrit.c)
 */

void __fastcall DpiOpmLogSetLevel(int a1, int a2, int a3)
{
  __int64 CurrentProcess; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp-20h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch] BYREF
  const CHAR *v12; // [rsp+58h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  __int64 v14; // [rsp+68h] [rbp-8h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000100000LL) )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(CurrentProcess);
      v15 = a1;
      v12 = ProcessImageFileName;
      v10 = a3;
      v11 = a2;
      v13 = 33556480LL;
      v14 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v8,
        byte_1C00A0583,
        v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v15,
        &v12);
    }
  }
}
