/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F188 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0030648 (_tlgKeywordOn.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A1750 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A19A4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00A31B4 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C02736B0 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  HSURF v2; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  HSURF v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rax
  UMPDOBJ *v11; // rcx
  size_t Size; // [rsp+28h] [rbp-39h]
  int *v14; // [rsp+40h] [rbp-21h]
  int v15; // [rsp+48h] [rbp-19h] BYREF
  int v16; // [rsp+4Ch] [rbp-15h] BYREF
  HSURF v17; // [rsp+50h] [rbp-11h] BYREF
  __int64 v18; // [rsp+58h] [rbp-9h] BYREF
  UMPDOBJ *v19; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v21; // [rsp+88h] [rbp+27h]
  __int128 v22; // [rsp+90h] [rbp+2Fh] BYREF
  __int128 v23; // [rsp+A0h] [rbp+3Fh]

  v2 = 0LL;
  v17 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  v3 = v19;
  v22 = 0LL;
  v23 = 0LL;
  if ( v19 )
  {
    *(_QWORD *)&v22 = 0x300000020LL;
    *(_QWORD *)&v23 = *(_QWORD *)v19;
    *((_QWORD *)&v23 + 1) = a1;
    LODWORD(Size) = 8;
    v4 = UMPDOBJ::Thunk(v19, &v22, 0x20u, &v17, Size);
    v5 = v17;
    if ( v4 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      SURFREF::SURFREF((SURFREF *)v20, v5);
      v6 = v21;
      if ( v21 )
      {
        if ( !*(_QWORD *)(v21 + 48) )
        {
          if ( (unsigned int)dword_1C032B3D8 <= 5 || !tlgKeywordOn((__int64)&dword_1C032B3D8, 0x400000000000LL) )
            goto LABEL_15;
          v15 = 0;
          v16 = 1;
          LODWORD(v17) = 73876;
          v14 = &v15;
          v10 = (int *)&v17;
LABEL_14:
          v18 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v7,
            (int)&unk_1C02F50FA,
            v8,
            v9,
            (__int64)v10,
            (__int64)&v18,
            (__int64)&v16,
            (__int64)v14);
LABEL_15:
          SURFREF::~SURFREF((SURFREF *)v20, v6);
          goto LABEL_30;
        }
        v11 = (UMPDOBJ *)*(unsigned int *)(v21 + 112);
        if ( ((unsigned int)v11 & 0x40000) == 0 )
        {
          if ( (unsigned int)dword_1C032B3D8 <= 5 || !tlgKeywordOn((__int64)&dword_1C032B3D8, 0x400000000000LL) )
            goto LABEL_15;
          LODWORD(v17) = 0;
          v16 = 1;
          v15 = 71980;
          v14 = (int *)&v17;
          v10 = &v15;
          goto LABEL_14;
        }
        if ( *(_WORD *)(v21 + 100) == 1
          && (((unsigned __int8)v11 & 1) == 0 || ((unsigned __int8)v11 & 0x20) == 0 || ((unsigned __int8)v11 & 8) == 0) )
        {
          v5 = 0LL;
        }
        if ( ((unsigned int)v11 & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v3 + 106) )
          UMPDOBJ::vClient(v11, (_QWORD *)(v21 + 24));
        if ( v5 )
          SURFREF::vKeepIt((SURFREF *)v20);
      }
      else
      {
        v5 = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v20, v6);
    }
    v2 = v5;
  }
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return v2;
}
