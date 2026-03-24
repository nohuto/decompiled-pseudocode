/*
 * XREFs of DxgkAttemptOpmVmBusRedirect @ 0x1C0172AE0
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C01728D8 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___ @ 0x1C001D704 (DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e___.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C003C094 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C016C73C (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1C024AF88 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C43FC (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 */

__int64 __fastcall DxgkAttemptOpmVmBusRedirect(
        __int64 a1,
        int a2,
        unsigned int a3,
        void *a4,
        size_t a5,
        void *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  const CHAR *v10; // rdi
  _DWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v22; // rsi
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // r8
  size_t Size; // [rsp+30h] [rbp-61h]
  char v32; // [rsp+48h] [rbp-49h] BYREF
  __int128 v33; // [rsp+58h] [rbp-39h] BYREF
  int v34; // [rsp+68h] [rbp-29h] BYREF
  __int64 v35; // [rsp+70h] [rbp-21h] BYREF
  int v36; // [rsp+78h] [rbp-19h]
  const CHAR *v37; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-9h] BYREF
  char v39; // [rsp+98h] [rbp+7h]
  unsigned int v40; // [rsp+E8h] [rbp+57h] BYREF

  v40 = a3;
  *(_QWORD *)&v33 = &v40;
  v10 = 0LL;
  *((_QWORD *)&v33 + 1) = &v32;
  v32 = 0;
  DXGKCALLONEXIT__lambda_0f534b3d3ec4016b5fe0be2c2202598e_((__int64)v38, &v33);
  v12 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  if ( DXGGLOBAL::IsVmConnectedToHost(Global)
    && (v22 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 197)) != 0LL
    && (v35 = a1,
        *(_QWORD *)&v33 = 0LL,
        DWORD2(v33) = 0,
        v36 = a2,
        v23 = DXGGLOBAL::GetGlobal(v21, v20),
        (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
               (struct DXGGLOBAL *)((char *)v23 + 304616),
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v35,
               (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v33) >= 0) )
  {
    LODWORD(Size) = a5;
    v32 = 1;
    *v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v22, (struct _LUID)v33, DWORD2(v33), v40, a4, Size, a6, a7);
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  if ( v39
    && *(_DWORD *)v38[0] == 2303131
    && (unsigned int)dword_1C00B19E8 > 5
    && tlgKeywordOn((__int64)&dword_1C00B19E8, 0x400000100000LL) )
  {
    v28 = *(unsigned __int8 *)v38[1];
    v29 = *((_QWORD *)DXGPROCESS::GetCurrent(v25, v24, v26, v27) + 8);
    if ( v29 )
      v10 = *(const CHAR **)(v29 + 80);
    v37 = v10;
    LODWORD(a8) = v28;
    v34 = 2303131;
    v35 = 33556480LL;
    *(_QWORD *)&v33 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v29,
      byte_1C007EEA6,
      v30,
      (__int64)&v33,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&a8,
      &v37);
  }
  return v18;
}
