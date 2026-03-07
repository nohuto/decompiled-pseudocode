__int64 __fastcall sub_1400911B8(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // edi
  unsigned int v12; // r15d
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  void *v21; // rsi
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rdx
  void *v31; // r15
  void *v32; // rsi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // r14
  volatile signed __int32 *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  void *v41; // r15
  __int64 v42; // rcx
  void *v43; // rsi
  void *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  int v47; // edx
  void *v48; // rax
  volatile signed __int32 *v49; // r14
  volatile signed __int32 *v50; // rsi
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v53[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  _QWORD v56[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  _BYTE v59[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v60; // [rsp+A8h] [rbp-58h]
  _BYTE v61[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v62; // [rsp+B8h] [rbp-48h]
  _BYTE v63[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v64; // [rsp+C8h] [rbp-38h]
  _BYTE v65[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v66; // [rsp+D8h] [rbp-28h]
  _BYTE v67[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v68; // [rsp+E8h] [rbp-18h]
  _BYTE v69[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v70; // [rsp+F8h] [rbp-8h]
  _BYTE v71[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v72; // [rsp+108h] [rbp+8h]
  _BYTE v73[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v74; // [rsp+118h] [rbp+18h]
  int v75; // [rsp+160h] [rbp+60h]
  unsigned int v76; // [rsp+168h] [rbp+68h]

  v4 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::UpdateFlexibleFiltersList", a1);
      if ( v7 )
        v5 = v7;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 112LL))(*(_QWORD *)(a1 + 520));
  v9 = *(_DWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 8);
  v52 = 0LL;
  v11 = *(unsigned __int16 *)(v8 + 2);
  v75 = *(_DWORD *)(a2 + 32);
  v76 = *(_DWORD *)(a2 + 4);
  v53[0] = off_1400D4D58;
  v56[0] = off_1400D4D58;
  v53[1] = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56[1] = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v12 = sub_14013E214(a1, v10, v9, v11, (__int64)v53);
  if ( v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v61)
                     + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v59);
      LOBYTE(v17) = 2;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v17,
        11,
        54,
        (__int64)&unk_1400D9E10,
        (__int64)v13,
        (__int64)v14,
        (__int64)L"ConvertBitmapPatternToFlexFilter(bitMapFilterParameters.Pattern, bitmapPatternSize, flexFilterSize, fle"
                  "xibleFilter.Pattern)",
        v12);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v19 = v60;
      v4 &= ~2u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v20 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_14008FC00(
      a1,
      (__int64)L"ConvertBitmapPatternToFlexFilter(bitMapFilterParameters.Pattern, bitmapPatternSize, flexFilterSize, flexi"
                "bleFilter.Pattern)",
      554,
      113,
      v12);
  }
  else
  {
    v12 = sub_14013DCDC(a1, *(_QWORD *)(a2 + 24), v75, v11, (__int64)v56);
    if ( v12 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v21 = &unk_1400D44E0;
        v22 = &unk_1400D44E0;
        v23 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                      a1 + 56,
                                      v65)
                       + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v63);
        LOBYTE(v25) = 2;
        v26 = *(void **)(*(_QWORD *)v24 + 16LL);
        if ( v26 )
          v21 = v26;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v25,
          11,
          55,
          (__int64)&unk_1400D9E10,
          (__int64)v21,
          (__int64)v22,
          (__int64)L"ConvertBitmapPatternMaskToFlexFilterMask(bitMapFilterParameters.Mask, bitmapPatternMaskSize, flexFilt"
                    "erSize, flexibleFilter.Mask)",
          v12);
        v4 = 12;
      }
      if ( (v4 & 8) != 0 )
      {
        v27 = v64;
        v4 &= ~8u;
        if ( v64 )
        {
          if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      if ( (v4 & 4) != 0 )
      {
        v28 = v66;
        if ( v66 )
        {
          if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      sub_14008FD4C(
        a1,
        (__int64)L"ConvertBitmapPatternMaskToFlexFilterMask(bitMapFilterParameters.Mask, bitmapPatternMaskSize, flexFilter"
                  "Size, flexibleFilter.Mask)",
        556,
        113,
        v12);
    }
    else
    {
      v52 = __PAIR64__(v9, v76);
      v29 = *(_QWORD *)(a1 + 384);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      if ( v57 && v54 )
      {
        if ( *(_QWORD *)(a1 + 496) )
          v30 = a1 + 400;
        else
          v30 = *(_QWORD *)(a1 + 408);
        sub_1400B4F80(a1 + 400, v30, &v52);
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v31 = &unk_1400D44E0;
          v32 = &unk_1400D44E0;
          v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v69)
                         + 16LL);
          if ( v33 )
            v32 = v33;
          v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v67);
          LOBYTE(v35) = 4;
          v36 = *(void **)(*(_QWORD *)v34 + 16LL);
          if ( v36 )
            v31 = v36;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v35,
            11,
            56,
            (__int64)&unk_1400D9E10,
            (__int64)v31,
            (__int64)v32,
            (__int64)qword_1400B7720,
            *(_DWORD *)(a1 + 496));
          v4 = 48;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v37 = v68;
          v4 &= ~0x20u;
          if ( v68 )
          {
            if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
              if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
            }
          }
        }
        if ( (v4 & 0x10) != 0 )
        {
          v38 = v70;
          if ( v70 )
          {
            if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
              if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
            }
          }
        }
        v12 = 0;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v39 = a1 + 56;
          v40 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v71);
          v41 = &unk_1400D44E0;
          v42 = a1 + 56;
          v43 = &unk_1400D44E0;
          v44 = *(void **)(*(_QWORD *)v40 + 16LL);
          if ( v44 )
            v43 = v44;
          v45 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v46 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v39 + 16LL))(v42, v73);
          LOBYTE(v47) = 2;
          v48 = *(void **)(*(_QWORD *)v46 + 16LL);
          if ( v48 )
            v41 = v48;
          sub_1400A5E80(
            v45,
            v47,
            11,
            57,
            (__int64)&unk_1400D9E10,
            (__int64)v43,
            (__int64)v41,
            (__int64)qword_1400B7720,
            *(_DWORD *)(a2 + 4));
          v4 = -64;
        }
        if ( v4 < 0 )
        {
          v49 = v72;
          v4 &= ~0x80u;
          if ( v72 )
          {
            if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
              if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
            }
          }
        }
        if ( (v4 & 0x40) != 0 )
        {
          v50 = v74;
          if ( v74 )
          {
            if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
              if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
            }
          }
        }
        v12 = -1073741823;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
    }
  }
  sub_1400B4E38(&v52);
  if ( v5 )
  {
    sub_140075108(v5);
    ExFreePool(v5);
  }
  return v12;
}
