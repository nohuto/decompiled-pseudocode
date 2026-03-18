/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C013E220
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C013E030 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C013E9F8 (-vComputePageXform@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026C8D4 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r15d
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v12; // xmm3_4
  int v13; // xmm0_4
  __int64 v14; // rax
  int v15; // xmm1_4
  __int64 v16; // rcx
  __int128 v17; // xmm0
  unsigned int v18; // ecx
  unsigned int v19; // edx
  INT v20; // ebx
  __int128 v21; // [rsp+28h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-19h]
  int v23; // [rsp+40h] [rbp-11h]
  _QWORD v24[2]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v26; // [rsp+80h] [rbp+2Fh]
  __int64 v27; // [rsp+88h] [rbp+37h]

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
    v7 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 107) = ef16;
    *(_DWORD *)(v7 + 396) = ef16;
    *((_DWORD *)this + 108) = ef16;
    *((_DWORD *)this + 80) = ef16;
    v8 = *((_QWORD *)this + 122);
    *((_DWORD *)this + 83) = ef16;
    *((_DWORD *)this + 88) = 11;
    *(_OWORD *)(v8 + 32) = *((_OWORD *)this + 20);
    *(_OWORD *)(v8 + 48) = *((_OWORD *)this + 21);
    *(_DWORD *)(v8 + 64) = *((_DWORD *)this + 88);
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
  v9 = v5[102];
  if ( !v9 )
  {
    v10 = *((_QWORD *)this + 6);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
    v27 = 0LL;
    v26 = 0LL;
    v24[0] = 0LL;
    v21 = 0LL;
    v23 = 1;
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v21 = *(_QWORD *)(v10 + 48);
      v22 = v10;
      GreAcquireSemaphore(v21);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v21, 11LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 332LL) = *(_DWORD *)(v10 + 2120);
    *(_DWORD *)(*((_QWORD *)this + 122) + 336LL) = -*(_DWORD *)(v10 + 2124);
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 50) / 0x64u;
      v19 = (*(_DWORD *)(v10 + 2116) + 50) / 0x64u;
    }
    else
    {
      if ( a2 != 3 )
      {
        switch ( a2 )
        {
          case 4:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 127) / 0xFEu;
            v18 = (*(_DWORD *)(v10 + 2116) + 127) / 0xFEu;
            break;
          case 5:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2112), 10, 254);
            v18 = EngMulDiv(*(_DWORD *)(v10 + 2116), 10, 254);
            break;
          case 6:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(v10 + 2112), 144, 2540);
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(v10 + 2116), 144, 2540);
            if ( *((float *)this + 111) == 0.0 )
            {
              DC::vComputePageXform(this);
              v12 = *((_DWORD *)this + 108);
              *((_DWORD *)this + 111) = *((_DWORD *)this + 107);
              *((_DWORD *)this + 112) = v12;
            }
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = 6;
            v13 = *((_DWORD *)this + 111);
            *(_DWORD *)(*((_QWORD *)this + 122) + 392LL) = v13;
            v14 = *((_QWORD *)this + 122);
            v15 = *((_DWORD *)this + 112);
            *((_DWORD *)this + 107) = v13;
            *(_DWORD *)(v14 + 396) = v15;
            v16 = *((_QWORD *)this + 122);
            *((_DWORD *)this + 80) = *((_DWORD *)this + 111);
            *((_DWORD *)this + 83) = *((_DWORD *)this + 112);
            *((_DWORD *)this + 88) = 9;
            v17 = *((_OWORD *)this + 20);
            *((_DWORD *)this + 108) = v15;
            *(_OWORD *)(v16 + 32) = v17;
            *(_OWORD *)(v16 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v16 + 64) = *((_DWORD *)this + 88);
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x22D0u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE2FF;
            goto LABEL_36;
          case 7:
            *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = (*(_DWORD *)(v10 + 2116) + 50) / 0x64u;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF7BF;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x400u;
LABEL_35:
            *(_DWORD *)(*((_QWORD *)this + 122) + 104LL) = a2;
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x4090u;
LABEL_36:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
            if ( v24[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v24);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
            goto LABEL_54;
          default:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
            if ( v24[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v24);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
            return 0LL;
        }
        *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v18;
LABEL_34:
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFF3FF;
        goto LABEL_35;
      }
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = (*(_DWORD *)(v10 + 2112) + 5) / 0xAu;
      v19 = (*(_DWORD *)(v10 + 2116) + 5) / 0xAu;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = v19;
    goto LABEL_34;
  }
  v5[83] = v9;
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
      v20 = 1000;
      goto LABEL_47;
    case 5:
      v20 = 10000;
      goto LABEL_47;
    case 6:
      v20 = 14400;
LABEL_47:
      *(_DWORD *)(*((_QWORD *)this + 122) + 316LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 416LL), v20, 254);
      *(_DWORD *)(*((_QWORD *)this + 122) + 320LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 122) + 420LL), v20, 254);
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
