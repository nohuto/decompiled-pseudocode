/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C010C7C0
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C010C5D0 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C01600BC (-vComputePageXform@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E600 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r15d
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  int v11; // xmm3_4
  int v12; // xmm0_4
  __int64 v13; // rax
  int v14; // xmm1_4
  __int64 v15; // rcx
  __int128 v16; // xmm0
  unsigned int v17; // ecx
  unsigned int v18; // edx
  INT v19; // ebx
  __int128 v20; // [rsp+28h] [rbp-29h] BYREF
  __int64 v21; // [rsp+38h] [rbp-19h]
  int v22; // [rsp+40h] [rbp-11h]
  _QWORD v23[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v24[40]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+2Fh]
  __int64 v26; // [rsp+88h] [rbp+37h]

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 122) + 108LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 122);
  v6 = v5[26];
  if ( a2 == v6 && a2 != 7 )
    goto LABEL_56;
  if ( a2 == 1 )
  {
    v5[79] = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = ef16;
    *((_DWORD *)this + 107) = ef16;
    *(_DWORD *)(*((_QWORD *)this + 122) + 396LL) = ef16;
    v7 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 108) = ef16;
    *((_DWORD *)this + 80) = ef16;
    *((_DWORD *)this + 83) = ef16;
    *((_DWORD *)this + 88) = 11;
    *(_OWORD *)(v7 + 32) = *((_OWORD *)this + 20);
    *(_OWORD *)(v7 + 48) = *((_OWORD *)this + 21);
    *(_DWORD *)(v7 + 64) = *((_DWORD *)this + 88);
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x3090u;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF8BF;
    goto LABEL_54;
  }
  if ( a2 == 8 )
  {
    v5[26] = 8;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
    goto LABEL_54;
  }
  if ( (unsigned int)(a2 - 1) > 7 )
    return 0LL;
  v8 = v5[102];
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 6);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
    v26 = 0LL;
    v25 = 0LL;
    v23[0] = 0LL;
    v20 = 0LL;
    v22 = 1;
    if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(v9 + 48);
      v21 = v9;
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = *(_DWORD *)(v9 + 2152);
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(v9 + 2156);
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v9 + 2144) + 50) / 0x64u;
      v18 = (*(_DWORD *)(v9 + 2148) + 50) / 0x64u;
    }
    else
    {
      if ( a2 != 3 )
      {
        switch ( a2 )
        {
          case 4:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v9 + 2144) + 127) / 0xFEu;
            v17 = (*(_DWORD *)(v9 + 2148) + 127) / 0xFEu;
            break;
          case 5:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v9 + 2144), 10, 254);
            v17 = EngMulDiv(*(_DWORD *)(v9 + 2148), 10, 254);
            break;
          case 6:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v9 + 2144), 144, 2540);
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(v9 + 2148), 144, 2540);
            if ( *((float *)this + 111) == 0.0 )
            {
              DC::vComputePageXform(this);
              v11 = *((_DWORD *)this + 108);
              *((_DWORD *)this + 111) = *((_DWORD *)this + 107);
              *((_DWORD *)this + 112) = v11;
            }
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
            v12 = *((_DWORD *)this + 111);
            *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v12;
            v13 = *((_QWORD *)this + 122);
            v14 = *((_DWORD *)this + 112);
            *((_DWORD *)this + 107) = v12;
            *(_DWORD *)(v13 + 396) = v14;
            v15 = *((_QWORD *)this + 122);
            *((_DWORD *)this + 80) = *((_DWORD *)this + 111);
            *((_DWORD *)this + 83) = *((_DWORD *)this + 112);
            *((_DWORD *)this + 88) = 9;
            v16 = *((_OWORD *)this + 20);
            *((_DWORD *)this + 108) = v14;
            *(_OWORD *)(v15 + 32) = v16;
            *(_OWORD *)(v15 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v15 + 64) = *((_DWORD *)this + 88);
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x22D0u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE2FF;
            goto LABEL_36;
          case 7:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v9 + 2144) + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = (*(_DWORD *)(v9 + 2148) + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_35:
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_36:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
            if ( v23[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v23);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
            goto LABEL_54;
          default:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
            if ( v23[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v23);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
            return 0LL;
        }
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v17;
LABEL_34:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
        goto LABEL_35;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v9 + 2144) + 5) / 0xAu;
      v18 = (*(_DWORD *)(v9 + 2148) + 5) / 0xAu;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v18;
    goto LABEL_34;
  }
  v5[83] = v8;
  *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(*((_QWORD *)this + 122) + 412LL);
  switch ( a2 )
  {
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_52;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
      goto LABEL_52;
    case 4:
      v19 = 1000;
      goto LABEL_47;
    case 5:
      v19 = 10000;
      goto LABEL_47;
    case 6:
      v19 = 14400;
LABEL_47:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v19, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v19, 254);
LABEL_52:
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
      *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
      goto LABEL_53;
  }
  if ( a2 != 7 )
    return 0LL;
  *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 416LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 122) + 420LL);
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_53:
  *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_54:
  if ( (v2 & 7) != 0 )
    DC::dwSetLayout(this, -1, v2);
LABEL_56:
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v6;
}
