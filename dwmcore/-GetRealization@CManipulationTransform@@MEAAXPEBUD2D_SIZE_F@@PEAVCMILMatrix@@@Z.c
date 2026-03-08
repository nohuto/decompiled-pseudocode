/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001D460
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180012374 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333333@Z @ 0x180237A54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333@Z @ 0x180237B88 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  struct D2DMatrix *v3; // r9
  int *v5; // rdi
  int *v7; // rsi
  int *v8; // r14
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  int v12; // ecx
  int v13; // r8d
  int *v14; // r9
  unsigned int v15; // r10d
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+A0h] [rbp-9h] BYREF
  int v20; // [rsp+A4h] [rbp-5h] BYREF
  int v21; // [rsp+A8h] [rbp-1h] BYREF
  int v22; // [rsp+ACh] [rbp+3h] BYREF
  int v23; // [rsp+B0h] [rbp+7h] BYREF
  int v24; // [rsp+B4h] [rbp+Bh] BYREF
  int v25; // [rsp+B8h] [rbp+Fh] BYREF
  int v26; // [rsp+BCh] [rbp+13h] BYREF
  int v27; // [rsp+C0h] [rbp+17h] BYREF
  int v28; // [rsp+C4h] [rbp+1Bh] BYREF
  int v29; // [rsp+C8h] [rbp+1Fh] BYREF
  int v30; // [rsp+CCh] [rbp+23h] BYREF
  _DWORD v31[12]; // [rsp+D0h] [rbp+27h] BYREF
  int v32; // [rsp+110h] [rbp+67h] BYREF
  int v33; // [rsp+120h] [rbp+77h] BYREF
  int v34; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = (CManipulationTransform *)((char *)this + 208);
  v5 = (int *)((char *)this + 196);
  v7 = (int *)((char *)this + 184);
  v8 = (int *)((char *)this + 160);
  if ( *((_BYTE *)this + 272) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 160),
      (CManipulationTransform *)((char *)this + 184),
      (CManipulationTransform *)((char *)this + 196),
      v3);
    *((_BYTE *)this + 272) = 0;
  }
  v9 = *((_OWORD *)v3 + 1);
  v10 = *((_OWORD *)v3 + 2);
  v11 = *((_OWORD *)v3 + 3);
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *((_OWORD *)a3 + 1) = v9;
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = 0;
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 1LL) )
    {
      v32 = *((_DWORD *)this + 67);
      v33 = *((_DWORD *)this + 66);
      v34 = *((_DWORD *)this + 65);
      v28 = *((_DWORD *)this + 64);
      v29 = *((_DWORD *)this + 63);
      v30 = *((_DWORD *)this + 62);
      v31[0] = *((_DWORD *)this + 61);
      v19 = *((_DWORD *)this + 60);
      v20 = *((_DWORD *)this + 59);
      v21 = *((_DWORD *)this + 58);
      v22 = *((_DWORD *)this + 57);
      v23 = *((_DWORD *)this + 56);
      v24 = *((_DWORD *)this + 55);
      v25 = *((_DWORD *)this + 54);
      v26 = *((_DWORD *)this + 53);
      v27 = *v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_18037DD30,
        v13,
        (_DWORD)v14,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
      v15 = dword_1803E07D0;
    }
    if ( v15 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 1LL) )
      {
        v32 = *((_DWORD *)this + 51);
        v33 = *((_DWORD *)this + 50);
        v34 = *v5;
        v27 = *((_DWORD *)this + 48);
        v26 = *((_DWORD *)this + 47);
        v25 = *v7;
        v24 = *((_DWORD *)this + 45);
        v23 = *((_DWORD *)this + 44);
        v22 = *((_DWORD *)this + 43);
        v21 = *((_DWORD *)this + 42);
        v20 = *((_DWORD *)this + 41);
        v19 = *v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v16,
          (unsigned int)&unk_18037DDB5,
          v17,
          v18,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v22,
          (__int64)&v23,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v26,
          (__int64)&v27,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32);
      }
    }
  }
}
