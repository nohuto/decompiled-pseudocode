__int64 __fastcall sub_1400FEEE0(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  char v6; // di
  unsigned __int8 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int v12; // ebp
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  const wchar_t *v21; // [rsp+30h] [rbp-58h]
  const wchar_t *v22; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+40h] [rbp-48h]
  _BYTE v24[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-30h]
  _BYTE v26[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-20h]

  v3 = *(unsigned __int8 **)(a2 + 48);
  v4 = (unsigned int)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 56);
  v6 = 0;
  if ( v5 )
  {
    v8 = &v3[v5];
    while ( v3 != v8 )
    {
      v9 = a1[54];
      v10 = *(_QWORD *)(v9 + 8);
      if ( !v10 || *(_DWORD *)(v9 + 20) )
      {
        v12 = -1073741130;
        if ( *(_DWORD *)(v9 + 20) != 3 )
          v12 = -1073741661;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v13 = (const wchar_t *)&unk_1400D44E0;
          v14 = (const wchar_t *)&unk_1400D44E0;
          v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64, __int64))(a1[7] + 16LL))(
                                                 a1 + 7,
                                                 v26,
                                                 v5,
                                                 v4)
                                  + 16LL);
          if ( v15 )
            v14 = v15;
          v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v24);
          v23 = v12;
          v22 = L"m_mmioAccessor->WriteRegisterSafe(maskOffset, maskValue)";
          v21 = v14;
          v17 = *(const wchar_t **)(*(_QWORD *)v16 + 16LL);
          if ( v17 )
            v13 = v17;
          sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x2Au, (__int64)&unk_1400D64E8, v13, v21, v22);
          v6 = 3;
        }
        if ( (v6 & 2) != 0 )
        {
          v18 = v25;
          v6 &= ~2u;
          if ( v25 )
          {
            if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int8 *, __int64, __int64))(*(_QWORD *)v18 + 8LL))(
                v18,
                v8,
                v5,
                v4);
              if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
        }
        if ( (v6 & 1) != 0 )
        {
          v19 = v27;
          if ( v27 )
          {
            if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int8 *, __int64, __int64))(*(_QWORD *)v19 + 8LL))(
                v19,
                v8,
                v5,
                v4);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
            }
          }
        }
        sub_140009AE8((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(maskOffset, maskValue)", 658, 59, v12);
        return v12;
      }
      v5 = *v3;
      *(_DWORD *)(v4 + v10) = v5;
      _InterlockedOr(v20, 0);
      v4 = (unsigned int)(v4 + 16);
      ++v3;
    }
  }
  return 0LL;
}
