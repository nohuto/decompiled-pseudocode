/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CCC88
 * Callers:
 *     NtUserCloseClipboard @ 0x1C0010170 (NtUserCloseClipboard.c)
 *     NtUserOpenClipboard @ 0x1C0010250 (NtUserOpenClipboard.c)
 *     NtUserGetClipboardData @ 0x1C01D13A0 (NtUserGetClipboardData.c)
 *     NtUserSetClipboardData @ 0x1C01DBC50 (NtUserSetClipboardData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        const unsigned __int16 **a7)
{
  __int64 v8; // rcx
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  _BYTE *v12; // rdx
  int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int64 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+68h] [rbp-30h]
  const unsigned __int16 *v21; // [rsp+70h] [rbp-28h]
  int v22; // [rsp+78h] [rbp-20h]
  int v23; // [rsp+7Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &word_1C03142AC;
    v11 = 2;
  }
  v19 = a6;
  v21 = v9;
  v22 = v11;
  v23 = 0;
  v12 = *a5;
  v20 = 4LL;
  if ( v12 )
  {
    do
      ++v8;
    while ( v12[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v12 = &unk_1C03206E9;
    v13 = 1;
  }
  v16 = v12;
  v17 = v13;
  v18 = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0357098, a2, 0LL, 0LL, 5u, &v15);
}
