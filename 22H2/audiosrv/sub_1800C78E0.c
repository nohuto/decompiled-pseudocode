/*
 * XREFs of sub_1800C78E0 @ 0x1800C78E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BF15C @ 0x1800BF15C (sub_1800BF15C.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800D1C6C @ 0x1800D1C6C (sub_1800D1C6C.c)
 */

__int64 __fastcall sub_1800C78E0(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v4; // rbx
  int v6; // edi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  float *v9; // rax
  __int64 v10; // r8
  float v11; // xmm0_4
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v4 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Eu, (__int64)&unk_18015DEF0, 0LL);
  }
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_30:
    sub_18005E8F8((__int64)"CAudioSession::GetChannelsPeakValues", 1502, v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v4 )
    memset(a3, 0, 4 * v4);
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 432LL))(a1, &v13);
  if ( v6 < 0 )
    goto LABEL_30;
  if ( (_DWORD)v4 != v13 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0x1Fu, (__int64)&unk_18015DEF0, v4);
    }
    v6 = -2147024809;
    goto LABEL_30;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 104) )
  {
    while ( 1 )
    {
      v14 = 0LL;
      if ( v7 >= *(_QWORD *)(a1 + 104) )
LABEL_34:
        sub_1800B8610(-2147024809);
      v6 = 0;
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v7) + 96LL);
      sub_1800BF15C(&v14, v13);
      v8 = v14;
      if ( !v14 )
        break;
      if ( v7 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_34;
      if ( (int)sub_1800D1C6C(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v7), v13, v14) >= 0 && v13 )
      {
        v9 = (float *)a3;
        v10 = v13;
        do
        {
          v11 = *(float *)((char *)v9 + v8 - (_QWORD)a3);
          if ( v11 > *v9 )
            *v9 = v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      _o_free(v8);
      if ( ++v7 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_27;
    }
    v6 = -2147024882;
    _o_free(0LL);
    if ( a1 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    goto LABEL_30;
  }
LABEL_27:
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  return (unsigned int)v6;
}
