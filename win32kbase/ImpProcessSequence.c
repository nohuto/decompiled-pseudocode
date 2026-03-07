__int64 __fastcall ImpProcessSequence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        int *a8)
{
  unsigned int Pointer; // ebx
  int *v12; // rcx
  unsigned __int8 *v13; // rdx
  ULONG v15; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ah] [rbp-A6h]
  __int16 v23; // [rsp+5Eh] [rbp-A2h]
  _WORD *v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-80h] BYREF
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int16 *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]

  v23 = 0;
  v24 = ImpCharacterBuffer;
  v21 = 2 * a4;
  v22 = (unsigned __int16)(2 * a4);
  Pointer = (unsigned int)ImpRpcSendString(a1, a2, (__int64)&v21, a5, a6, a7, a8).Pointer;
  if ( Pointer == 261 )
  {
    Pointer = 0;
    goto LABEL_4;
  }
  if ( (Pointer & 0x80000000) == 0 )
  {
LABEL_4:
    if ( (unsigned int)dword_1C02C9780 > 5 )
    {
      v32 = &v26;
      v12 = (int *)&v25;
      v18 = ImpSessionId;
      v34 = &v16;
      v28 = &v18;
      v36 = &v17;
      v40 = &v20;
      v38 = &v19;
      v13 = (unsigned __int8 *)&unk_1C02A04CA;
      v25 = a1;
      v31 = 8LL;
      v26 = a2;
      v16 = a5;
      v35 = 2LL;
      v17 = a4;
      v37 = 2LL;
      v19 = a6;
      v39 = 4LL;
      v20 = a7;
      v41 = 8LL;
      v15 = 9;
LABEL_9:
      v30 = v12;
      v29 = 4LL;
      v33 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, v13, 0LL, 0LL, v15, &v27);
      return Pointer;
    }
    return Pointer;
  }
  if ( (unsigned int)dword_1C02C9780 > 2 && tlgKeywordOn((__int64)&dword_1C02C9780, 0x400000000000LL) )
  {
    v12 = &v18;
    v19 = ImpSessionId;
    v13 = (unsigned __int8 *)&dword_1C02A043A;
    v18 = Pointer;
    v28 = &v19;
    v32 = &v20;
    v15 = 5;
    v31 = 4LL;
    v20 = 0x1000000LL;
    goto LABEL_9;
  }
  return Pointer;
}
