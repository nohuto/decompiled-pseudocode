/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0225CD4
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rcx
  _BYTE *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // r8
  int v20; // ecx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-61h]
  int v24; // [rsp+58h] [rbp-59h]
  int v25; // [rsp+5Ch] [rbp-55h]
  _BYTE *v26; // [rsp+60h] [rbp-51h]
  int v27; // [rsp+68h] [rbp-49h]
  int v28; // [rsp+6Ch] [rbp-45h]
  _BYTE *v29; // [rsp+70h] [rbp-41h]
  int v30; // [rsp+78h] [rbp-39h]
  int v31; // [rsp+7Ch] [rbp-35h]
  __int64 v32; // [rsp+80h] [rbp-31h]
  __int64 v33; // [rsp+88h] [rbp-29h]
  __int64 v34; // [rsp+90h] [rbp-21h]
  __int64 v35; // [rsp+98h] [rbp-19h]
  __int64 v36; // [rsp+A0h] [rbp-11h]
  __int64 v37; // [rsp+A8h] [rbp-9h]
  __int64 v38; // [rsp+B0h] [rbp-1h]
  __int64 v39; // [rsp+B8h] [rbp+7h]

  v38 = a11;
  v12 = -1LL;
  v36 = a10;
  v34 = a9;
  v32 = a8;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  v13 = *a7;
  v33 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1C03206E9;
    v15 = 1;
  }
  v30 = v15;
  v29 = v13;
  v31 = 0;
  v16 = *a6;
  if ( *a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1C03206E9;
    v18 = 1;
  }
  v27 = v18;
  v26 = v16;
  v28 = 0;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v19[v12] );
    v20 = v12 + 1;
  }
  else
  {
    v19 = &unk_1C03206E9;
    v20 = 1;
  }
  v23 = v19;
  v24 = v20;
  v25 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v22);
}
