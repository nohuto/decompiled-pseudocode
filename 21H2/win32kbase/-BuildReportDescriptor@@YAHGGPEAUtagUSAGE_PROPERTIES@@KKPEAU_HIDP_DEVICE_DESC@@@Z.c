/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C016ADBC
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C016B604 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C016B768 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C016AA10 (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C016AA84 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HIDP_DEVICE_DESC *a6)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v9; // ebx
  char v10; // si
  struct tagUSAGE_PROPERTIES *v11; // r15
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // r14d
  unsigned __int8 *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r12d
  struct tagUSAGE_PROPERTIES *v19; // r14
  __int128 v20; // xmm1
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // r12d
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  char v28; // si
  __int128 v29; // xmm1
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // edx
  int CollectionDescription; // eax
  __int64 v37; // [rsp+30h] [rbp-51h]
  unsigned int v38; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-35h] BYREF
  int v40; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-2Dh]
  _OWORD v42[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v43; // [rsp+78h] [rbp-9h] BYREF
  __int128 v44; // [rsp+88h] [rbp+7h]
  char v45; // [rsp+E0h] [rbp+5Fh]
  unsigned int v48; // [rsp+F8h] [rbp+77h]

  v45 = a2;
  v6 = *(_OWORD *)a3;
  v38 = 0;
  v7 = *((_OWORD *)a3 + 1);
  v39 = 0;
  v9 = 0;
  v10 = 0;
  v40 = 1;
  v11 = a3;
  v42[0] = v6;
  v42[1] = v7;
  if ( a5 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v13 = 1;
    if ( a5 )
      v13 = a5;
    v12 = 35LL * a4 * v13;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v14 = v13 + 13;
  }
  else
  {
    v12 = 35LL * a4;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v13 = 1;
    v14 = 23;
  }
  v15 = v14 + v12;
  v48 = v14 + v12;
  if ( !(v14 + (_DWORD)v12) )
    return 0LL;
  v16 = (unsigned __int8 *)Win32AllocPoolZInit(v15, 2020635477LL);
  if ( v16 )
  {
    BuildDeviceHeader(v16, v15, &v38, a1, v45);
    v17 = a4;
    v18 = 0;
    if ( a4 )
    {
      v19 = v11;
      do
      {
        if ( *(_WORD *)v19 == 1 )
        {
          v20 = *((_OWORD *)v19 + 1);
          v43 = *(_OWORD *)v19;
          v44 = v20;
          v9 = BuildMainItem(v16, v48, &v38, &v43, (__int64)v42, v37, &v40, &v39);
          if ( !v9 )
            goto LABEL_41;
          v10 += v39;
          v17 = a4;
        }
        ++v18;
        v19 = (struct tagUSAGE_PROPERTIES *)((char *)v19 + 32);
      }
      while ( v18 < v17 );
      if ( v9 )
      {
        v21 = v38;
        v22 = v13 - 1;
        v41 = v38;
        v23 = 0;
        v16[v38] = -64;
        v24 = v21 + 1;
        v38 = v21 + 1;
        if ( v13 != 1 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
LABEL_27:
              v11 = a3;
              v38 = v24;
              goto LABEL_28;
            }
            if ( v21 <= gulCollectionOffset )
              goto LABEL_25;
            v25 = v21 - gulCollectionOffset + 1;
            if ( v48 - v24 <= v25 )
              break;
            memmove(&v16[v24], &v16[gulCollectionOffset], v25);
            v21 = v41;
            v22 = v13 - 1;
            v24 += v25;
            v9 = 1;
LABEL_26:
            if ( ++v23 >= v22 )
              goto LABEL_27;
          }
          v22 = v13 - 1;
LABEL_25:
          v9 = 0;
          goto LABEL_26;
        }
LABEL_28:
        v26 = a4;
        v27 = 0;
        v28 = v13 * v10;
        do
        {
          if ( !*(_WORD *)v11 )
          {
            v29 = *((_OWORD *)v11 + 1);
            v43 = *(_OWORD *)v11;
            v44 = v29;
            v9 = BuildMainItem(v16, v48, &v38, &v43, (__int64)v42, v37, &v40, &v39);
            if ( !v9 )
              goto LABEL_41;
            v28 += v39;
            v26 = a4;
          }
          ++v27;
          v11 = (struct tagUSAGE_PROPERTIES *)((char *)v11 + 32);
        }
        while ( v27 < v26 );
        if ( v9 )
        {
          if ( (v28 & 7) != 0 )
          {
            v30 = v38;
            v16[v38] = 117;
            v16[v30 + 1] = 8 - (v28 & 7);
            v31 = v30 + 2;
            v16[v31] = -107;
            v32 = (unsigned int)(v31 + 1);
            v16[v32] = 1;
            v33 = (unsigned int)(v32 + 1);
            v16[v33] = -127;
            LODWORD(v33) = v33 + 1;
            v16[(unsigned int)v33] = 3;
            v34 = v33 + 1;
          }
          else
          {
            v34 = v38;
          }
          v16[v34] = -64;
          if ( gpfnHidP_GetCollectionDescription )
            CollectionDescription = gpfnHidP_GetCollectionDescription(v16, v34 + 1, PagedPool, a6);
          else
            CollectionDescription = -1073741637;
          v9 = CollectionDescription >= 0;
        }
      }
    }
LABEL_41:
    Win32FreePool((__int64)v16);
  }
  return v9;
}
