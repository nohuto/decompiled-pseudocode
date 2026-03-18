/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C012C190
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C012B208 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0271408 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  HSURF v2; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  HSURF v5; // rsi
  int v6; // r8d
  int v7; // r9d
  int *v8; // rax
  UMPDOBJ *v9; // rcx
  size_t Size; // [rsp+28h] [rbp-39h]
  int *v12; // [rsp+40h] [rbp-21h]
  int v13; // [rsp+48h] [rbp-19h] BYREF
  int v14; // [rsp+4Ch] [rbp-15h] BYREF
  HSURF v15; // [rsp+50h] [rbp-11h] BYREF
  __int64 v16; // [rsp+58h] [rbp-9h] BYREF
  UMPDOBJ *v17; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v19; // [rsp+88h] [rbp+27h]
  __int128 v20; // [rsp+90h] [rbp+2Fh] BYREF
  __int128 v21; // [rsp+A0h] [rbp+3Fh]

  v2 = 0LL;
  v15 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v3 = v17;
  v20 = 0LL;
  v21 = 0LL;
  if ( v17 )
  {
    *(_QWORD *)&v20 = 0x300000020LL;
    *(_QWORD *)&v21 = *(_QWORD *)v17;
    *((_QWORD *)&v21 + 1) = a1;
    LODWORD(Size) = 8;
    v4 = UMPDOBJ::Thunk(v17, &v20, 0x20u, &v15, Size);
    v5 = v15;
    if ( v4 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      SURFREF::SURFREF((SURFREF *)v18, v5);
      if ( v19 )
      {
        if ( !*(_QWORD *)(v19 + 48) )
        {
          if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
            goto LABEL_15;
          v13 = 0;
          v14 = 1;
          LODWORD(v15) = 73876;
          v12 = &v13;
          v8 = (int *)&v15;
LABEL_14:
          v16 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C03263F8,
            (unsigned int)&unk_1C02F2504,
            v6,
            v7,
            (__int64)v8,
            (__int64)&v16,
            (__int64)&v14,
            (__int64)v12);
LABEL_15:
          SURFREF::~SURFREF((SURFREF *)v18);
          goto LABEL_30;
        }
        v9 = (UMPDOBJ *)*(unsigned int *)(v19 + 112);
        if ( ((unsigned int)v9 & 0x40000) == 0 )
        {
          if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
            goto LABEL_15;
          LODWORD(v15) = 0;
          v14 = 1;
          v13 = 71980;
          v12 = (int *)&v15;
          v8 = &v13;
          goto LABEL_14;
        }
        if ( *(_WORD *)(v19 + 100) == 1
          && (((unsigned __int8)v9 & 1) == 0 || ((unsigned __int8)v9 & 0x20) == 0 || ((unsigned __int8)v9 & 8) == 0) )
        {
          v5 = 0LL;
        }
        if ( ((unsigned int)v9 & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v3 + 106) )
          UMPDOBJ::vClient(v9, (_QWORD *)(v19 + 24));
        if ( v5 )
          SURFREF::vKeepIt((SURFREF *)v18);
      }
      else
      {
        v5 = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v18);
    }
    v2 = v5;
  }
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v2;
}
