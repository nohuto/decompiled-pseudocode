/*
 * XREFs of sub_140B0FCB0 @ 0x140B0FCB0
 * Callers:
 *     <none>
 * Callees:
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 *     RtlMinimalBarrier @ 0x140B1092C (RtlMinimalBarrier.c)
 */

__int64 __fastcall sub_140B0FCB0(__int64 a1)
{
  _DWORD *v2; // rcx
  _BYTE *v3; // rdx
  __int64 v4; // rdi
  int v5; // r8d
  __int64 v6; // r15
  __int64 v7; // r9
  _KIDTENTRY64 *IdtBase; // r10
  _WORD *v9; // r13
  char *v10; // rcx
  char v11; // al
  _WORD *v12; // r12
  int v13; // r8d
  _BYTE *v14; // rdx
  char *v15; // rcx
  __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rax
  char *v24; // rcx
  char v25; // al
  unsigned __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  char *v35; // r12
  _QWORD *v36; // r13
  unsigned int v37; // r15d
  __int64 v38; // r9
  __int64 v39; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  int v43; // edx
  __int64 v44; // r8
  char v45; // al
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  int v48; // r15d
  int v49; // eax
  __int64 v50; // rcx
  _QWORD *v51; // rdi
  char *v52; // rcx
  int v53; // edx
  __int64 v54; // r8
  char v55; // al
  int v56; // edx
  char *v57; // rcx
  __int64 v58; // r8
  char v59; // al
  __int64 v61; // [rsp+20h] [rbp-88h]
  _BYTE v62[16]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v63[16]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v64[12]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v65; // [rsp+B0h] [rbp+8h]
  __int64 *v66; // [rsp+C8h] [rbp+20h]

  v2 = *(_DWORD **)(a1 + 2656);
  if ( *v2 == 44 )
  {
    _disable();
    RtlMinimalBarrier(a1 + 2624, 0LL);
    v65 = *(_QWORD *)(a1 + 2664);
    do
    {
      v3 = v62;
      v4 = *(_QWORD *)(a1 + 2240);
      v5 = 16;
      v6 = *(unsigned int *)(a1 + 2292);
      v7 = 2LL;
      IdtBase = KeGetPcr()->IdtBase;
      v9 = (_WORD *)(v4 + 32);
      v10 = (char *)(v4 + 32);
      do
      {
        v5 -= 8;
        *(_QWORD *)v3 = *(_QWORD *)v10;
        v10 += 8;
        v3 += 8;
        --v7;
      }
      while ( v7 );
      for ( ; v5; --v5 )
      {
        v11 = *v10++;
        *v3++ = v11;
      }
      v12 = (_WORD *)(v4 + 288);
      v13 = 16;
      v14 = v63;
      v15 = (char *)(v4 + 288);
      v16 = 2LL;
      do
      {
        v13 -= 8;
        *(_QWORD *)v14 = *(_QWORD *)v15;
        v15 += 8;
        v14 += 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *v15++;
        *v14++ = v17;
      }
      v66 = (__int64 *)(*(_QWORD *)(a1 + 1496) + (((unsigned __int64)IdtBase >> 9) & 0x7FFFFFFFF8LL));
      v61 = *v66;
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        v18 = v6 + a1 + 16;
        v19 = (_QWORD *)(v4 + 1024);
        *v9 = v18;
        v20 = v18 >> 16;
        v21 = 4096;
        v22 = 512LL;
        *(_DWORD *)(v4 + 40) = HIDWORD(v18);
        v23 = v6 + a1 + 144;
        *(_WORD *)(v4 + 38) = v20;
        *v12 = v23;
        *(_WORD *)(v4 + 294) = WORD1(v23);
        v24 = (char *)v65;
        *(_DWORD *)(v4 + 296) = HIDWORD(v23);
        do
        {
          v21 -= 8;
          *v19 = *(_QWORD *)v24;
          v24 += 8;
          ++v19;
          --v22;
        }
        while ( v22 );
        for ( ; v21; --v21 )
        {
          v25 = *v24++;
          *(_BYTE *)v19 = v25;
          v19 = (_QWORD *)((char *)v19 + 1);
        }
        *(_DWORD *)(a1 + 2206) = -255817396;
        v26 = v64;
        *(_DWORD *)(a1 + 2210) = 296816456;
        *(_DWORD *)(a1 + 2214) = -1010789361;
        LODWORD(v27) = 4;
        *(_QWORD *)(v4 + 5128) = v65;
        v28 = 4LL;
        *(_QWORD *)(v4 + 5136) = v65;
        *(_QWORD *)(v4 + 5120) = a1;
        *(_DWORD *)(v4 + 5172) = -1;
        *(_DWORD *)(v4 + 5168) = 4;
        v29 = *(_QWORD *)(a1 + 1496);
        v30 = v29 + ((v65 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v26++ = v30;
          v30 = v29 + ((v30 >> 9) & 0x7FFFFFFFF8LL);
          --v28;
        }
        while ( v28 );
        do
          v27 = (unsigned int)(v27 - 1);
        while ( (_DWORD)v27 && (*(_DWORD *)v64[v27] & 0x80) == 0 );
        v31 = (_QWORD *)v64[v27];
        *(_QWORD *)(v4 + 5160) = v31;
        *(_QWORD *)(v4 + 5152) = *v31;
      }
      v32 = a1 + 2624;
      RtlMinimalBarrier(a1 + 2624, 0LL);
      *v66 = v61 ^ (v61 ^ (*(_QWORD *)(v4 + 5144) << 12)) & 0xFFFFFFFFFF000LL;
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152) | 0x42LL;
      v33 = __readcr4();
      if ( (v33 & 0x20080) != 0 )
      {
        __writecr4(v33 ^ 0x80);
        __writecr4(v33);
      }
      else
      {
        v34 = __readcr3();
        __writecr3(v34);
      }
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
        _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFB);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        v35 = (char *)(v4 + 1024);
        v36 = (_QWORD *)(v4 + 1024);
        *(_DWORD *)(v4 + 5172) = KeGetPcr()->Prcb.Number;
        v37 = 0;
        while ( 1 )
        {
          v38 = a1 + 2206;
          v39 = v37;
          if ( (*(_DWORD *)(a1 + 2452) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            **(_QWORD **)(a1 + 1208) = a1 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(a1 + 1216) = CurrentPrcb;
            **(_QWORD **)(a1 + 1224) = v37 + v65;
            **(_QWORD **)(a1 + 1232) = 276LL;
          }
          *(_QWORD *)(v4 + 5136) = v37 + v65;
          v41 = 2LL;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 5168), 2, 0) )
            break;
          if ( (v37 & 7) == 0
            && !((unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))(a1 + 2206))(
                  v37 + v65,
                  0xC3C3C3C3C3C3C3C3uLL,
                  *v36) )
          {
            _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFD);
            break;
          }
          ((void (__fastcall *)(__int64, __int64, __int64, __int64))(a1 + 2195))(v4 + 5136, v41, v39, v38);
          _InterlockedAnd((volatile signed __int32 *)(v4 + 5168), 0xFFFFFFFD);
          ++v37;
          v36 = (_QWORD *)((char *)v36 + 1);
          if ( v37 >= 0x1000 )
          {
            if ( v37 == 4096 )
              goto LABEL_38;
            break;
          }
        }
        _InterlockedOr((volatile signed __int32 *)(v4 + 5168), 8u);
        *(_QWORD *)(v4 + 5136) = v65 + 4095;
