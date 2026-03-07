unsigned __int64 __fastcall MiReleaseSmallPteMappings(ULONG_PTR *a1, int a2, unsigned int a3, int a4)
{
  ULONG_PTR *v6; // rbp
  unsigned __int64 v8; // r8
  ULONG_PTR v9; // r13
  unsigned int v10; // r11d
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // r12
  ULONG_PTR v14; // rbx
  ULONG_PTR BugCheckParameter4; // r14
  int v16; // ebx
  ULONG_PTR v17; // r9
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r15
  ULONG_PTR v27; // rbp
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  volatile signed __int32 *v33; // r9
  unsigned int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  __int64 v37; // r12
  unsigned __int64 v38; // r15
  ULONG_PTR *v39; // rdi
  unsigned __int64 v40; // rsi
  ULONG_PTR v41; // rcx
  __int64 v42; // r10
  _QWORD *v43; // r8
  _QWORD *v44; // rdx
  _QWORD *v45; // r8
  bool v46; // zf
  ULONG_PTR v48; // rcx
  __int64 v49; // r10
  _QWORD *v50; // r8
  _QWORD *v51; // rdx
  _QWORD *v52; // r8
  bool v53; // zf
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rcx
  char MayNeedFlush; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  struct _LIST_ENTRY *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  struct _LIST_ENTRY *v66; // r8
  __int64 v67; // rax
  __int16 v68; // r8
  struct _LIST_ENTRY *v69; // rax
  __int64 v70; // r8
  __int64 v71; // rax
  signed __int32 v72[8]; // [rsp+0h] [rbp-178h] BYREF
  int v73; // [rsp+30h] [rbp-148h]
  unsigned __int64 v74; // [rsp+38h] [rbp-140h]
  int v75; // [rsp+40h] [rbp-138h]
  unsigned int v76; // [rsp+44h] [rbp-134h]
  ULONG_PTR *v77; // [rsp+48h] [rbp-130h]
  unsigned __int64 v78; // [rsp+50h] [rbp-128h]
  unsigned __int64 v79; // [rsp+58h] [rbp-120h]
  ULONG_PTR v80; // [rsp+60h] [rbp-118h]
  _QWORD v81[24]; // [rsp+70h] [rbp-108h] BYREF

  v77 = a1;
  v6 = a1;
  memset(v81, 0, 0xB8uLL);
  v74 = 0LL;
  v8 = 0LL;
  v73 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    LODWORD(v81[1]) = 20;
    v81[3] = 0LL;
    _InterlockedOr(v72, 0);
    v76 = KiTbFlushTimeStamp;
  }
  else
  {
    v10 = 1;
    v73 = 1;
    v76 = 0;
  }
  v11 = 0;
  v12 = 16;
  if ( (v6[3] & 1) == 0 )
  {
    v11 = a2;
    v12 = 1;
  }
  v75 = v11;
  v13 = v12;
  v14 = a3 / v12;
  v80 = v14;
  v79 = v12;
  while ( 2 )
  {
    BugCheckParameter4 = v14;
    v16 = v75;
LABEL_7:
    v17 = v6[2];
    v18 = *(_QWORD *)(v17 + 8 * BugCheckParameter4 * v13);
    v19 = v17 + 8 * BugCheckParameter4 * v13;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v61 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
        v62 = v18 | 0x20;
        if ( (v61 & 0x20) == 0 )
          v62 = *(_QWORD *)(v17 + 8 * BugCheckParameter4 * v13);
        v18 = v62;
        if ( (v61 & 0x42) != 0 )
          v18 = v62 | 0x42;
      }
    }
    if ( (v18 & 0xF000) == 0x1000 )
    {
      v20 = 1LL;
    }
    else
    {
      v54 = *(_QWORD *)(v19 + 8);
      v55 = v19 + 8;
      if ( v19 + 8 >= 0xFFFFF6FB7DBED000uLL
        && v55 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v54 & 1) != 0
        && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
      {
        v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v63 )
        {
          v64 = *((_QWORD *)&v63->Flink + ((v55 >> 3) & 0x1FF));
          v65 = v54 | 0x20;
          if ( (v64 & 0x20) == 0 )
            v65 = *(_QWORD *)(v19 + 8);
          v54 = v65;
          if ( (v64 & 0x42) != 0 )
            v54 = v65 | 0x42;
        }
      }
      if ( qword_140C657C0 && (v54 & 0x10) == 0 )
        v54 &= ~qword_140C657C0;
      v8 = v74;
      v20 = HIDWORD(v54);
    }
    v9 += v20;
    if ( qword_140C657C0 && (v18 & 0x10) == 0 )
      v18 &= ~qword_140C657C0;
    v21 = HIDWORD(v18);
    v78 = v21;
    if ( (_DWORD)v21 )
    {
      v22 = *(_QWORD *)(v17 + 8 * v21);
      v23 = v17 + 8 * v21;
      if ( v23 >= 0xFFFFF6FB7DBED000uLL
        && v23 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v66 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v66 )
        {
          v67 = *((_QWORD *)&v66->Flink + ((v23 >> 3) & 0x1FF));
          v68 = v22 | 0x20;
          if ( (v67 & 0x20) == 0 )
            v68 = v22;
          LOWORD(v22) = v68;
          v8 = v74;
          if ( (v67 & 0x42) != 0 )
            LOWORD(v22) = v22 | 0x42;
        }
        else
        {
          v8 = v74;
        }
      }
      if ( (v22 & 0xF000) == 0x1000 )
      {
        v24 = 1LL;
      }
      else
      {
        v56 = *(_QWORD *)(v23 + 8);
        v57 = v23 + 8;
        if ( v57 >= 0xFFFFF6FB7DBED000uLL
          && v57 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v56 & 1) != 0
          && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
        {
          v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v69 )
          {
            v70 = v56 | 0x20;
            v71 = *((_QWORD *)&v69->Flink + ((v57 >> 3) & 0x1FF));
            if ( (v71 & 0x20) == 0 )
              v70 = v56;
            v56 = v70;
            v8 = v74;
            if ( (v71 & 0x42) != 0 )
              v56 |= 0x42uLL;
          }
        }
        if ( qword_140C657C0 && (v56 & 0x10) == 0 )
          v56 &= ~qword_140C657C0;
        v24 = HIDWORD(v56);
      }
      v25 = v21 + v24;
      if ( v13 != 1 )
        v25 /= v13;
      if ( v25 == BugCheckParameter4 )
      {
        if ( (_DWORD)v13 == 1 )
          goto LABEL_63;
LABEL_55:
        LODWORD(v21) = (unsigned int)v21 / (unsigned int)v13;
        goto LABEL_63;
      }
    }
    if ( v13 == 1 )
      v26 = v9;
    else
      v26 = v9 / v13;
    if ( !v16 )
    {
      if ( BugCheckParameter4 >= *v6 )
        goto LABEL_90;
      if ( v26 > 1 )
      {
        if ( *v6 - BugCheckParameter4 < v26 )
          goto LABEL_90;
        v48 = v6[1];
        v49 = *(_QWORD *)(v48 + 8 * (BugCheckParameter4 >> 6));
        v50 = (_QWORD *)(v48 + 8 * (BugCheckParameter4 >> 6));
        v51 = (_QWORD *)(v48 + 8 * ((v26 + BugCheckParameter4 - 1) >> 6));
        if ( v50 == v51 )
        {
          v53 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v26) << BugCheckParameter4) & v49) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v26) << BugCheckParameter4;
        }
        else
        {
          if ( ((-1LL << BugCheckParameter4) & v49) != -1LL << BugCheckParameter4 )
            goto LABEL_90;
          v52 = v50 + 1;
          if ( v52 != v51 )
          {
            while ( *v52 == -1LL )
            {
              if ( ++v52 == v51 )
                goto LABEL_75;
            }
LABEL_90:
            KeBugCheckEx(0xDAu, 0x504uLL, v19, v9, BugCheckParameter4);
          }
LABEL_75:
          v53 = (*v52 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v26 + (unsigned __int8)BugCheckParameter4 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v26 + (unsigned __int8)BugCheckParameter4 - 1);
        }
        if ( !v53 )
          goto LABEL_90;
      }
      else if ( v26 != 1
             || !_bittest64((const signed __int64 *)(v6[1] + 8 * (BugCheckParameter4 >> 6)), BugCheckParameter4 & 0x3F) )
      {
        goto LABEL_90;
      }
    }
    if ( v10 )
    {
      if ( !v9 )
        goto LABEL_36;
      v27 = v9;
      while ( 1 )
      {
        v28 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v19) )
        {
          if ( (unsigned int)MiPteHasShadow(v30, v29, v31) )
          {
            if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
              v28 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)v19 = v28;
            MiWritePteShadow(v19, v28);
            goto LABEL_34;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v28 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v19 = v28;
LABEL_34:
        v19 += 8LL;
        if ( !--v27 )
        {
          LODWORD(v21) = v78;
          v6 = v77;
          v16 = v75;
LABEL_36:
          if ( v16 )
          {
            MiReturnSystemPtes(
              (_DWORD)v6,
              v16,
              BugCheckParameter4,
              (((_DWORD)v9 + 511) & 0xFFFFFE00) / (unsigned int)v13,
              0);
          }
          else
          {
            v32 = v26;
            v33 = (volatile signed __int32 *)(v6[1] + 4 * (BugCheckParameter4 >> 5));
            if ( (BugCheckParameter4 & 0x1F) + v26 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v33, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << (BugCheckParameter4 & 0x1F)));
                v32 = v26 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v33;
              }
              if ( v32 >= 0x20 )
              {
                v58 = v32 >> 5;
                v32 += -32LL * (v32 >> 5);
                do
                {
                  *v33++ = 0;
                  --v58;
                }
                while ( v58 );
              }
              if ( v32 )
              {
                v34 = -1 << v32;
LABEL_40:
                _InterlockedAnd(v33, v34);
              }
            }
            else
            {
              if ( v26 != 32 )
              {
                v34 = ~(((1 << v26) - 1) << (BugCheckParameter4 & 0x1F));
                goto LABEL_40;
              }
              *v33 = 0;
            }
            if ( v6[10] > 0x40000 )
            {
              v35 = 32LL;
              v46 = (v6[3] & 1) == 0;
              v36 = 0LL;
              if ( v46 )
                v35 = 512LL;
              v37 = BugCheckParameter4 & ~(v35 - 1);
              v38 = (~(v35 - 1) & (v35 + v26 + BugCheckParameter4 - 1)) - v37;
              if ( v38 )
              {
                v39 = v77;
                while ( 1 )
                {
                  v40 = v37 + v36;
                  if ( v37 + v36 < *v39 && *v39 - v40 >= v35 )
                  {
                    v41 = v39[1];
                    v42 = *(_QWORD *)(v41 + 8 * (v40 >> 6));
                    v43 = (_QWORD *)(v41 + 8 * (v40 >> 6));
                    v44 = (_QWORD *)(v41 + 8 * ((v35 + v40 - 1) >> 6));
                    if ( v43 == v44 )
                    {
                      v46 = (v42 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v35) << v40)) == 0;
LABEL_57:
                      if ( v46 && (unsigned int)RtlInterlockedSetClearRunEx(v39, v37 + v36, v35) )
                        MiReturnSystemPtes((_DWORD)v39, 0, v37 + v36, v35, 1);
                      goto LABEL_58;
                    }
                    if ( (v42 & (-1LL << v40)) == 0 )
                    {
                      v45 = v43 + 1;
                      if ( v45 != v44 )
                      {
                        while ( !*v45 )
                        {
                          if ( ++v45 == v44 )
                            goto LABEL_53;
                        }
                        goto LABEL_58;
                      }
LABEL_53:
                      v46 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v35 + (unsigned __int8)v40 - 1)) & *v45) == 0;
                      goto LABEL_57;
                    }
                  }
