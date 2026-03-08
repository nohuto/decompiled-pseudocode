/*
 * XREFs of HalpReportResourceUsage @ 0x140B35B2C
 * Callers:
 *     HalReportResourceUsage @ 0x140B45C40 (HalReportResourceUsage.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     RtlCmEncodeMemIoResource @ 0x140370750 (RtlCmEncodeMemIoResource.c)
 *     HalTranslateBusAddress @ 0x1403707F0 (HalTranslateBusAddress.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpClaimDebugResource @ 0x1405060AC (HalpClaimDebugResource.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     HalpGetResourceSortValue @ 0x140B360F0 (HalpGetResourceSortValue.c)
 *     IoReportHalResourceUsage @ 0x140B366A0 (IoReportHalResourceUsage.c)
 */

void __fastcall HalpReportResourceUsage(__int64 a1)
{
  __int64 v1; // r11
  unsigned int *v2; // rsi
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r12
  _DWORD *v8; // r14
  char *v9; // rcx
  char *v10; // r8
  unsigned __int8 v11; // dl
  ULONG_PTR v12; // rdi
  unsigned int v13; // r8d
  char v14; // cl
  unsigned int v15; // eax
  __int64 v16; // r13
  char v17; // r8
  unsigned int v18; // edx
  _DWORD *v19; // r9
  _DWORD *v20; // r11
  _DWORD *v21; // rcx
  int v22; // ecx
  ULONG_PTR v23; // r13
  ULONGLONG v24; // r8
  int v25; // ecx
  ULONGLONG v26; // r9
  NTSTATUS v27; // eax
  unsigned int v28; // r14d
  __int64 v29; // r10
  unsigned int v30; // r15d
  int v31; // esi
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  int v34; // r11d
  __int64 v35; // r14
  __int128 *v36; // r10
  __int128 *v37; // rdi
  __int64 v38; // r13
  __int128 *v39; // r10
  int v40; // r11d
  bool v41; // cc
  int v42; // ecx
  __int128 v43; // xmm1
  int v44; // ecx
  __int128 v45; // xmm1
  char v46; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v47; // [rsp+39h] [rbp-CFh]
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  unsigned int v49; // [rsp+3Ch] [rbp-CCh]
  unsigned int v50; // [rsp+40h] [rbp-C8h]
  ULONG AddressSpace; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int Descriptor; // [rsp+48h] [rbp-C0h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor_8; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-9Ch]
  _DWORD *v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-80h]
  _BYTE v60[20]; // [rsp+90h] [rbp-78h]
  _DWORD *v61; // [rsp+A8h] [rbp-60h]
  LARGE_INTEGER TranslatedAddress; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v63; // [rsp+B8h] [rbp-50h]
  _DWORD *v64; // [rsp+C0h] [rbp-48h]
  __int64 Pool2; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  _QWORD v67[34]; // [rsp+D8h] [rbp-30h] BYREF

  v66 = a1;
  memset(v67, 0, 0x108uLL);
  v1 = KdComPortInUse;
  Descriptor = 0;
  v57 = 0LL;
  v54 = 0;
  v58 = 0LL;
  TranslatedAddress.QuadPart = 0LL;
  AddressSpace = 0;
  memset(&Descriptor_8, 0, sizeof(Descriptor_8));
  if ( KdComPortInUse )
    HalpClaimDebugResource((ULONG_PTR)&HalpKdComIoSpace, KdComPortInUse);
  if ( KdHvComPortInUse && KdHvComPortInUse != v1 )
    HalpClaimDebugResource((ULONG_PTR)&HalpHvComIoSpace, KdHvComPortInUse);
  Pool2 = ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  v2 = (unsigned int *)Pool2;
  v3 = ExAllocatePool2(64LL, 0x2000uLL, 0x6D6C6148u);
  v56 = (_DWORD *)v3;
  v4 = (_DWORD *)v3;
  if ( !Pool2 || !v3 )
    KeBugCheckEx(0xACu, 0x4000uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\misc\\usage.c", 0x18EuLL);
  v5 = Pool2 + 4;
  v6 = 0;
  *(_DWORD *)(Pool2 + 4) = -1;
  v7 = v3 + 4;
  v63 = v2 + 1;
  v8 = v2 + 1;
  v61 = (_DWORD *)(v3 + 4);
  v9 = HalpIDTUsageFlags;
  v10 = byte_140D81AE1;
  do
  {
    if ( (*v9 & 1) == 0 )
    {
      *v9 = 17;
      *(_DWORD *)v10 = v6;
    }
    ++v6;
    ++v9;
    v10 += 5;
  }
  while ( v6 < 0x30 );
  v11 = 0;
  v64 = 0LL;
  v47 = 0;
  v59 = 0LL;
  do
  {
    v12 = HalpAddressUsageList;
    v48 = 0;
    v13 = 0;
    v14 = v11 != 0 ? 16 : 32;
    v46 = v14;
LABEL_12:
    v15 = 0;
    v50 = 0;
    while ( 1 )
    {
      while ( v13 <= 0xFF )
      {
        v16 = v13;
        if ( ((unsigned __int8)v14 & (unsigned __int8)HalpIDTUsageFlags[v13]) != 0 )
        {
          LODWORD(v67[0]) = 2097153;
          memset((char *)v67 + 4, 0, 0x104uLL);
          KiCopyAffinityEx((__int64)v67, 0x20u, (unsigned __int16 *)KeActiveProcessors);
          *(_WORD *)&Descriptor_8.Type = 514;
          v17 = HalpIDTUsageFlags[v16] & 2;
          Descriptor_8.Flags = v17 != 0;
          *(_QWORD *)&v60[12] = v67[1];
          Descriptor_8.u.Interrupt.Affinity = v67[1];
          *(_DWORD *)&v60[8] = v48;
          Descriptor_8.u.Generic.Start.HighPart = *(_DWORD *)&HalpIDTUsage[5 * v16 + 1];
          Descriptor_8.u.Generic.Start.LowPart = LOWORD(Descriptor_8.u.MessageInterrupt.Translated.Vector);
          *(_WORD *)v60 = 514;
          *(_WORD *)&v60[2] = Descriptor_8.Flags;
          v13 = v48 + 1;
          v18 = HIDWORD(v67[1]);
          *(_DWORD *)&v60[4] = (unsigned __int8)HalpIDTUsage[5 * v16];
          v15 = v50;
          ++v48;
          goto LABEL_17;
        }
        v4 = v56;
        v48 = ++v13;
      }
      if ( !v12 )
        break;
      if ( ((unsigned __int8)v14 & *(_BYTE *)(v12 + 12)) == 0 )
      {
        v12 = *(_QWORD *)v12;
        goto LABEL_12;
      }
      v23 = v15;
      v24 = *(_QWORD *)(v12 + 16LL * v15 + 21);
      if ( !v24 )
        goto LABEL_31;
      v25 = *(_DWORD *)(v12 + 8);
      if ( ((v25 - 1) & 0xFFFFFFF9) != 0 || v25 == 5 )
      {
        v14 = v46;
LABEL_31:
        v4 = v56;
        v12 = *(_QWORD *)v12;
        v13 = v48;
        goto LABEL_12;
      }
      v26 = *(_QWORD *)(v12 + 16LL * v15 + 13);
      Descriptor_8.Flags = 0;
      v27 = RtlCmEncodeMemIoResource(&Descriptor_8, v25, v24, v26);
      if ( v27 < 0 )
        KeBugCheckEx(0x5Cu, 0x10FuLL, v27, v12, v23);
      Descriptor_8.ShareDisposition = 2;
      if ( Descriptor_8.Type == 1 )
      {
        AddressSpace = 1;
        Descriptor_8.Flags = Descriptor_8.Type - 1 + 17;
      }
      else if ( Descriptor_8.Type == 3 || Descriptor_8.Type == 7 )
      {
        AddressSpace = 0;
        if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
          Descriptor_8.Flags |= 1u;
      }
      v55 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
      *(_OWORD *)v60 = *(_OWORD *)&Descriptor_8.Type;
      HalTranslateBusAddress(Internal, 0, Descriptor_8.u.Generic.Start, &AddressSpace, &TranslatedAddress);
      *(LARGE_INTEGER *)&v60[4] = TranslatedAddress;
      if ( !AddressSpace && Descriptor_8.Type == 1 )
        *(_WORD *)&v60[2] = 0;
      v13 = v48;
      v15 = v50 + 1;
      v18 = v55;
      ++v50;
LABEL_17:
      v4 = v56;
      v19 = v61;
      if ( *v63 )
      {
        ++*v2;
        v21 = v19 + 2;
        ++*v4;
        *v8 = 0;
        *v19 = 0;
        v20 = v8 + 2;
        v63 = v8;
        v19 += 4;
        v8 += 4;
        v64 = v20;
        v59 = (unsigned __int64)v21;
      }
      else
      {
        v20 = v64;
        v21 = (_DWORD *)v59;
      }
      ++v20[1];
      ++v21[1];
      v22 = *((_DWORD *)&Descriptor_8.u.Memory48 + 3);
      *(_OWORD *)v8 = *(_OWORD *)&Descriptor_8.Type;
      v8[4] = v22;
      v8 += 5;
      v14 = v46;
      *(_OWORD *)v19 = *(_OWORD *)v60;
      v19[4] = v18;
      v61 = v19 + 5;
    }
    v11 = v47 + 1;
    v47 = v11;
  }
  while ( v11 < 2u );
  v49 = 0;
  v59 = (unsigned int)((_DWORD)v8 - (_DWORD)v2);
  v28 = 0;
  if ( *v2 )
  {
LABEL_39:
    v29 = v5 + 16;
    v7 += 16LL;
    v30 = *(_DWORD *)(v5 + 12);
    v55 = v30;
    if ( !v30 )
      goto LABEL_50;
    while ( 1 )
    {
      HalpGetResourceSortValue(v29, &Descriptor, &v57);
      v31 = HIDWORD(v57);
      v32 = v30;
      v33 = Descriptor;
      v35 = v32 - v34;
      v37 = v36;
      v38 = v7;
      do
      {
        HalpGetResourceSortValue(v37, &v54, &v58);
        if ( v54 >= v33 )
        {
          if ( v54 != v33 )
            goto LABEL_47;
          v41 = SHIDWORD(v58) < v31;
          if ( HIDWORD(v58) != v31 )
            goto LABEL_46;
          if ( (unsigned int)v58 >= (unsigned int)v57 )
          {
            v41 = SHIDWORD(v58) < v31;
LABEL_46:
            if ( !v41 )
              goto LABEL_47;
          }
        }
        v42 = *((_DWORD *)v39 + 4);
        v43 = *v39;
        *v39 = *v37;
        *((_DWORD *)v39 + 4) = *((_DWORD *)v37 + 4);
        *v37 = v43;
        *((_DWORD *)v37 + 4) = v42;
        v44 = *(_DWORD *)(v7 + 16);
        v45 = *(_OWORD *)v7;
        *(_OWORD *)v7 = *(_OWORD *)v38;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)(v38 + 16);
        *(_OWORD *)v38 = v45;
        *(_DWORD *)(v38 + 16) = v44;
        HalpGetResourceSortValue(v39, &Descriptor, &v57);
        v31 = HIDWORD(v57);
        v33 = Descriptor;
LABEL_47:
        v37 = (__int128 *)((char *)v37 + 20);
        v38 += 20LL;
        --v35;
      }
      while ( v35 );
      v30 = v55;
      v29 = (__int64)v39 + 20;
      v7 += 20LL;
      if ( v40 + 1 >= v55 )
      {
        v2 = (unsigned int *)Pool2;
        v28 = v49;
LABEL_50:
        ++v28;
        v5 = v29;
        v49 = v28;
        if ( v28 >= *v2 )
        {
          v4 = v56;
          break;
        }
        goto LABEL_39;
      }
    }
  }
  IoReportHalResourceUsage(v66, v2, v4, (unsigned int)v59);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v4, 0);
}
