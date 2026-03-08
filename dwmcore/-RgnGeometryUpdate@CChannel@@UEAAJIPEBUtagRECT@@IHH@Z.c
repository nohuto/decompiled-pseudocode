/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1800EF4A0
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

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  CDataStreamWriter *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  CDataStreamWriter *v18; // rcx
  LONG *p_right; // r8
  signed __int64 v20; // rsi
  _DWORD *v21; // rdx
  LONG v22; // ecx
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // [rsp+20h] [rbp-40h]
  void *v26; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+38h] [rbp-28h] BYREF
  size_t Size; // [rsp+3Ch] [rbp-24h]
  _BYTE v29[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v29, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 142);
  v27 = 609;
  Size = a2;
  v10 = 16LL * a4;
  if ( v10 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    v24 = 2883LL;
    v23 = 2147942934LL;
    goto LABEL_17;
  }
  HIDWORD(Size) = 16 * a4;
  v11 = CChannel::BeginCommand(this, &v27, 0xCu, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = (unsigned int)v11;
    v24 = 2884LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v23,
      v25);
    goto LABEL_10;
  }
  if ( a4 )
  {
    if ( a5 || a6 )
    {
      v18 = this[22];
      v26 = 0LL;
      CDataStreamWriter::GetItemDataWritePointer(v18, HIDWORD(Size), &v26);
      p_right = &a3->right;
      v20 = (char *)a3 - (_BYTE *)v26;
      v21 = (char *)v26 + 8;
      do
      {
        *(v21 - 2) = a5 + *(_DWORD *)((char *)v21 + v20 - 8);
        *(v21 - 1) = a6 + *(p_right - 1);
        v22 = *p_right;
        p_right += 4;
        *v21 = a5 + v22;
        v21 += 4;
        *(v21 - 3) = a6 + *(p_right - 3);
        --a4;
      }
      while ( a4 );
    }
    else
    {
      v13 = HIDWORD(Size);
      if ( HIDWORD(Size) )
      {
        v14 = this[22];
        v26 = 0LL;
        v15 = CDataStreamWriter::GetItemDataWritePointer(v14, HIDWORD(Size), &v26);
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB2u, 0LL);
        else
          memcpy_0(v26, a3, v13);
      }
    }
  }
  CDataStreamWriter::EndItem(this[22]);
  v12 = 0;
LABEL_10:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v29);
  return v12;
}
