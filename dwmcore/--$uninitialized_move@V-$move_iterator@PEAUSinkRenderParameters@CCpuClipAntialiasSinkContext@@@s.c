__int64 __fastcall std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  _QWORD *v4; // r11
  signed __int64 v6; // r10
  __int64 *v8; // rdx
  __int64 v9; // r10
  __int64 i; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // xmm1_8

  v4 = a4 + 2;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)a3 - a2) >> 3);
  if ( v6 < 0 )
  {
    if ( *v4 >= (unsigned __int64)(0x3333333333333333LL * (((__int64)a3 - a2) >> 3)) )
      goto LABEL_4;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v4 < (unsigned __int64)v6 )
    goto LABEL_9;
LABEL_4:
  v8 = (__int64 *)(a2 + 16);
  v9 = *a4;
  for ( i = *a4 + 40LL * *v4; ; i += 40LL )
  {
    v11 = v8 - 2;
    if ( v8 - 2 == a3 )
      break;
    v12 = *v11;
    *v11 = 0LL;
    *(_QWORD *)i = v12;
    *(_DWORD *)(i + 8) = *((_DWORD *)v8 - 2);
    *(_DWORD *)(i + 12) = *((_DWORD *)v8 - 1);
    v13 = *v8;
    *v8 = 0LL;
    *(_QWORD *)(i + 16) = v13;
    v14 = v8[1];
    v8[1] = 0LL;
    *(_QWORD *)(i + 24) = v14;
    *(_BYTE *)(i + 32) = *((_BYTE *)v8 + 16);
    *(_BYTE *)(i + 33) = *((_BYTE *)v8 + 17);
    v8 += 5;
  }
  result = a1;
  *v4 = 0xCCCCCCCCCCCCCCCDuLL * ((i - v9) >> 3);
  v16 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v16;
  return result;
}
