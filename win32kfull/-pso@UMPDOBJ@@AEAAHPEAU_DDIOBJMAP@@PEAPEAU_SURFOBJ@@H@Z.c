__int64 __fastcall UMPDOBJ::pso(UMPDOBJ *this, struct _DDIOBJMAP *a2, struct _SURFOBJ **a3)
{
  char *v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rsi
  UMPDOBJ *v11; // rcx
  char v12; // r9
  int v13; // r10d
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  char *v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+48h] [rbp-29h] BYREF
  int v21; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  __int128 v23; // [rsp+58h] [rbp-19h] BYREF
  __int128 v24; // [rsp+68h] [rbp-9h]
  __int128 v25; // [rsp+78h] [rbp+7h]
  __int128 v26; // [rsp+88h] [rbp+17h]
  __int128 v27; // [rsp+98h] [rbp+27h]
  void *v28; // [rsp+E8h] [rbp+77h] BYREF

  v3 = (char *)*a3;
  if ( !*a3 )
  {
    if ( *((_DWORD *)this + 106) )
    {
      if ( *(_QWORD *)a2 )
      {
        DEC_SHARE_REF_CNT(*(_QWORD *)a2 - 24LL);
        *(_QWORD *)a2 = 0LL;
      }
    }
    return 1LL;
  }
  if ( *(_QWORD *)v3 >= (unsigned __int64)MmSystemRangeStart )
  {
    if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      LODWORD(v28) = 0;
      v20 = 1;
      v22 = 0x1000000LL;
      v21 = 78481;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_1C03200B1,
        v8,
        v9,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v28);
    }
    return 0LL;
  }
  UMPDOBJ::vServer((UMPDOBJ *)MmSystemRangeStart, *a3);
  v10 = (char *)*((_QWORD *)v3 + 6);
  v28 = v10;
  if ( v10
    && !*((_WORD *)v3 + 38)
    && (unsigned int)UMPDOBJ::bNeedThunk(this, v10)
    && (!*((_DWORD *)this + 106) || !v13)
    && !v12 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v28, *((_DWORD *)v3 + 10)) )
      return 0LL;
    v10 = (char *)v28;
  }
  v14 = *((_QWORD *)v3 + 3);
  v15 = *((_OWORD *)v3 + 1);
  v23 = *(_OWORD *)v3;
  v24 = v15;
  v16 = *((_OWORD *)v3 + 3);
  v25 = *((_OWORD *)v3 + 2);
  v26 = v16;
  v27 = *((_OWORD *)v3 + 4);
  if ( v14 )
    *((_QWORD *)&v24 + 1) = *(_QWORD *)(v14 + 16);
  v17 = (char *)*((_QWORD *)v3 + 6);
  if ( v10 != v17 )
  {
    v18 = *((_QWORD *)v3 + 7) - (_QWORD)v17;
    *(_QWORD *)&v26 = v10;
    *((_QWORD *)&v26 + 1) = &v10[v18];
  }
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, a2, (const void **)a3, 0x50u, &v23) )
    return 0LL;
  if ( v10 == *((char **)v3 + 6) )
  {
LABEL_26:
    if ( *((_DWORD *)this + 106) )
    {
      INC_SHARE_REF_CNT(v3 - 24);
      INC_SHARE_REF_CNT(v3 - 24);
      *((_WORD *)v3 - 5) |= 0x4000u;
      DEC_SHARE_REF_CNT(v3 - 24);
    }
    return 1LL;
  }
  if ( *((_DWORD *)this + 106) )
  {
    *((_QWORD *)v3 + 7) = *((_QWORD *)&v26 + 1);
    *((_QWORD *)v3 + 6) = v10;
    goto LABEL_26;
  }
  return 1LL;
}
