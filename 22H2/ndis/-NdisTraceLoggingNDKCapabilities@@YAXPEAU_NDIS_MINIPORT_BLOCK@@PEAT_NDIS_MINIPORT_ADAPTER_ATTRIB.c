/*
 * XREFs of ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C001FA04
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00230C0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5555555AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C001FB68 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 *     _tlgKeywordOn @ 0x1C0023554 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingNDKCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // r13
  _DWORD *MiniportAddDeviceContext; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  int v16; // r11d
  int v17; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+84h] [rbp-5h] BYREF
  int v19; // [rsp+88h] [rbp-1h] BYREF
  int v20; // [rsp+8Ch] [rbp+3h] BYREF
  int v21; // [rsp+90h] [rbp+7h] BYREF
  int v22; // [rsp+94h] [rbp+Bh] BYREF
  int v23; // [rsp+98h] [rbp+Fh] BYREF
  _QWORD v24[8]; // [rsp+A0h] [rbp+17h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v25; // [rsp+F0h] [rbp+67h] BYREF
  char v26; // [rsp+100h] [rbp+77h] BYREF
  int v27; // [rsp+108h] [rbp+7Fh] BYREF

  v25 = a1;
  LOBYTE(a4) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      LOBYTE(a4) = a2->NDKAttributes.Enabled;
      if ( (_BYTE)a4 )
      {
        MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        if ( MiniportAddDeviceContext )
        {
          v4 = MiniportAddDeviceContext[4];
          v5 = MiniportAddDeviceContext[5];
          v6 = MiniportAddDeviceContext[6];
          v7 = MiniportAddDeviceContext[7];
          v8 = MiniportAddDeviceContext[8];
          v9 = MiniportAddDeviceContext[9];
          v10 = *((_QWORD *)MiniportAddDeviceContext + 5);
        }
      }
    }
  }
  if ( (unsigned int)dword_1C00E4108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E4108, 0x200000000000LL, a3, a4) )
    {
      v25 = (struct _NDIS_MINIPORT_BLOCK *)((char *)v25 + 4008);
      v24[0] = v10;
      v27 = v9;
      v17 = v8;
      v18 = v7;
      v19 = v6;
      v20 = v5;
      v21 = v4;
      v22 = v16;
      v23 = v15;
      v26 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v12,
        (unsigned int)&unk_1C00CF845,
        v13,
        v14,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)v24);
    }
  }
}
