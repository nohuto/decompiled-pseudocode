/*
 * XREFs of RtlInitFunctionOverrideCapabilities @ 0x1403A2358
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     RtlGetProcessorSignature @ 0x1403A25C8 (RtlGetProcessorSignature.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

signed __int64 *__fastcall RtlInitFunctionOverrideCapabilities(signed __int64 *a1)
{
  unsigned __int64 v2; // r9
  __int64 *v4; // r10
  unsigned int v9; // r14d
  int v10; // r8d
  __int64 v12; // r11
  unsigned int v17; // esi
  __int128 v18; // xmm0
  unsigned __int64 v19; // rbx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  bool v22; // cf
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned int v27; // ecx
  signed __int64 *result; // rax
  unsigned __int64 v29; // rbx
  char v35; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v36; // [rsp+31h] [rbp-3Fh] BYREF
  unsigned __int8 v37; // [rsp+32h] [rbp-3Eh] BYREF
  unsigned __int8 v38; // [rsp+33h] [rbp-3Dh] BYREF
  unsigned __int16 v39; // [rsp+34h] [rbp-3Ch] BYREF
  __int128 v40; // [rsp+38h] [rbp-38h]
  __int128 v41; // [rsp+48h] [rbp-28h]
  __int128 v42; // [rsp+58h] [rbp-18h]

  v35 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v42 = 0LL;
  RtlGetProcessorSignature(
    (unsigned int)&v35,
    (unsigned int)&v38,
    (unsigned int)&v39,
    (unsigned int)&v36,
    (__int64)&v37);
  v2 = 8LL;
  _RAX = 0x80000000LL;
  v4 = RtlpCpuFeatureTable;
  __asm { cpuid }
  v9 = _RAX;
  v10 = 0;
  _RAX = 0LL;
  v12 = 8LL;
  __asm { cpuid }
  v17 = _RAX;
  *(_QWORD *)&v42 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v42 + 1) = __PAIR64__(_RDX, _RCX);
  do
  {
    v18 = *((_OWORD *)v4 + 1);
    v40 = *(_OWORD *)v4;
    v41 = v18;
    if ( (_DWORD)v40 != v10 )
    {
      v10 = v40;
      if ( ((unsigned int)v40 < 0x80000000 || (unsigned int)v40 > v9) && (unsigned int)v40 > v17 )
      {
        v42 = 0LL;
      }
      else
      {
        _RAX = (unsigned int)v40;
        __asm { cpuid }
        *(_QWORD *)&v42 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v42 + 1) = __PAIR64__(_RDX, _RCX);
      }
    }
    if ( ((unsigned int)v41 & *((_DWORD *)&v42 + SDWORD1(v41))) != 0
      && (*((_QWORD *)&v40 + 1) & MEMORY[0xFFFFF780000003D8]) == *((_QWORD *)&v40 + 1) )
    {
      v29 = *((_QWORD *)&v41 + 1);
      if ( (BYTE8(v41) & 1) != 0 )
        _bittestandset64(
          (signed __int64 *)((unsigned __int64)a1 & -(__int64)(HIDWORD(v41) < 0x140)),
          HIDWORD(*((_QWORD *)&v41 + 1)));
      if ( (v29 & 2) != 0 )
        _bittestandset64(
          (signed __int64 *)((unsigned __int64)(a1 + 5) & -(__int64)(HIDWORD(v29) < 0x140)),
          HIDWORD(v29));
    }
    v4 += 4;
    --v12;
  }
  while ( v12 );
  if ( !v35 )
    goto LABEL_24;
  if ( v35 == 1 )
  {
    v2 = 9LL;
    goto LABEL_8;
  }
  if ( v35 != 2 )
  {
    if ( v35 == 3 )
    {
      v2 = 10LL;
      goto LABEL_8;
    }
LABEL_24:
    v19 = (unsigned __int64)(a1 + 5);
    goto LABEL_9;
  }
LABEL_8:
  _bittestandset64(a1, v2);
  v19 = (unsigned __int64)(a1 + 5);
  _bittestandset64(a1 + 5, v2);
  *a1 |= 0x80uLL;
  a1[5] |= 0x80uLL;
LABEL_9:
  v20 = v36 + 11;
  v21 = v20;
  _bittestandset64((signed __int64 *)((unsigned __int64)a1 & -(__int64)(v20 < 0x140)), v20);
  v22 = v20 < 0x140;
  v23 = v37 + 27;
  _bittestandset64((signed __int64 *)(v19 & -(__int64)v22), v21);
  v24 = v23;
  _bittestandset64((signed __int64 *)((unsigned __int64)a1 & -(__int64)(v23 < 0x140)), v23);
  v22 = v23 < 0x140;
  v25 = v38 + 43;
  _bittestandset64((signed __int64 *)(v19 & -(__int64)v22), v24);
  v26 = v25;
  _bittestandset64((signed __int64 *)((unsigned __int64)a1 & -(__int64)(v25 < 0x140)), v25);
  v22 = v25 < 0x140;
  v27 = v39 + 59;
  _bittestandset64((signed __int64 *)(v19 & -(__int64)v22), v26);
  _bittestandset64((signed __int64 *)((unsigned __int64)a1 & -(__int64)(v27 < 0x140)), v27);
  result = (signed __int64 *)(v19 & -(__int64)(v27 < 0x140));
  _bittestandset64(result, v27);
  a1[4] |= 0x800000000000000uLL;
  *(_QWORD *)(v19 + 32) |= 0x800000000000000uLL;
  *a1 |= 0x20uLL;
  *(_QWORD *)v19 |= 0x40uLL;
  return result;
}
