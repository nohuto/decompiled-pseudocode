__int64 __fastcall sub_140111D8C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  char v5; // bl
  __int64 *v7; // r14
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  __int64 v13; // rsi
  const wchar_t *v14; // r13
  const wchar_t *v15; // rdi
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int64 v22; // rdi
  const wchar_t *v23; // r13
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  unsigned int v30; // r12d
  const wchar_t *v31; // r13
  const wchar_t *v32; // rdi
  const wchar_t *v33; // rax
  __int64 v34; // rsi
  const wchar_t *v35; // rax
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  volatile signed __int32 *v43; // rdi
  const wchar_t *v44; // r13
  const wchar_t *v45; // rdi
  const wchar_t *v46; // rax
  const wchar_t *v47; // rax
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v55; // [rsp+60h] [rbp-A8h]
  __int128 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-90h]
  __int128 v58; // [rsp+88h] [rbp-80h]
  void *v59; // [rsp+98h] [rbp-70h]
  _BYTE v60[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v61; // [rsp+A8h] [rbp-60h]
  _BYTE v62[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v63; // [rsp+B8h] [rbp-50h]
  _BYTE v64[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v65; // [rsp+C8h] [rbp-40h]
  _BYTE v66[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v67; // [rsp+D8h] [rbp-30h]
  _BYTE v68[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v69; // [rsp+E8h] [rbp-20h]
  _BYTE v70[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v71; // [rsp+F8h] [rbp-10h]
  _BYTE v72[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v73; // [rsp+108h] [rbp+0h]
  _BYTE v74[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v75; // [rsp+118h] [rbp+10h]
  _BYTE v76[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v77; // [rsp+128h] [rbp+20h]
  _DWORD v78[6]; // [rsp+138h] [rbp+30h] BYREF
  bool (__fastcall *v79)(__int64, char); // [rsp+150h] [rbp+48h]
  _UNKNOWN **(__fastcall *v80)(__int64); // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+178h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+78h]
  int v83; // [rsp+194h] [rbp+8Ch]

  v5 = 0;
  v7 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterrupt::Initialize", a1);
      if ( v12 )
        v7 = v12;
    }
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_1400DF678 + 2440))(
          qword_1400DF6A8,
          a3,
          *(unsigned int *)(a1 + 440));
  if ( v13 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_1400DF678 + 2440))(
            qword_1400DF6A8,
            a2,
            *(unsigned int *)(a1 + 440));
    if ( v22 )
    {
      sub_1400B6C40((char *)v78, 0, 0x68uLL);
      if ( byte_1400DF688 )
      {
        if ( (unsigned int)dword_1400DF0C0 <= 0x1D )
          v78[0] = -1;
        else
          v78[0] = stru_1400DF410.Queue.ListEntry.Flink[14].Blink;
      }
      else
      {
        v78[0] = 104;
      }
      v78[4] = 2;
      v83 = 2;
      v79 = sub_14006CD00;
      v80 = sub_14006CC60;
      v81 = v22;
      v82 = v13;
      v59 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      if ( byte_1400DF688 )
      {
        if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
          LODWORD(v56) = -1;
        else
          LODWORD(v56) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
      }
      else
      {
        LODWORD(v56) = 56;
      }
      v59 = off_1400DF318;
      *((_QWORD *)&v57 + 1) = 0x100000001LL;
      v30 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int128 *, __int64))(qword_1400DF678 + 1128))(
              qword_1400DF6A8,
              a4,
              v78,
              &v56,
              a1 + 448);
      if ( v30 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v31 = (const wchar_t *)&unk_1400D44E0;
          v32 = (const wchar_t *)&unk_1400D44E0;
          v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v68)
                                  + 16LL);
          if ( v33 )
            v32 = v33;
          v34 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v70)
                                  + 16LL);
          if ( v35 )
            v31 = v35;
          sub_1400A5E80(
            v34,
            2u,
            4u,
            0xCu,
            (__int64)&unk_1400D8D98,
            v32,
            v31,
            L"WdfInterruptCreate(device, &interruptConfig, &attributes, &m_interrupt)");
          v5 = 48;
        }
        if ( (v5 & 0x20) != 0 )
        {
          v36 = v69;
          v5 &= ~0x20u;
          if ( v69 )
          {
            if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
        }
        if ( (v5 & 0x10) != 0 )
        {
          v37 = v71;
          if ( v71 )
          {
            if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
              if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
            }
          }
        }
        sub_14000F65C(
          a1,
          (__int64)L"WdfInterruptCreate(device, &interruptConfig, &attributes, &m_interrupt)",
          85,
          139,
          v30);
        if ( v7 )
        {
          sub_14005B5AC(v7);
          ExFreePool(v7);
        }
        v38 = (volatile signed __int32 *)a5[1];
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
            if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
          }
        }
        return v30;
      }
      else
      {
        *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                     qword_1400DF6A8,
                     *(_QWORD *)(a1 + 448),
                     off_1400DF318) = a1;
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a5 + 8LL))(*a5, &v54);
        v39 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v54 + 8LL))(v54, v72);
        v40 = *(_QWORD *)(a1 + 464);
        *(_QWORD *)(a1 + 464) = v39[1];
        v41 = *v39;
        v39[1] = v40;
        v42 = *(_QWORD *)(a1 + 456);
        *(_QWORD *)(a1 + 456) = v41;
        *v39 = v42;
        v43 = v73;
        if ( v73 )
        {
          if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
            if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
        if ( *(_QWORD *)(a1 + 456) )
        {
          v52 = v55;
          if ( v55 )
          {
            if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
              if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
            }
          }
          if ( v7 )
          {
            sub_14005B5AC(v7);
            ExFreePool(v7);
          }
          v53 = (volatile signed __int32 *)a5[1];
          if ( v53 )
          {
            if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
              if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
            }
          }
          return 0LL;
        }
        else
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v44 = (const wchar_t *)&unk_1400D44E0;
            v45 = (const wchar_t *)&unk_1400D44E0;
            v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 16LL))(
                                                   a1 + 56,
                                                   v76)
                                    + 16LL);
            if ( v46 )
              v45 = v46;
            v47 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 24LL))(
                                                   a1 + 56,
                                                   v74)
                                    + 16LL);
            if ( v47 )
              v44 = v47;
            sub_1400A3320(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              4u,
              0xDu,
              (__int64)&unk_1400D8D98,
              v44,
              v45,
              L"m_interruptLock");
            v5 = -64;
          }
          if ( v5 < 0 )
          {
            v48 = v75;
            v5 &= ~0x80u;
            if ( v75 )
            {
              if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
                if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
              }
            }
          }
          if ( (v5 & 0x40) != 0 )
          {
            v49 = v77;
            if ( v77 )
            {
              if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
                if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
              }
            }
          }
          sub_14000B1BC(a1, (__int64)L"m_interruptLock", 92, 139);
          v50 = v55;
          if ( v55 )
          {
            if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
              if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
            }
          }
          if ( v7 )
          {
            sub_14005B5AC(v7);
            ExFreePool(v7);
          }
          v51 = (volatile signed __int32 *)a5[1];
          if ( v51 )
          {
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
              if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
            }
          }
          return 3221225495LL;
        }
      }
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v23 = (const wchar_t *)&unk_1400D44E0;
        v24 = (const wchar_t *)&unk_1400D44E0;
        v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v66)
                                + 16LL);
        if ( v25 )
          v24 = v25;
        v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v64)
                                + 16LL);
        if ( v26 )
          v23 = v26;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          4u,
          0xBu,
          (__int64)&unk_1400D8D98,
          v23,
          v24,
          L"interruptRaw");
        v5 = 12;
      }
      if ( (v5 & 8) != 0 )
      {
        v27 = v65;
        v5 &= ~8u;
        if ( v65 )
        {
          if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      if ( (v5 & 4) != 0 )
      {
        v28 = v67;
        if ( v67 )
        {
          if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      sub_14000BA2C(a1, (__int64)L"interruptRaw", 71, 139);
      if ( v7 )
      {
        sub_14005B5AC(v7);
        ExFreePool(v7);
      }
      v29 = (volatile signed __int32 *)a5[1];
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      return 3221225635LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v62)
                              + 16LL);
      if ( v16 )
        v15 = v16;
      v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v60)
                              + 16LL);
      if ( v17 )
        v14 = v17;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        4u,
        0xAu,
        (__int64)&unk_1400D8D98,
        v14,
        v15,
        L"descriptor");
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v18 = v61;
      v5 &= ~2u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v19 = v63;
      if ( v63 )
      {
        if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_14000B87C(a1, (__int64)L"descriptor", 68, 139);
    if ( v7 )
    {
      sub_14005B5AC(v7);
      ExFreePool(v7);
    }
    v20 = (volatile signed __int32 *)a5[1];
    if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return 3221225858LL;
  }
}
