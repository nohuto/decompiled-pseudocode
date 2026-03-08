/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x1403A43AC
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1403A409C (HalpIommuInitializeDmar.c)
 *     IommuDomainCreateEx @ 0x14084E690 (IommuDomainCreateEx.c)
 *     IommuDomainCreate @ 0x140932730 (IommuDomainCreate.c)
 * Callees:
 *     HalpIommuGetPageTableType @ 0x14037CA10 (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037CA68 (HalpIommuCreateDmarPageTable.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x140409C64 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140515914 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x140515A38 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuFreeDmaDomain @ 0x140515CC0 (HalpIommuFreeDmaDomain.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14053000C (HalpBuddyAllocatorCreateAllocator.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, _QWORD *a5)
{
  int PageTableType; // edi
  int v8; // r12d
  char *v9; // rax
  char *v10; // rsi
  char *v11; // r13
  char v12; // r14
  char v13; // cl
  int v14; // eax
  char v15; // dl
  char v16; // al
  bool v17; // zf
  __int64 v18; // r9
  _DWORD *v19; // r8
  _QWORD *v20; // r14
  __int64 *v21; // rbx
  ULONG_PTR v22; // r12
  unsigned __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+44h] [rbp-3Ch]
  int v28; // [rsp+48h] [rbp-38h]
  _DWORD *v29; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-20h] BYREF
  BOOL v32; // [rsp+68h] [rbp-18h]

  v26 = 0;
  PageTableType = 0;
  v29 = a3;
  v8 = a1;
  v30 = a5;
  v9 = (char *)HalpMmAllocCtxAlloc(a1, 112LL);
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x70uLL);
    *((_DWORD *)v10 + 14) = -1;
    *((_DWORD *)v10 + 2) = 4;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v12 = 0;
        v11 = v10 + 52;
        v14 = 0;
        v13 = 0;
        goto LABEL_16;
      }
      if ( v8 == 2 )
      {
        v12 = 0;
        v10[52] = 1;
        v13 = 0;
        v11 = v10 + 52;
LABEL_15:
        v14 = 2;
LABEL_16:
        *((_QWORD *)v10 + 11) = 0LL;
        v15 = HalpHvIommu;
        *((_DWORD *)v10 + 3) = v14;
        *((_QWORD *)v10 + 10) = v10 + 72;
        *((_QWORD *)v10 + 9) = v10 + 72;
        *((_DWORD *)v10 + 2) = v8;
        if ( v15 )
          *((_QWORD *)v10 + 13) = 0LL;
        if ( v8 == 2 )
          goto LABEL_9;
        v16 = *v11;
        v27 = HalpIommuMaxPageTableDepth;
        v28 = HalpIommuMinPageTableDepth;
        if ( v16 )
        {
          v27 = 4;
          v28 = 4;
        }
        if ( v15 )
        {
          if ( v16 )
            v17 = HalpHvParaVirtIommuDomain == 0;
          else
            v17 = HalpHvIommuDeviceDomain == 0;
          if ( v17 )
            goto LABEL_9;
          if ( v8 == 1 )
          {
            *((_DWORD *)v10 + 12) = 0;
            goto LABEL_34;
          }
          if ( v8 != 3 )
          {
            *((_DWORD *)v10 + 12) = _InterlockedIncrement(&HalpIommuDomainId);
            v31 = 0LL;
            v32 = 0;
            LODWORD(v31) = *((_DWORD *)v10 + 12);
            BYTE4(v31) = *v11;
            v32 = (a2 & 0x4000000000000000LL) != 0;
            *(_WORD *)((char *)&v32 + 1) = a2 < 0;
            PageTableType = ((__int64 (__fastcall *)(__int64 *))qword_140C622A8)(&v31);
            if ( PageTableType < 0 )
              goto LABEL_59;
            v13 = 0;
LABEL_34:
            if ( v13 )
            {
              PageTableType = HalpIommuGetPageTableType(*v11, &v26);
              if ( PageTableType < 0 )
                goto LABEL_59;
              PageTableType = HalpIommuCreateDmarPageTable((unsigned int)v26, v28, v27, v18, v25, 0LL, (char **)v10 + 5);
              if ( PageTableType < 0 )
                goto LABEL_59;
            }
            v19 = v29;
            if ( v29 )
            {
              if ( !v12 && *v29 )
              {
                PageTableType = -1073741811;
                goto LABEL_59;
              }
              v20 = v10 + 64;
              *((_QWORD *)v10 + 8) = 0LL;
              if ( *v19 )
              {
                if ( *v19 != 1 )
                  goto LABEL_7;
                PageTableType = HalpBuddyAllocatorCreateAllocator((unsigned int)v19[1], v10 + 64);
                if ( PageTableType < 0 )
                  goto LABEL_59;
              }
              else
              {
                PageTableType = 0;
              }
            }
            else
            {
              v20 = v10 + 64;
            }
            v21 = a4;
            if ( !a4 )
            {
LABEL_53:
              *v30 = v10;
              return (unsigned int)PageTableType;
            }
            while ( 1 )
            {
              v22 = v21[1] & 0xFFFFFFFFFFFFF000uLL;
              if ( *v20 )
              {
                PageTableType = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(*(_QWORD *)*v20 + 16LL))(
                                  *v20,
                                  v21[1] & 0xFFFFFFFFFFFFF000uLL,
                                  v21[2]);
                if ( PageTableType < 0 )
                  break;
              }
              if ( *((_BYTE *)v21 + 24) )
              {
                PageTableType = HalpIommuDomainMapLogicalRange((_DWORD)v10, 3, v22, (unsigned int)v21[2] << 12, v22);
                if ( PageTableType < 0 )
                  break;
              }
              v21 = (__int64 *)*v21;
              if ( !v21 )
                goto LABEL_53;
            }
            while ( a4 != v21 )
            {
              if ( *((_BYTE *)a4 + 24) )
              {
                v24 = a4[1] & 0xFFFFFFFFFFFFF000uLL;
                v29 = (_DWORD *)(a4[2] << 12);
                HalpIommuDomainUnmapLogicalRange(v10, v24, &v29, 0LL);
              }
              a4 = (__int64 *)*a4;
            }
LABEL_59:
            HalpIommuFreeDmaDomain(v10);
            return (unsigned int)PageTableType;
          }
        }
        else
        {
          if ( (a2 & 0x4000000000000000LL) != 0 )
            goto LABEL_9;
          *((_QWORD *)v10 + 4) = 0LL;
          *((_QWORD *)v10 + 3) = v10 + 16;
          *((_QWORD *)v10 + 2) = v10 + 16;
        }
        v13 = v12;
        goto LABEL_34;
      }
      if ( v8 != 3 )
      {
LABEL_7:
        PageTableType = -1073741585;
        goto LABEL_59;
      }
      if ( !(unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() )
      {
LABEL_9:
        PageTableType = -1073741637;
        goto LABEL_59;
      }
      v11 = v10 + 52;
      v10[52] = 1;
    }
    else
    {
      v11 = v10 + 52;
    }
    v12 = 1;
    v13 = 1;
    goto LABEL_15;
  }
  return (unsigned int)-1073741670;
}
