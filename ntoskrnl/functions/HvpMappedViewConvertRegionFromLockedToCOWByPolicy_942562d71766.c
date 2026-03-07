__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  _BYTE *v6; // r14
  __int64 v8; // rbp
  int v11; // r15d
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  v17 = 0;
  v6 = (_BYTE *)(a3 + v4);
  v8 = a3;
  v11 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), (__int64)v6, a4 - a3, 8u, (__int64)&v17);
  if ( v11 >= 0 )
  {
    HvpViewMapTouchPages(v6, v5, 1);
    v13 = CmSiProtectViewOfSection(v12, *(__int64 **)(a1 + 24), (__int64)v6, v5, 2u, (__int64)&v17);
    v14 = *(__int64 **)(a1 + 24);
    v11 = v13;
    CmSiUnlockViewOfSection(v15, v14, (__int64)v6, v5);
    CmSiReleaseProcessLockedPagesCharge(v14, v5);
    while ( v8 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v8 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v8 += 4096LL;
    }
    a2[8] -= v5 >> 12;
  }
  return (unsigned int)v11;
}
