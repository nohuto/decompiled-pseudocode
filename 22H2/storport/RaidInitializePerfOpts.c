/*
 * XREFs of RaidInitializePerfOpts @ 0x1C00316B4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x1C002A8B0 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 *     WPP_SF_ @ 0x1C00334DC (WPP_SF_.c)
 *     RaidInitializeDma @ 0x1C0079F74 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C007A0FC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, __int64 i)
{
  __int64 v3; // r10
  char v4; // r15
  char v5; // r12
  char v6; // dl
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r11d
  int v10; // ebp
  char v11; // r13
  char v12; // r9
  unsigned int v13; // ebx
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rax
  PDEVICE_OBJECT v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // r14d
  __int64 *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, __int128 *); // rax
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  int v29; // ecx
  unsigned int v30; // r15d
  unsigned int v31; // eax
  USHORT ActiveGroupCount; // ax
  char v33; // r11
  unsigned int v34; // r15d
  __int64 v35; // rcx
  unsigned __int16 epi16; // r10
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int128 v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+60h] [rbp-58h]
  char v46; // [rsp+C0h] [rbp+8h]
  char v48; // [rsp+D0h] [rbp+18h]
  char v49; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v46 = 0;
  v7 = i;
  v49 = 0;
  v8 = 0LL;
  v48 = 0;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  LOBYTE(i) = 0;
  v13 = 0;
  if ( !a1 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v15 = 22LL;
    goto LABEL_6;
  }
  if ( !v7 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v15 = 23LL;
LABEL_6:
    WPP_SF_(v14->AttachedDevice, v15, &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids);
LABEL_7:
    v13 = -1056964602;
    goto LABEL_116;
  }
  v16 = *(__int64 **)(a1 - 16);
  v8 = *v16;
  if ( (*(_BYTE *)(*v16 + 104) & 0x10) == 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v18 = 24LL;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      &EventAdapterInitPerfConfigData,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      *(_DWORD *)(v7 + 8),
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
    v3 = 0LL;
    v6 = 0;
    LOBYTE(i) = 0;
    v12 = 0;
    v9 = 1;
  }
  v19 = *(_DWORD *)v7;
  v20 = 3;
  if ( *(_DWORD *)v7 && *(_DWORD *)(v7 + 4) >= 0xCu )
    v5 = 1;
  if ( v19 >= 2 && *(_DWORD *)(v7 + 4) >= 0x18u )
  {
    v11 = 1;
    v20 = 7;
  }
  if ( v19 >= 3 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v6 = 1;
    v20 |= 0x18u;
    v46 = 1;
  }
  if ( v19 >= 4 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v12 = 1;
    v49 = 1;
    v20 |= 0x20u;
  }
  if ( v19 >= 5 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_51;
    v44 = 0LL;
    LODWORD(v44) = 1;
    v45 = 0LL;
    if ( !*(_BYTE *)(v8 + 4514) )
      goto LABEL_51;
    v21 = (__int64 *)(v8 + 728);
    if ( !(unsigned __int8)RaidIsDmaInitialized(v8 + 728) )
    {
      RaidInitializeDma(v22, *(_QWORD *)(v8 + 32), v8 + 328);
      v3 = 0LL;
      v9 = 1;
    }
    if ( v8 != -728 && (v23 = *v21) != 0 && (v24 = *(_QWORD *)(v23 + 8)) != 0 )
    {
      if ( *(int *)(v8 + 756) < 3 || (v25 = *(__int64 (__fastcall **)(__int64, __int128 *))(v24 + 128)) == 0LL )
      {
LABEL_50:
        v4 = a2;
LABEL_51:
        v6 = v46;
        LOBYTE(i) = v9;
        v12 = v49;
        v48 = v9;
        goto LABEL_52;
      }
      v26 = v25(v23, &v44);
      v3 = 0LL;
    }
    else
    {
      v26 = -1073741811;
    }
    v9 = 1;
    if ( v26 >= 0 )
    {
      v4 = a2;
      if ( (v45 & 2) != 0 )
        v20 |= 0x40u;
      goto LABEL_51;
    }
    goto LABEL_50;
  }
LABEL_52:
  if ( !v5 && !v11 && !v6 && !v12 && !(_BYTE)i )
  {
    if ( !v4 )
      goto LABEL_7;
    *(_DWORD *)v7 = v9;
    *(_DWORD *)(v7 + 4) = 12;
  }
  if ( v4 )
  {
    *(_DWORD *)(v7 + 8) = v20;
    v10 = v20;
    v13 = v3;
    goto LABEL_116;
  }
  v27 = *(_DWORD *)(v7 + 8);
  if ( (~v20 & v27) != 0 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v18 = 25LL;
    goto LABEL_18;
  }
  if ( (v27 & 2) != 0 )
  {
    v10 = 2;
    *(_DWORD *)(v8 + 4808) = -*(_DWORD *)(v7 + 12);
    v27 = *(_DWORD *)(v7 + 8);
  }
  if ( ((unsigned __int8)v27 & (unsigned __int8)v9) != 0 )
  {
    *(_WORD *)(v8 + 4804) |= v9;
    v10 |= v9;
    if ( *(_BYTE *)(v8 + 4513) != (_BYTE)v9 || *(_QWORD *)(v8 + 4824) == v3 || *(_QWORD *)(v8 + 4504) == v3 )
    {
      v33 = v46;
    }
    else
    {
      v28 = v3;
      v29 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 4496) + 4LL);
      v30 = v29 - v9;
      if ( v11 && (*(_DWORD *)(v7 + 8) & 4) != 0 )
      {
        v28 = *(_DWORD *)(v7 + 16);
        v31 = *(_DWORD *)(v7 + 20);
        if ( v28 > v31 || v31 > v30 )
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_19;
          }
          v18 = 26LL;
LABEL_18:
          WPP_SF_(v17->AttachedDevice, v18, &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids);
LABEL_19:
          v13 = -1056964607;
          goto LABEL_116;
        }
        v30 = *(_DWORD *)(v7 + 20);
        LOWORD(v29) = v9 + v31 - v28;
        v10 |= 4u;
      }
      *(_WORD *)(v8 + 4804) = (4 * v29) | 3;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v33 = v46;
      v34 = v30 + 1;
      *(_WORD *)(v8 + 4806) = ActiveGroupCount;
      if ( v28 < v34 )
      {
        v35 = 16LL * v28;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(*(_QWORD *)(v8 + 4504) + v35), 4);
          v37 = *(_QWORD *)(*(_QWORD *)(v8 + 4504) + v35);
          if ( epi16 != 0xFFFF )
          {
            if ( v46 && (*(_BYTE *)(v7 + 8) & 0xC) == 0xC )
            {
              v10 |= 8u;
              *(_WORD *)(*(_QWORD *)(v7 + 32) + v35 + 8) = epi16;
              *(_QWORD *)(v35 + *(_QWORD *)(v7 + 32)) = v37;
            }
            if ( v28 < 0xFF )
            {
              for ( i = 0LL; v37; v37 >>= 1 )
              {
                if ( (v37 & 1) != 0 )
                {
                  v38 = *(_QWORD *)(v8 + 4824);
                  v39 = (unsigned int)i + (epi16 << 6);
                  if ( *(_BYTE *)(v39 + v38) == 0xFF )
                    *(_BYTE *)(v39 + v38) = v28;
                }
                i = (unsigned int)(i + 1);
              }
            }
          }
          ++v28;
          v35 += 16LL;
        }
        while ( v28 < v34 );
      }
      LOBYTE(i) = v48;
      LOBYTE(v3) = 0;
    }
    v27 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    if ( v11 && (v27 & 4) != 0 || (v27 & 0x20) != 0 )
      goto LABEL_19;
    v33 = v46;
  }
  if ( v33 && (v27 & 8) != 0 )
  {
    v10 |= 8u;
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 4800);
  }
  v40 = v27;
  if ( v33 && (v27 & 0x10) != 0 )
  {
    if ( (v10 & 1) == 0 )
      goto LABEL_19;
    v10 |= 0x10u;
    *(_BYTE *)(v8 + 4515) |= 1u;
    v40 = *(_DWORD *)(v7 + 8);
  }
  v41 = v40;
  if ( v49 != (_BYTE)v3 && (v40 & 0x20) != 0 )
  {
    v10 |= 0x20u;
    *(_BYTE *)(v8 + 4515) |= 2u;
    v41 = *(_DWORD *)(v7 + 8);
  }
  v42 = v41;
  if ( (_BYTE)i && (v41 & 0x40) != 0 )
  {
    v10 |= 0x40u;
    *(_BYTE *)(v8 + 4515) |= 4u;
    v42 = *(unsigned int *)(v7 + 8);
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      v42,
      &EventAdapterFinalPerfConfigData,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      v42,
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
LABEL_116:
  if ( v10 != *(_DWORD *)(v7 + 8) )
  {
    if ( (v10 & 2) != 0 )
      *(_DWORD *)(v8 + 4808) = 0;
    if ( (v10 & 1) != 0 )
    {
      *(_BYTE *)(v8 + 4515) &= ~1u;
      *(_WORD *)(v8 + 4804) = 0;
    }
    if ( (v10 & 0x20) != 0 )
      *(_BYTE *)(v8 + 4515) &= ~2u;
  }
  return v13;
}
