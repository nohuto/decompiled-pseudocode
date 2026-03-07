__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  unsigned int v3; // edx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  int v14; // [rsp+F0h] [rbp-80h] BYREF
  char v15; // [rsp+F4h] [rbp-7Ch] BYREF
  char v16; // [rsp+F5h] [rbp-7Bh] BYREF
  char v17; // [rsp+F6h] [rbp-7Ah] BYREF
  char v18; // [rsp+F7h] [rbp-79h] BYREF
  char v19; // [rsp+F8h] [rbp-78h] BYREF
  _BYTE v20[3]; // [rsp+F9h] [rbp-77h] BYREF
  int v21; // [rsp+FCh] [rbp-74h] BYREF
  int v22; // [rsp+100h] [rbp-70h] BYREF
  int v23; // [rsp+104h] [rbp-6Ch] BYREF
  int v24; // [rsp+108h] [rbp-68h] BYREF
  int v25; // [rsp+10Ch] [rbp-64h] BYREF
  int v26; // [rsp+110h] [rbp-60h] BYREF
  int v27; // [rsp+114h] [rbp-5Ch] BYREF
  int v28; // [rsp+118h] [rbp-58h] BYREF
  int v29; // [rsp+11Ch] [rbp-54h] BYREF
  int v30; // [rsp+120h] [rbp-50h] BYREF
  int v31; // [rsp+124h] [rbp-4Ch] BYREF
  int v32; // [rsp+128h] [rbp-48h] BYREF
  int v33; // [rsp+12Ch] [rbp-44h] BYREF
  unsigned int v34; // [rsp+130h] [rbp-40h] BYREF
  __int64 v35; // [rsp+138h] [rbp-38h] BYREF
  unsigned __int64 v36; // [rsp+140h] [rbp-30h] BYREF
  void *v37; // [rsp+148h] [rbp-28h] BYREF
  const char *v38; // [rsp+150h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+158h] [rbp-18h] BYREF
  int *v40; // [rsp+178h] [rbp+8h]
  int v41; // [rsp+180h] [rbp+10h]
  int v42; // [rsp+184h] [rbp+14h]

  v3 = *(_DWORD *)a2;
  v14 = 0;
  v5 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, v3, (float *)&v14);
  v8 = v5;
  if ( v5 >= 0 )
  {
    v9 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( (unsigned int)dword_1C03570E0 > 4 )
      {
        v12 = *((_DWORD *)a2 + 15);
        v14 = -__CFSHR__(v12, 3);
        v21 = -__CFSHR__(v12, 2);
        v23 = *((_DWORD *)a2 + 14);
        v24 = *((_DWORD *)a2 + 13);
        v25 = *((_DWORD *)a2 + 12);
        v26 = *((_DWORD *)a2 + 11);
        v27 = *((_DWORD *)a2 + 10);
        v28 = *((_DWORD *)a2 + 9);
        v29 = *((_DWORD *)a2 + 8);
        v30 = *((_DWORD *)a2 + 7);
        v31 = *((_DWORD *)a2 + 6);
        v32 = *((_DWORD *)a2 + 5);
        v15 = *((_BYTE *)a2 + 16);
        v33 = *((_DWORD *)a2 + 3);
        v16 = *((_BYTE *)a2 + 11);
        v17 = *((_BYTE *)a2 + 10);
        v18 = *((_BYTE *)a2 + 9);
        v19 = *((_BYTE *)a2 + 8);
        v20[0] = *((_BYTE *)a2 + 4);
        v34 = *(_DWORD *)a2;
        v22 = -(v12 & 1);
        v37 = (void *)*((_QWORD *)this + 10);
        LODWORD(v35) = 0;
        v38 = "Started super-wet ink";
        v36 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v36,
          byte_1C031F82E,
          v10,
          v11,
          (__int64)&v35,
          (void **)&v38,
          &v37,
          (__int64)&v36,
          (__int64)&v34,
          (__int64)v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v33,
          (__int64)&v15,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v14);
      }
    }
    else if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v42 = 0;
      v14 = v9;
      v41 = 4;
      v40 = &v14;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v39);
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v14 = v5;
    v35 = (__int64)"GetDisplayScalingInfoAndCheckSupported failed";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      v6,
      v7,
      (__int64)&v14,
      (void **)&v35);
  }
  return v8;
}
