__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rsi
  UMPDOBJ *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  size_t Size; // [rsp+20h] [rbp-29h]
  int v18; // [rsp+40h] [rbp-9h] BYREF
  int v19; // [rsp+44h] [rbp-5h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1h] BYREF
  __int64 v21; // [rsp+50h] [rbp+7h] BYREF
  UMPDOBJ *v22; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+60h] [rbp+17h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+70h] [rbp+27h]
  __int64 v26; // [rsp+78h] [rbp+2Fh]
  struct DHPDEV__ *v27; // [rsp+80h] [rbp+37h]

  v2 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  v3 = v22;
  v25 = 0LL;
  if ( !v22 )
    goto LABEL_32;
  v24[1] = 3;
  v24[0] = 32;
  v26 = *(_QWORD *)v22;
  v27 = a1;
  LODWORD(Size) = 8;
  v4 = UMPDOBJ::Thunk(v22, v24, 0x20u, &v20, Size);
  v6 = v20;
  if ( v4 == -1 )
    v6 = 0LL;
  if ( !v6 )
  {
LABEL_31:
    v2 = v6;
LABEL_32:
    XUMPDOBJ::~XUMPDOBJ(&v22);
    return v2;
  }
  LOBYTE(v5) = 5;
  v7 = HmgShareLockCheck(v6, v5);
  v21 = v7;
  v8 = v7;
  if ( !v7 )
  {
    v6 = 0LL;
LABEL_29:
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
    goto LABEL_31;
  }
  if ( *(_QWORD *)(v7 + 48) )
  {
    v12 = *(unsigned int *)(v7 + 112);
    if ( (v12 & 0x40000) == 0 )
    {
      if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
      {
        LODWORD(v20) = 0;
        v21 = 0x1000000LL;
        v19 = 1;
        v18 = 71980;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v13,
          byte_1C03200B1,
          v14,
          1LL,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v19,
          (__int64)&v20);
      }
      DEC_SHARE_REF_CNT(v8);
      goto LABEL_32;
    }
    if ( *(_WORD *)(v7 + 100) == 1 && (v12 & 0x29) != 0x29 )
      v6 = 0LL;
    if ( (v12 & 0x4000000) != 0 )
    {
      if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
      {
        LODWORD(v20) = 0;
        v19 = v16;
        v21 = 0x1000000LL;
        v18 = 64770;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          byte_1C03200B1,
          v15,
          v16,
          (__int64)&v18,
          (__int64)&v21,
          (__int64)&v19,
          (__int64)&v20);
      }
      v6 = 0LL;
    }
    if ( *((_DWORD *)v3 + 106) )
      UMPDOBJ::vClient((UMPDOBJ *)v12, (_QWORD *)(v8 + 24));
    if ( v6 )
      INC_SHARE_REF_CNT(v8);
    goto LABEL_29;
  }
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      v18 = 0;
      v19 = 1;
      v23 = 0x1000000LL;
      LODWORD(v20) = 73876;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_1C03200B1,
        v10,
        1LL,
        (__int64)&v20,
        (__int64)&v23,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v21);
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return 0LL;
}
