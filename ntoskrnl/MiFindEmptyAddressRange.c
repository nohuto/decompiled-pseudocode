/*
 * XREFs of MiFindEmptyAddressRange @ 0x1407D6F10
 * Callers:
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x14034D0A0 (RtlFindClearBitsEx.c)
 *     MiExpandVadBitMap @ 0x1407295BC (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140769234 (MiFindEmptyAddressRangeInTree.c)
 *     MiFindClearVadBitsAligned @ 0x14076D150 (MiFindClearVadBitsAligned.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r10
  int v13; // esi
  _DWORD *v14; // r11
  _KPROCESS *Process; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 result; // rax
  int v27; // eax
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  bool v33; // cf
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39[10]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v42; // [rsp+B8h] [rbp+20h]
  unsigned __int64 v43; // [rsp+C0h] [rbp+28h]
  _KPROCESS *v44; // [rsp+C8h] [rbp+30h]

  v42 = a4;
  v40 = a2;
  v9 = a6;
  v10 = a3;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v13 = 1;
  v14 = a9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = Process;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v27 = *(_DWORD *)(a1 + 64);
    v28 = *(_QWORD *)(a1 + 48);
    v29 = Process[1].ActiveProcessors.StaticBitmap[5];
    v30 = v28 >> 16;
    v38 = v30;
    v43 = (unsigned __int8)v27;
    if ( v29 > 0x100000000LL )
      v38 = (v29 >> 16) - (unsigned __int8)v30 - 1;
    if ( !(_BYTE)v27 )
      v43 = 1LL;
  }
  else
  {
    v13 = 0;
    v43 = 0LL;
    v38 = 0LL;
  }
  if ( a4 )
    goto LABEL_42;
  if ( v10 == 0x10000 )
  {
    v16 = a2 + 0xFFFF;
    goto LABEL_7;
  }
  if ( v10 - 0x200000 > 0x7FE00000 || ((v10 - 1) & a2) != 0 )
  {
LABEL_42:
    *a9 = 0;
    if ( v13 && v9 > v38 << 16 )
      v9 = v38 << 16;
    goto LABEL_43;
  }
  v16 = a2;
LABEL_7:
  v17 = v16 >> 16;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v39 = *(_OWORD *)a1;
    if ( v17 != 1 && v17 >= *(_QWORD *)(a1 + 24) )
      v18 = *(_QWORD *)(a1 + 32);
    v19 = v39[1];
    v20 = (v39[1] - qword_140C66CE8) << 19;
    if ( v9 <= v20 )
      goto LABEL_41;
    if ( a5 && (v35 = (a5 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL, v35 > v20) )
    {
      v36 = (v35 - v20) >> 16;
      if ( v39[0] <= v36 )
        goto LABEL_41;
      v21 = v39[0] - v36;
      v19 = (v36 >> 3) + v39[1];
      v39[0] -= v36;
      v39[1] = v19;
    }
    else
    {
      v21 = v39[0];
    }
    if ( v9 && v9 >> 16 < *(_QWORD *)(a1 + 40) && v9 + 1 > v20 && v21 > (v9 + 1 - v20) >> 16 )
    {
      v21 = (v9 + 1 - v20) >> 16;
      v39[0] = v21;
    }
    if ( v17 > v21 )
      goto LABEL_41;
    v22 = (-524288 * qword_140C66CE8 + (v19 << 19)) >> 16;
    if ( v13 && (v22 + v18 < v43 || v22 + v18 >= v38) )
    {
      v18 = v43;
      *v14 = 0;
    }
    if ( v10 == 0x10000 )
    {
      ClearBits = RtlFindClearBitsEx(v39, v17, v18);
      v19 = v39[1];
    }
    else
    {
      ClearBits = MiFindClearVadBitsAligned(v39, v10, v17, v18);
    }
    v24 = ClearBits;
    if ( ClearBits != -1LL )
    {
      v25 = (ClearBits + 8 * (v19 - qword_140C66CE8)) << 16;
      if ( v25 < a5 || v25 + (v17 << 16) - 1 > v9 )
      {
        v10 = a3;
LABEL_41:
        a2 = v40;
        a4 = v42;
        Process = v44;
        goto LABEL_42;
      }
      if ( !v13 || v22 + v24 >= v43 && v22 + v24 < v38 )
      {
        *a8 = v25;
        return 0LL;
      }
    }
    if ( !(unsigned int)MiExpandVadBitMap((unsigned __int64 *)a1, v17) )
      break;
    v10 = a3;
    v14 = a9;
  }
  if ( v13 )
    return 3221225495LL;
  a2 = v40;
  v10 = a3;
  a4 = v42;
  Process = v44;
  *a9 = 0;
LABEL_43:
  v31 = *(_QWORD *)(a1 + 56);
  v32 = a5;
  if ( v31 > a5 )
    v32 = *(_QWORD *)(a1 + 56);
  v33 = v32 < v9;
  if ( v32 > v9 )
  {
    if ( ((__int64)Process[2].ReadyListHead.Blink & 0x20) == 0 || (v34 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v34 = 0xFFFFFFLL;
    v32 &= v34;
    if ( !v32 || v32 > v9 )
      v32 = 0x10000LL;
    if ( v32 < v31 && v13 )
      v32 = v43 << 16;
    if ( v32 < a5 )
      v32 = a5;
    v33 = v32 < v9;
  }
  if ( !v33 || v9 - v32 + 1 < a2 )
    return 3221225495LL;
  result = MiFindEmptyAddressRangeInTree((_QWORD **)&Process[1].Spare2[15], a2, v10, a4, v32, v9, a8);
  if ( (int)result < 0 )
  {
    v37 = v43 << 16;
    if ( !v13 )
      v37 = 0x10000LL;
    if ( v37 < a5 )
      v37 = a5;
    if ( v37 < v32 )
      return MiFindEmptyAddressRangeInTree((_QWORD **)&Process[1].Spare2[15], v40, a3, v42, v37, v9, a8);
  }
  return result;
}
