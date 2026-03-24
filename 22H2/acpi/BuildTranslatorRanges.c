/*
 * XREFs of BuildTranslatorRanges @ 0x1C00B5BE0
 * Callers:
 *     TranslateEjectInterface @ 0x1C009A244 (TranslateEjectInterface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall BuildTranslatorRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  char *v7; // r13
  unsigned int v8; // ebx
  int v9; // r14d
  char *v10; // rsi
  __int64 v11; // r13
  char *v12; // rbp
  char *v13; // r15
  __int64 v14; // rdx
  char v15; // r8
  char v16; // r10
  __int64 Length; // rcx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  int v21; // eax
  unsigned __int64 v22; // rdx
  PVOID v23; // rax
  int v25; // [rsp+20h] [rbp-88h]
  unsigned int v26; // [rsp+40h] [rbp-68h]
  char *Src; // [rsp+50h] [rbp-58h]
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+B0h] [rbp+8h]
  char v29; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v32; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(v3 + 36);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 80 * v4, 0x58706341u);
  v6 = 0;
  Src = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = 0;
    v9 = 0;
    v26 = 0;
    v10 = PoolWithTag;
    if ( !v4 )
      goto LABEL_22;
    v11 = v3;
    v12 = PoolWithTag + 40;
    v13 = (char *)(v3 + 48);
    do
    {
      if ( *(v13 - 7) == -127 && (*((_WORD *)v13 - 2) & 0x6000) != 0 )
      {
        *v10 = *v13;
        v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v11 + 32LL * (v8 - 1) + 40);
        v10[1] = v28->Type;
        *((_DWORD *)v10 + 2) = *((_DWORD *)v13 + 1);
        *((_DWORD *)v10 + 3) = *((_DWORD *)v13 + 2);
        *((_QWORD *)v10 + 3) = RtlIoDecodeMemIoResource(v28, 0LL, (PULONGLONG)v10 + 2, 0LL);
        *((_DWORD *)v10 + 8) = 3;
        if ( qword_1C00819A0 )
        {
          v14 = v11 + 32LL * (v8 - 1) + 40;
          if ( v28->Type == 1 )
          {
            v15 = *v13;
            v16 = *(v13 - 4) & 1;
            Length = v28->u.Port.Length;
            v18 = *(_QWORD *)(v13 + 4) - v28->u.Port.MinimumAddress.QuadPart;
            v32 = 0;
            v29 = v16;
            if ( v16 )
              Length = (unsigned int)((*(_DWORD *)(v14 + 16) + (_DWORD)Length) << 10);
            LOBYTE(v14) = v15 == 3;
            v25 = Length;
            LOBYTE(Length) = v16;
            if ( (int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, unsigned __int16 *))qword_1C00819A0)(
                        Length,
                        v14,
                        0LL,
                        v18,
                        v25,
                        &v32) >= 0 )
            {
              v19 = *((_OWORD *)v10 + 1);
              *(_OWORD *)v12 = *(_OWORD *)v10;
              v20 = *((_QWORD *)v10 + 4);
              *((_OWORD *)v12 + 1) = v19;
              *((_DWORD *)v10 + 8) = 2;
              *((_QWORD *)v12 + 4) = v20;
              if ( v29 )
                *((_QWORD *)v10 + 1) = v18
                                     + ((*((_QWORD *)v10 + 2) & 0xFFFCLL) << 10)
                                     + (*((_QWORD *)v10 + 2) & 0xFFFLL);
              v21 = *((_DWORD *)v10 + 14);
              v10 += 40;
              ++v9;
              v12 += 40;
              v22 = (unsigned __int16)v21 | ((unsigned __int64)v32 << 16);
              *((_DWORD *)v10 + 8) = 1;
              *((_QWORD *)v10 + 1) = v22;
              *v10 = 1;
            }
            v8 = v26;
          }
        }
        ++v9;
        v10 += 40;
        v12 += 40;
      }
      ++v8;
      v13 += 32;
      v26 = v8;
    }
    while ( v8 < v4 );
    v7 = Src;
    if ( v9 )
    {
      v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v9), 0x58706341u);
      *a3 = v23;
      if ( !v23 )
      {
        v6 = -1073741670;
LABEL_24:
        ExFreePoolWithTag(v7, 0x58706341u);
        return v6;
      }
      memmove(v23, Src, (unsigned int)(40 * v9));
    }
    else
    {
LABEL_22:
      *a3 = 0LL;
    }
    *a2 = v9;
    goto LABEL_24;
  }
  return (unsigned int)-1073741670;
}