LABEL_38:
        v42 = (_QWORD *)v65;
        v43 = 4096;
        v44 = 512LL;
        do
        {
          v43 -= 8;
          *v42 = *(_QWORD *)v35;
          v35 += 8;
          ++v42;
          --v44;
        }
        while ( v44 );
        for ( ; v43; --v43 )
        {
          v45 = *v35++;
          *(_BYTE *)v42 = v45;
          v42 = (_QWORD *)((char *)v42 + 1);
        }
        _InterlockedOr((volatile signed __int32 *)(v4 + 5168), 4u);
        v32 = a1 + 2624;
        v12 = (_WORD *)(v4 + 288);
        v9 = (_WORD *)(v4 + 32);
        if ( (*(_DWORD *)(a1 + 2452) & 0x20000) == 0 )
        {
          **(_QWORD **)(a1 + 1208) = 0xA3A03F5891C8B4E8uLL;
          **(_QWORD **)(a1 + 1216) = 0LL;
          **(_QWORD **)(a1 + 1224) = 0LL;
          **(_QWORD **)(a1 + 1232) = 0LL;
        }
      }
      RtlMinimalBarrier(v32, 0LL);
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152);
      *v66 = v61;
      v46 = __readcr4();
      if ( (v46 & 0x20080) != 0 )
      {
        __writecr4(v46 ^ 0x80);
        __writecr4(v46);
      }
      else
      {
        v47 = __readcr3();
        __writecr3(v47);
      }
      v48 = *(_DWORD *)(v4 + 5168);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        *(_QWORD *)(v4 + 5120) = 0LL;
        v49 = 4096;
        *(_QWORD *)(v4 + 5128) = 0LL;
        v50 = 512LL;
        *(_QWORD *)(v4 + 5136) = 0LL;
        *(_QWORD *)(v4 + 5152) = 0LL;
        *(_QWORD *)(v4 + 5160) = 0LL;
        *(_QWORD *)(v4 + 5168) = 0LL;
        v51 = (_QWORD *)(v4 + 1024);
        do
        {
          *v51 = 0LL;
          v49 -= 8;
          ++v51;
          --v50;
        }
        while ( v50 );
        for ( ; v49; --v49 )
        {
          *(_BYTE *)v51 = 0;
          v51 = (_QWORD *)((char *)v51 + 1);
        }
        v52 = v62;
        v53 = 16;
        v54 = 2LL;
        do
        {
          v53 -= 8;
          *(_QWORD *)v9 = *(_QWORD *)v52;
          v52 += 8;
          v9 += 4;
          --v54;
        }
        while ( v54 );
        for ( ; v53; --v53 )
        {
          v55 = *v52++;
          *(_BYTE *)v9 = v55;
          v9 = (_WORD *)((char *)v9 + 1);
        }
        v56 = 16;
        v57 = v63;
        v58 = 2LL;
        do
        {
          v56 -= 8;
          *(_QWORD *)v12 = *(_QWORD *)v57;
          v57 += 8;
          v12 += 4;
          --v58;
        }
        while ( v58 );
        for ( ; v56; --v56 )
        {
          v59 = *v57++;
          *(_BYTE *)v12 = v59;
          v12 = (_WORD *)((char *)v12 + 1);
        }
      }
      RtlMinimalBarrier(a1 + 2624, 0LL);
    }
    while ( (v48 & 8) != 0 );
    _enable();
  }
  else if ( !*(_DWORD *)(a1 + 2296) )
  {
    *(_QWORD *)(a1 + 2320) = 257LL;
    *(_QWORD *)(a1 + 2328) = 0LL;
    *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a1 + 2296) = 1;
    *(_QWORD *)(a1 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    __ba(a1, 0LL);
  }
  return a1;
}
