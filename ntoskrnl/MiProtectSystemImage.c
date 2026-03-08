/*
 * XREFs of MiProtectSystemImage @ 0x14080A600
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x14080A578 (MiWriteProtectSystemImages.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x140809AB8 (MiActOnLargeKernelHalPages.c)
 *     MiComputeDriverProtection @ 0x14080A918 (MiComputeDriverProtection.c)
 */

_OWORD *__fastcall MiProtectSystemImage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  _OWORD *result; // rax
  __int64 v4; // r13
  BOOL v5; // r15d
  __int64 v6; // rbp
  int v7; // r10d
  _OWORD *v8; // rsi
  unsigned int *v9; // r8
  unsigned __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 PteAddress; // r12
  __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  int v17; // ebp
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // r8d
  unsigned __int64 v27; // r10
  unsigned int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-A8h]
  unsigned int v37; // [rsp+24h] [rbp-A4h]
  unsigned int v38; // [rsp+28h] [rbp-A0h]
  int v39; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v40; // [rsp+30h] [rbp-98h]
  unsigned __int64 v41; // [rsp+38h] [rbp-90h]
  unsigned __int64 v42; // [rsp+40h] [rbp-88h]
  char *v43; // [rsp+48h] [rbp-80h]
  unsigned __int64 v45; // [rsp+58h] [rbp-70h]
  _OWORD v46[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+88h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  memset(v46, 0, sizeof(v46));
  v47 = 0LL;
  result = (_OWORD *)MI_IS_PHYSICAL_ADDRESS(v1);
  if ( (_DWORD)result )
  {
    if ( v1 == PsNtosImageBase || v1 == PsHalImageBase )
      return (_OWORD *)MiActOnLargeKernelHalPages(
                         v1,
                         (__int64 (__fastcall *)(unsigned __int64, __int64))MiProtectLargeKernelHalRange);
  }
  else
  {
    v37 = 0;
    v4 = RtlImageNtHeader(v1);
    v5 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
      v37 = 1;
    else
      v5 = (*(_DWORD *)(v2 + 104) & 0x8000000) == 0;
    v6 = *(unsigned __int16 *)(v4 + 6);
    v7 = *(unsigned __int16 *)(v4 + 6);
    v8 = (_OWORD *)(v4 + *(unsigned __int16 *)(v4 + 20) + 24LL);
    result = (_OWORD *)v1;
    if ( *(_WORD *)(v4 + 6) )
    {
      v9 = (unsigned int *)(v8 + 1);
      while ( 1 )
      {
        v10 = v1 + *(v9 - 1);
        if ( v10 < (unsigned __int64)result )
          break;
        v11 = *v9;
        if ( *v9 < *(v9 - 2) )
          v11 = *(v9 - 2);
        v9 += 10;
        result = (_OWORD *)(-(__int64)*(unsigned int *)(v4 + 56) & (v10 + *(unsigned int *)(v4 + 56) + v11 - 1LL));
        if ( !--v7 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v39 = -1073741824;
      v43 = (char *)v8 + 40 * v6 - 1;
      PteAddress = MiGetPteAddress(v1);
      v36 = 0;
      v15 = PteAddress + 8 * v14;
      v16 = 0LL;
      v40 = 0LL;
      v17 = v6 + 1;
      v42 = v15;
      do
      {
        v45 = v16;
        if ( v17 == 1 )
        {
          HIDWORD(v47) = 0;
          v8 = v46;
          v41 = 0LL;
          v38 = 0;
          v21 = MiGetPteAddress(v12) + 8;
        }
        else
        {
          v41 = v1 + *((unsigned int *)v8 + 3);
          v21 = MiGetPteAddress(v41);
          if ( v19 < v18 )
            v19 = v18;
          v22 = v36;
          v38 = v19;
        }
        if ( v16 )
        {
          if ( v21 > v16 )
          {
            v33 = MiComputeDriverProtection(v37, v22);
            MiSetSystemCodeProtection(v2, v34, v34, v33);
            v20 = (unsigned __int64)v43;
            v35 = PteAddress;
            PteAddress += 8LL;
            v16 = 0LL;
            v40 = 0LL;
            v36 = 0;
            if ( v45 != v35 )
              PteAddress = v35;
          }
        }
        if ( v21 >= v42 )
        {
          result = v46;
          if ( v8 != v46 )
            break;
        }
        v23 = *((_DWORD *)v8 + 9) & 0xE0000000;
        if ( v5 && ((MiFlags & 0x8000) == 0 || (*((_DWORD *)v8 + 9) & 0x20000000) == 0) )
          v23 = *((_DWORD *)v8 + 9) & 0x60000000 | 0x80000000;
        if ( v23 == v39 && (v32 = *(_DWORD *)(v4 + 56), v32 <= 0x1000) )
        {
          v31 = v32;
        }
        else
        {
          v24 = MiGetPteAddress(v20);
          v27 = v24;
          if ( v24 == v21 )
          {
            v40 = v21;
            v27 = v24 - 8;
            v16 = v21;
            v36 = v26 | v23 | v25;
          }
          if ( v27 >= PteAddress )
          {
            v28 = MiComputeDriverProtection(v37, v26);
            v30 = v42 - 8;
            if ( v29 < v42 )
              v30 = v29;
            MiSetSystemCodeProtection(a1, PteAddress, v30, v28);
            v16 = v40;
          }
          v31 = *(unsigned int *)(v4 + 56);
          PteAddress = v21;
          v39 = v23;
        }
        v8 = (_OWORD *)((char *)v8 + 40);
        result = (_OWORD *)(v31 + v38);
        v2 = a1;
        v12 = (-v31 & ((unsigned __int64)result + v41 - 1)) - 1;
        v43 = (char *)v12;
        --v17;
      }
      while ( v17 );
    }
  }
  return result;
}
