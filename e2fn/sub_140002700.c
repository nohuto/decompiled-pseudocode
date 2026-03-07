__int64 __fastcall sub_140002700(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  volatile signed __int32 *v7; // rbx

  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = &off_1400D4540;
  *(_QWORD *)(a1 + 8) = 0xA5A5A5A5A5000003uLL;
  *(_QWORD *)a1 = &off_1400D4588;
  *(_QWORD *)(a1 + 24) = 0xA5A5A5A5A5000009uLL;
  *(_QWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  *(_QWORD *)(a1 + 40) = &off_1400D41D0;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( a1 + 40 != a2 )
    sub_1400011A8((_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = 0;
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return a1;
}
