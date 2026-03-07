__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // edx
  _BOOL8 v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12

  v2 = a2 + 2;
  v4 = 0LL;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  if ( v5 )
  {
    v6 = -*(_DWORD *)a1;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v6 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v7 = v6 != 0x100000;
    v8 = (unsigned __int64)v6 >> 20;
    v9 = 2 * ((unsigned __int64)(v5 - qword_140C70D88) >> 20);
    v10 = v9 + 2 * v8;
    while ( 1 )
    {
      if ( v9 >= v10 )
        return v5;
      if ( (int)RtlCSparseBitmapBitmaskWrite(&unk_140C70D90, v9, v8, v7 + 1) < 0 )
        break;
      v9 += 2LL;
    }
    RtlpHpSegSegmentFree(a1, v5, v2, 0LL);
  }
  return v4;
}
