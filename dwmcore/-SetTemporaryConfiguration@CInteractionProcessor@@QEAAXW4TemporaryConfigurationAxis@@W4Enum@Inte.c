/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801ACF64
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1801A820C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

char __fastcall CInteractionProcessor::SetTemporaryConfiguration(_BYTE *a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  int v5; // r14d
  int v6; // eax
  int v10; // edi
  __int64 v11; // rsi
  int v12; // r10d
  __int64 v13; // r8
  int v14; // r9d
  char *v15; // rdx
  char v16; // cl
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  int v21; // r11d
  int v22; // eax
  int v24; // [rsp+80h] [rbp-1h] BYREF
  int v25; // [rsp+84h] [rbp+3h] BYREF
  int v26; // [rsp+88h] [rbp+7h] BYREF
  int v27; // [rsp+8Ch] [rbp+Bh] BYREF
  int v28; // [rsp+90h] [rbp+Fh] BYREF
  int v29; // [rsp+94h] [rbp+13h] BYREF
  int v30; // [rsp+98h] [rbp+17h] BYREF
  _BYTE *v31; // [rsp+A0h] [rbp+1Fh] BYREF
  int v32; // [rsp+E8h] [rbp+67h] BYREF
  int v33; // [rsp+F0h] [rbp+6Fh] BYREF

  v5 = a4;
  v6 = -a3;
  v10 = -1;
  v11 = (__int64)&a1[(a3 != 0 ? 0x24 : 0) + 1272];
  v12 = 0;
  v13 = 3LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v10 = 1;
      v12 = 12;
    }
    else if ( a2 == 2 )
    {
      v10 = 2;
      v12 = 48;
    }
  }
  else
  {
    v10 = 0;
    v12 = 3;
  }
  v14 = a5 | ~v12;
  if ( v10 == -1
    || (LOBYTE(v6) = v10, *(_BYTE *)(v11 + 12LL * v10) == (_BYTE)v5)
    && (!(_BYTE)v5 || *(_DWORD *)(v11 + 12LL * v10 + 4) == v14)
    || (*(_BYTE *)(v11 + 12LL * v10) = v5,
        *(_DWORD *)(v11 + 12LL * v10 + 4) = v14,
        *(_DWORD *)(v11 + 12LL * v10 + 8) = v12,
        a3) )
  {
    if ( a3 == 1 )
    {
      v15 = a1 + 1308;
      v16 = a1[1264] & 0xFD;
      a1[1264] = v16;
      do
      {
        v17 = *v15;
        v15 += 12;
        LOBYTE(v6) = v16 ^ (v16 ^ (v16 | (2 * v17))) & 2;
        a1[1264] = v6;
        v16 = v6;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    a1[148] |= 1u;
    a1[308] |= 1u;
    a1[468] |= 1u;
    a1[628] |= 1u;
  }
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_1803E07D0, 2LL);
    if ( (_BYTE)v6 )
    {
      v22 = ((unsigned __int8)a1[1264] >> 1) & 1;
      v33 = v19;
      a5 = v22;
      v24 = v20;
      v25 = v21;
      v27 = v5;
      v28 = v10;
      v32 = *(_DWORD *)(v11 + 12LL * v10 + 4);
      v26 = *(unsigned __int8 *)(v11 + 12LL * v10);
      v29 = a3;
      v30 = a2;
      v31 = a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     3LL * v10,
                     byte_18037B209,
                     v18,
                     v19,
                     (__int64)&v31,
                     (__int64)&v30,
                     (__int64)&v29,
                     (__int64)&v28,
                     (__int64)&v27,
                     (__int64)&v26,
                     (__int64)&v25,
                     (__int64)&v24,
                     (__int64)&v33,
                     (__int64)&v32,
                     (__int64)&a5);
    }
  }
  return v6;
}
