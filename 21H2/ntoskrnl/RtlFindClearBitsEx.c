/*
 * XREFs of RtlFindClearBitsEx @ 0x1402CCEA0
 * Callers:
 *     MiSelectRelocationStartHint @ 0x1406C2F44 (MiSelectRelocationStartHint.c)
 *     MiFindEmptyAddressRange @ 0x1406EA2A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned int v19; // ebx
  unsigned __int64 *v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned __int64 v24; // r10
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  unsigned int v28; // edx
  unsigned __int64 *v29; // r8
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // sf
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx

  v3 = *a1;
  v4 = a1[1];
  v5 = a3;
  if ( a3 >= *a1 )
    v5 = 0LL;
  v8 = v3 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v5 + 1 < a2 )
        goto LABEL_26;
      v9 = v8 - a2 + 1;
      v10 = v4 + 8 * (v9 >> 6);
      v11 = *(_QWORD *)(v4 + 8 * (v5 >> 6)) | ((1LL << (v5 & 0x3F)) - 1);
      v12 = (unsigned __int64 *)(v4 + 8 * (v5 >> 6));
      if ( a2 > 0x7F )
        break;
      if ( a2 >= 0x40 )
      {
        while ( 2 )
        {
          v33 = v11 < 0;
          while ( 1 )
          {
            if ( v33 )
            {
              do
              {
                if ( (unsigned __int64)++v12 > v10 )
                  goto LABEL_26;
                v11 = *v12;
              }
              while ( (*v12 & 0x8000000000000000uLL) != 0LL );
            }
            v21 = !_BitScanReverse64((unsigned __int64 *)&v34, v11);
            if ( v21 )
              v35 = 64;
            else
              v35 = 63 - v34;
            v17 = ((((__int64)((__int64)v12 - v4) >> 3) + 1) << 6) - v35;
            if ( v17 > v9 )
              goto LABEL_26;
            v36 = a2 - v35;
            if ( a2 == v35 )
              goto LABEL_11;
            v11 = v12[1];
            ++v12;
            if ( v36 < 0x40 )
              break;
            v33 = v11 < 0;
            if ( !v11 )
            {
              v36 -= 64LL;
              if ( !v36 )
                goto LABEL_11;
              v11 = v12[1];
              ++v12;
              break;
            }
          }
          v21 = !_BitScanForward64(&v37, v11);
          if ( v21 )
            v37 = 64LL;
          if ( v37 < v36 )
            continue;
          break;
        }
      }
      else
      {
        if ( a2 > 1 )
        {
          v19 = 0;
          v20 = (unsigned __int64 *)(v4 + 8 * (v8 >> 6));
          while ( v11 != -1 )
          {
LABEL_18:
            v21 = !_BitScanForward64((unsigned __int64 *)&v22, v11);
            if ( v21 )
              LODWORD(v22) = 64;
            if ( v19 + (unsigned int)v22 >= a2 )
            {
              v16 = -(__int64)v19;
LABEL_25:
              v15 = (__int64)((__int64)v12 - v4) >> 3 << 6;
              goto LABEL_10;
            }
            v23 = a2;
            v16 = ~v11;
            while ( 1 )
            {
              v16 &= v16 >> (v23 >> 1);
              if ( !v16 )
                break;
              v23 -= v23 >> 1;
              if ( v23 <= 1 )
              {
                _BitScanForward64(&v16, v16);
                goto LABEL_25;
              }
            }
            if ( v12 == v20 )
              goto LABEL_26;
            v21 = !_BitScanReverse64((unsigned __int64 *)&v25, v11);
            if ( v21 )
              v19 = 64;
            else
              v19 = 63 - v25;
            v11 = v12[1];
            ++v12;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v12 > v10 )
              goto LABEL_26;
            v11 = *v12;
            if ( *v12 != -1LL )
            {
              v19 = 0;
              goto LABEL_18;
            }
          }
        }
        if ( v11 == -1 )
        {
          while ( (unsigned __int64)++v12 <= v10 )
          {
            v11 = *v12;
            if ( *v12 != -1LL )
              goto LABEL_9;
          }
LABEL_26:
          v17 = -1LL;
          goto LABEL_27;
        }
LABEL_9:
        _BitScanForward64(&v13, ~v11);
        v14 = (__int64)((__int64)v12 - v4) >> 3;
        v15 = (unsigned int)v13;
        v16 = v14 << 6;
LABEL_10:
        v17 = v15 + v16;
        if ( v17 > v9 )
        {
          v17 = -1LL;
          goto LABEL_27;
        }
      }
LABEL_11:
      if ( v17 != -1LL )
        return v17;
LABEL_27:
      if ( !v5 )
        return v17;
      v24 = a2 + a3;
      v5 = 0LL;
      if ( a2 + a3 > v3 )
        v24 = v3;
      v8 = v24 - 1;
    }
    v26 = v10 + 8;
    if ( (v9 & 0x3F) == 0 )
      v26 = v4 + 8 * ((v8 - a2 + 1) >> 6);
    if ( v11 )
    {
      if ( !*++v12 )
      {
        v21 = !_BitScanReverse64((unsigned __int64 *)&v32, v11);
        if ( v21 )
          v28 = 64;
        else
          v28 = 63 - v32;
        goto LABEL_47;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v12 > v26 )
            goto LABEL_26;
          ++v12;
        }
        while ( *v12 );
        v21 = !_BitScanReverse64((unsigned __int64 *)&v27, *(v12 - 1));
        if ( v21 )
          v28 = 64;
        else
          v28 = 63 - v27;
LABEL_47:
        v17 = ((__int64)((__int64)v12 - v4) >> 3 << 6) - v28;
        if ( v17 > v9 )
          goto LABEL_26;
        v29 = &v12[(a2 - v28) >> 6];
        if ( ++v12 == v29 )
        {
LABEL_51:
          v30 = ((_BYTE)a2 - (_BYTE)v28) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v28) & 0x3F) == 0 )
            goto LABEL_11;
          v21 = !_BitScanForward64((unsigned __int64 *)&v31, *v12);
          if ( v21 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 >= v30 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v12 )
          {
            if ( ++v12 == v29 )
              goto LABEL_51;
          }
        }
      }
    }
    v28 = 0;
    goto LABEL_47;
  }
  return v5 & 0xFFFFFFFFFFFFFFF8uLL;
}
