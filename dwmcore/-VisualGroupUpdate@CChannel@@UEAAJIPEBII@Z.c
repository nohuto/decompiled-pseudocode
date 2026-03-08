/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801CDEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180043B74 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z @ 0x1800443CC (-GetItemDataWritePointer@CDataStreamWriter@@QEAAJIPEAPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800BAFA0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // ebx
  CDataStreamWriter *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void *v18; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-20h]
  _BYTE v20[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v20, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 199);
  LODWORD(v18) = 704;
  v19 = 0;
  HIDWORD(v18) = a2;
  v8 = 4LL * a4;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    v12 = 1833LL;
    v11 = 2147942934LL;
    goto LABEL_10;
  }
  v19 = 4 * a4;
  v9 = CChannel::BeginCommand(this, &v18, 0xCu, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 1834LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v11);
    goto LABEL_11;
  }
  v13 = v19;
  if ( v19 )
  {
    v14 = this[22];
    v18 = 0LL;
    v15 = CDataStreamWriter::GetItemDataWritePointer(v14, v19, &v18);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB2u, 0LL);
    else
      memcpy_0(v18, a3, v13);
  }
  CDataStreamWriter::EndItem(this[22]);
  v10 = 0;
LABEL_11:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v20);
  return v10;
}