LABEL_58:
                  v36 += v35;
                  if ( v36 >= v38 )
                  {
                    LODWORD(v21) = v78;
                    break;
                  }
                }
              }
              v16 = v75;
              v6 = v77;
              v13 = v79;
            }
          }
          v8 = v9 + v74;
          v74 += v9;
LABEL_62:
          v9 = 0LL;
          if ( (_DWORD)v13 != 1 )
            goto LABEL_55;
LABEL_63:
          v10 = v73;
          BugCheckParameter4 = (unsigned int)v21;
          if ( !(_DWORD)v21 )
          {
            if ( v73 )
              goto LABEL_65;
            goto LABEL_105;
          }
          goto LABEL_7;
        }
      }
    }
    MiInsertTbFlushEntry(v81, (__int64)(v19 << 25) >> 16, v9);
    if ( !(unsigned int)MiFlushTbListEarly((__int64)v81, 1) )
    {
      v8 = v74;
      goto LABEL_62;
    }
    _InterlockedOr(v72, 0);
    MayNeedFlush = MiTbFlushTimeStampMayNeedFlush(v76, (unsigned int)KiTbFlushTimeStamp, 0xFFFFFFFFLL);
    v8 = v74;
    if ( MayNeedFlush )
      goto LABEL_62;
    v10 = v73;
    v9 = 0LL;
LABEL_105:
    if ( HIDWORD(v81[1]) )
    {
      MiFlushTbList(v81);
      v8 = v74;
      v10 = v73;
    }
LABEL_65:
    v73 = ++v10;
    if ( v10 < 2 )
    {
      v14 = v80;
      continue;
    }
    break;
  }
  if ( !v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 10, v8);
  return v8;
}
