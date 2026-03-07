void __fastcall sub_14006ABB0(__int64 a1, int a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  char v10; // si
  void *v11; // r15
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  char *ErrorLogEntry; // rax
  _WORD *v20; // rdi
  void *v21; // r15
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  void *v28; // rdx
  unsigned __int16 v29; // ax
  char *v30; // rbx
  _BYTE v31[8]; // [rsp+58h] [rbp-11h] BYREF
  volatile signed __int32 *v32; // [rsp+60h] [rbp-9h]
  _BYTE v33[8]; // [rsp+68h] [rbp-1h] BYREF
  volatile signed __int32 *v34; // [rsp+70h] [rbp+7h]
  _BYTE v35[8]; // [rsp+78h] [rbp+Fh] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp+17h]
  _BYTE v37[8]; // [rsp+88h] [rbp+1Fh] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp+27h]
  int EntrySize; // [rsp+C8h] [rbp+5Fh] BYREF

  v5 = a5;
  v6 = a4;
  EntrySize = 0;
  v10 = 0;
  if ( (unsigned int)sub_14006A9BC(a1 - 352, a3, a4, a5, (char *)&EntrySize) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v33)
                     + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v31);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400A6AA8(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v15,
        4,
        12,
        (__int64)&unk_1400D8BA0,
        (__int64)v11,
        (__int64)v12,
        (__int64)qword_1400B7720,
        EntrySize,
        a2);
      v10 = 3;
    }
    if ( (v10 & 2) != 0 )
    {
      v17 = v32;
      v10 &= ~2u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v10 & 1) != 0 )
    {
      v18 = v34;
LABEL_15:
      if ( v18 && !_InterlockedDecrement(v18 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( !_InterlockedDecrement(v18 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  else
  {
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*(PVOID *)(a1 + 16), EntrySize);
    v20 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = a2;
      *(_QWORD *)(ErrorLogEntry + 20) = 0LL;
      *(_DWORD *)ErrorLogEntry = 0;
      *((_DWORD *)ErrorLogEntry + 4) = 0;
      if ( (_BYTE)v6 && a3 )
      {
        *((_WORD *)ErrorLogEntry + 1) = v6;
        sub_1400B6980(ErrorLogEntry + 40, a3, v6);
      }
      if ( v5 )
      {
        v28 = &unk_1400D44E0;
        v29 = v20[1] + 40;
        v20[2] = 1;
        v20[3] = v29;
        v30 = (char *)v20 + v29;
        if ( *(_QWORD *)(v5 + 16) )
          v28 = *(void **)(v5 + 16);
        sub_1400B6980((char *)v20 + v29, v28, 2LL * *(_QWORD *)(v5 + 24));
        *(_WORD *)&v30[2 * *(_QWORD *)(v5 + 24)] = 0;
      }
      IoWriteErrorLogEntry(v20);
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = &unk_1400D44E0;
        v22 = &unk_1400D44E0;
        v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                      a1 - 296,
                                      v37)
                       + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v35);
        LOBYTE(v25) = 2;
        v26 = *(void **)(*(_QWORD *)v24 + 16LL);
        if ( v26 )
          v21 = v26;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          v25,
          4,
          13,
          (__int64)&unk_1400D8BA0,
          (__int64)v21,
          (__int64)v22,
          (__int64)qword_1400B7720,
          a2);
        v10 = 12;
      }
      if ( (v10 & 8) != 0 )
      {
        v27 = v36;
        v10 &= ~8u;
        if ( v36 )
        {
          if ( !_InterlockedDecrement(v36 + 2) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( !_InterlockedDecrement(v27 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      if ( (v10 & 4) != 0 )
      {
        v18 = v38;
        goto LABEL_15;
      }
    }
  }
}
