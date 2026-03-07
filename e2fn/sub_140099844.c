__int64 __fastcall sub_140099844(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r15d
  __int64 v4; // rcx
  unsigned int v5; // ebp
  unsigned int i; // esi
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int16 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  _WORD *v13; // r14
  __int16 v14; // cx
  __int64 result; // rax
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 456);
  v16 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 48LL))(v2, &v16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 384);
  v5 = *(_DWORD *)(v4 + 48);
  for ( i = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 48LL); v3 < v16; i = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 8LL) & (i + 1) )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 784), 1uLL);
    v7 = *(_QWORD *)(a1 + 376);
    v8 = i * (unsigned __int64)*(unsigned __int16 *)(v7 + 2);
    v9 = (unsigned __int16 *)(*(_QWORD *)(a1 + 560) + 8LL * *(unsigned int *)(a1 + 572));
    if ( (v9[1] & 1) != 0 || (v10 = *v9, !(_WORD)v10) )
    {
      *(_BYTE *)(v8 + v7 + 75) |= 1u;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 792), 1uLL);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 800), *v9 == 0);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 384);
      v12 = v5 * (unsigned __int64)*(unsigned __int16 *)(v11 + 2);
      *(_QWORD *)(v12 + v11 + 64) = *(_QWORD *)(v12 + v11 + 64) & 0xC00FFFFFFC000000uLL | v10 & 0xC00FFFFFFFFFFFFFuLL;
      *(_BYTE *)(v8 + v7 + 75) &= ~1u;
      *(_WORD *)(v8 + v7 + 68) = 1;
      *(_DWORD *)(v8 + v7 + 64) = v5;
      sub_140099700((volatile signed __int64 *)a1, (__int64)v9, v8 + v7 + 70);
      if ( *(_BYTE *)(a1 + 736) )
        sub_1400995DC(a1, (__int64)v9, (_BYTE *)(*(_QWORD *)(a1 + 704) + *(_QWORD *)(a1 + 712) * i));
      if ( (*(_BYTE *)(a1 + 776) & (v9[1] >> 11) & 1) != 0 )
      {
        v13 = (_WORD *)(*(_QWORD *)(a1 + 744) + *(_QWORD *)(a1 + 752) * i);
        v14 = *v13 ^ (v9[3] ^ *v13) & 7;
        *v13 = v14;
        *v13 = v14 ^ (v14 ^ (8 * v9[2])) & 0x7FF8;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 928), 1uLL);
      }
    }
    ++v3;
    v4 = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 572) = *(_DWORD *)(a1 + 472) & (*(_DWORD *)(a1 + 572) + 1);
    v5 = (v5 + 1) & *(_DWORD *)(v4 + 8);
  }
  *(_DWORD *)(v4 + 48) = v5;
  result = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(result + 48) = i;
  return result;
}
